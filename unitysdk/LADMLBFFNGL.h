#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFNHLMGKJLC;
class GNFCHILBJDD;
class ODGPPIHLOFF;

#define LADMLBFFNGL_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x1B278FF0)
#define LADMLBFFNGL_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x1B278F70)
#define LADMLBFFNGL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2791A0)
#define LADMLBFFNGL_DFJOEAIABMJ_OFFSET UNITYSDK_OFFSET(0x1B278EC0)

inline static constexpr unsigned int LADMLBFFNGL_TypeDefinitionIndex = 50282;

	class LADMLBFFNGL : public ::System::Object
	{
	public:
		static ::GNFCHILBJDD** StaticGet_MFPNICMCKJG()
		{
			return (::GNFCHILBJDD**)UnitySDK::FromName("", "LADMLBFFNGL")->GetStaticField(0x6FB50);
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
