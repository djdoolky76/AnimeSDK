#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHEEJBJHLOB.h"
class AGKHOGNMPMO;
class IGNPKBNCDEP;
class KPBPOKHFDOM;
namespace System { class Action; }

#define KPBPOKHFDOM_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xB5AFE20)
#define KPBPOKHFDOM_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xB5AFD00)
#define KPBPOKHFDOM_CCTOR_OFFSET UNITYSDK_OFFSET(0xB5AFEE0)
#define KPBPOKHFDOM_CTOR_OFFSET UNITYSDK_OFFSET(0xB5AFEB0)
#define KPBPOKHFDOM_MBABPIHGAJN_OFFSET UNITYSDK_OFFSET(0xB5AFDB0)

	class KPBPOKHFDOM : public ::MHEEJBJHLOB
	{
	public:
		static ::IGNPKBNCDEP** StaticGet_MFPNICMCKJG()
		{
			return (::IGNPKBNCDEP**)UnitySDK::FromName("", "KPBPOKHFDOM")->GetStaticField(0x652C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPBPOKHFDOM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPBPOKHFDOM_CCTOR_OFFSET))();
		}

		static ::KPBPOKHFDOM* ACMKLFOMPFC(::System::Action* a1, ::AGKHOGNMPMO* a2)
		{
			return ((::KPBPOKHFDOM*(*)(::System::Action*, ::AGKHOGNMPMO*))((::PBYTE)hIl2Cpp + KPBPOKHFDOM_ACMKLFOMPFC_OFFSET))(a1, a2);
		}

		::System::Void MBABPIHGAJN(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + KPBPOKHFDOM_MBABPIHGAJN_OFFSET))(this, a1);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPBPOKHFDOM_ABKBOGIGAEH_OFFSET))(this);
		}

	};
