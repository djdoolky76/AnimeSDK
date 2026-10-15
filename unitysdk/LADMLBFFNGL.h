#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFNHLMGKJLC;
class GNFCHILBJDD;
class ODGPPIHLOFF;

#define LADMLBFFNGL_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xB5DBA30)
#define LADMLBFFNGL_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xB5DB9B0)
#define LADMLBFFNGL_CCTOR_OFFSET UNITYSDK_OFFSET(0xB5DBBE0)
#define LADMLBFFNGL_DFJOEAIABMJ_OFFSET UNITYSDK_OFFSET(0xB5DB900)

	class LADMLBFFNGL : public ::System::Object
	{
	public:
		static ::GNFCHILBJDD** StaticGet_MFPNICMCKJG()
		{
			return (::GNFCHILBJDD**)UnitySDK::FromName("", "LADMLBFFNGL")->GetStaticField(0x667D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LADMLBFFNGL_CCTOR_OFFSET))();
		}

		static ::System::Int32 DFJOEAIABMJ()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + LADMLBFFNGL_DFJOEAIABMJ_OFFSET))();
		}

		static ::ODGPPIHLOFF* ACMKLFOMPFC()
		{
			return ((::ODGPPIHLOFF*(*)())((::PBYTE)hIl2Cpp + LADMLBFFNGL_ACMKLFOMPFC_OFFSET))();
		}

		static ::System::Void ABKBOGIGAEH(::BFNHLMGKJLC* a1)
		{
			return ((::System::Void(*)(::BFNHLMGKJLC*))((::PBYTE)hIl2Cpp + LADMLBFFNGL_ABKBOGIGAEH_OFFSET))(a1);
		}

	};
