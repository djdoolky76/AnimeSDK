#pragma once
#include "unitysdk/unitysdk.h"
class AGKHOGNMPMO;
class IGNPKBNCDEP;
class OFLBAIOGIMO;
namespace System { class Action; }

#define OFLBAIOGIMO_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xBE46100)
#define OFLBAIOGIMO_ACMKLFOMPFC_1_OFFSET UNITYSDK_OFFSET(0xBE46900)
#define OFLBAIOGIMO_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xBE46050)
#define OFLBAIOGIMO_CCTOR_OFFSET UNITYSDK_OFFSET(0xBE46A80)
#define OFLBAIOGIMO_CTOR_OFFSET UNITYSDK_OFFSET(0xBE46A70)

	class OFLBAIOGIMO
	{
	public:
		static ::IGNPKBNCDEP** StaticGet_MFPNICMCKJG()
		{
			return (::IGNPKBNCDEP**)UnitySDK::FromName("", "OFLBAIOGIMO")->GetStaticField(0x64790);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLBAIOGIMO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFLBAIOGIMO_CCTOR_OFFSET))();
		}

		static ::OFLBAIOGIMO* ACMKLFOMPFC(::System::Action* a1, ::AGKHOGNMPMO* a2)
		{
			return ((::OFLBAIOGIMO*(*)(::System::Action*, ::AGKHOGNMPMO*))((::PBYTE)hIl2Cpp + OFLBAIOGIMO_ACMKLFOMPFC_OFFSET))(a1, a2);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLBAIOGIMO_ABKBOGIGAEH_OFFSET))(this);
		}

		static ::OFLBAIOGIMO* ACMKLFOMPFC_1(::System::Action* a1)
		{
			return ((::OFLBAIOGIMO*(*)(::System::Action*))((::PBYTE)hIl2Cpp + OFLBAIOGIMO_ACMKLFOMPFC_1_OFFSET))(a1);
		}

	};
