#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFNHLMGKJLC;
class GNFCHILBJDD;
class ODGPPIHLOFF;

#define LADMLBFFNGL_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xB5D50C0)
#define LADMLBFFNGL_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xB5D5040)
#define LADMLBFFNGL_CCTOR_OFFSET UNITYSDK_OFFSET(0xB5D5270)
#define LADMLBFFNGL_DFJOEAIABMJ_OFFSET UNITYSDK_OFFSET(0xB5D4F90)

inline static constexpr unsigned int LADMLBFFNGL_TypeDefinitionIndex = 49206;

	class LADMLBFFNGL : public ::System::Object
	{
	public:
		static ::GNFCHILBJDD** StaticGet_MFPNICMCKJG()
		{
			return (::GNFCHILBJDD**)UnitySDK::FromName("", "LADMLBFFNGL")->GetStaticField(0x63E50);
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
