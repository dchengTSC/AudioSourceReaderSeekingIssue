#include "stdafx.h"
#include <atlstr.h>
#include <mfapi.h>
#include <mfidl.h>
#include <mfreadwrite.h>
#include <atlcomcli.h>

int main()
{
   IMFSourceReader* sourceReader = nullptr;

   CoInitialize( nullptr );
   MFStartup( MF_VERSION );
   HRESULT hr = MFCreateSourceReaderFromURL( _T( "Narration_AIR.m4a" ), nullptr, &sourceReader );

   sourceReader->Release();

   MFShutdown();
   CoUninitialize();

   return 0;
}

