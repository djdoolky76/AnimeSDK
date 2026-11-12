#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BIGECLNFJPJ;
class GNFCHILBJDD;
class ODGPPIHLOFF;

#define JJFLABBCMBL_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xBA26D00)
#define JJFLABBCMBL_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xBA26C60)
#define JJFLABBCMBL_CCTOR_OFFSET UNITYSDK_OFFSET(0xBA26E20)
#define JJFLABBCMBL_DFJOEAIABMJ_OFFSET UNITYSDK_OFFSET(0xBA26BB0)

inline static constexpr unsigned int JJFLABBCMBL_TypeDefinitionIndex = 50280;

	class JJFLABBCMBL : public ::System::Object
	{
	public:
		static ::GNFCHILBJDD** StaticGet_MFPNICMCKJG()
		{
			return (::GNFCHILBJDD**)UnitySDK::FromName("", "JJFLABBCMBL")->GetStaticField(0xF6C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJFLABBCMBL_CCTOR_OFFSET))();
		}

		static ::System::Int32 DFJOEAIABMJ()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + JJFLABBCMBL_DFJOEAIABMJ_OFFSET))();
		}

		static ::ODGPPIHLOFF* ACMKLFOMPFC()
		{
			return ((::ODGPPIHLOFF*(*)())((::PBYTE)hIl2Cpp + JJFLABBCMBL_ACMKLFOMPFC_OFFSET))();
		}

		static ::System::Void ABKBOGIGAEH(::BIGECLNFJPJ* a1)
		{
			return ((::System::Void(*)(::BIGECLNFJPJ*))((::PBYTE)hIl2Cpp + JJFLABBCMBL_ABKBOGIGAEH_OFFSET))(a1);
		}

	};
