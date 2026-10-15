#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace System { class Object; }

#define KMDJGOOINCK_CCTOR_OFFSET UNITYSDK_OFFSET(0xB544E50)
#define KMDJGOOINCK_EOPDKIGDFPJ_OFFSET UNITYSDK_OFFSET(0xB544CF0)
#define KMDJGOOINCK_GENHBHBPIHJ_1_OFFSET UNITYSDK_OFFSET(0xB544B60)
#define KMDJGOOINCK_GENHBHBPIHJ_2_OFFSET UNITYSDK_OFFSET(0xB544C20)
#define KMDJGOOINCK_GENHBHBPIHJ_OFFSET UNITYSDK_OFFSET(0xB544AA0)
#define KMDJGOOINCK_KPLCNPIBLEA_1_OFFSET UNITYSDK_OFFSET(0xB5445A0)
#define KMDJGOOINCK_KPLCNPIBLEA_2_OFFSET UNITYSDK_OFFSET(0xB544660)
#define KMDJGOOINCK_KPLCNPIBLEA_OFFSET UNITYSDK_OFFSET(0xB5444D0)
#define KMDJGOOINCK_MPDBEOPOOLL_OFFSET UNITYSDK_OFFSET(0xB544740)
#define KMDJGOOINCK_NBJHOBAHHME_OFFSET UNITYSDK_OFFSET(0xB544170)

	class KMDJGOOINCK : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Double>** StaticGet_JBOJGLGMJLK()
		{
			return (::Il2CppArray<::System::Double>**)UnitySDK::FromName("", "KMDJGOOINCK")->GetStaticField(0x5F360);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMDJGOOINCK_CCTOR_OFFSET))();
		}

		static ::System::Double NBJHOBAHHME(::System::Object* a1, ::System::Int32 a2)
		{
			return ((::System::Double(*)(::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + KMDJGOOINCK_NBJHOBAHHME_OFFSET))(a1, a2);
		}

		static ::System::Double KPLCNPIBLEA(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Double(*)(::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + KMDJGOOINCK_KPLCNPIBLEA_OFFSET))(a1, a2);
		}

		static ::System::Double KPLCNPIBLEA_1(::System::Double a1, ::System::Int32 a2)
		{
			return ((::System::Double(*)(::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + KMDJGOOINCK_KPLCNPIBLEA_1_OFFSET))(a1, a2);
		}

		static ::System::Double KPLCNPIBLEA_2(::RPG::GameCore::FixPoint a1, ::System::Int32 a2)
		{
			return ((::System::Double(*)(::RPG::GameCore::FixPoint, ::System::Int32))((::PBYTE)hIl2Cpp + KMDJGOOINCK_KPLCNPIBLEA_2_OFFSET))(a1, a2);
		}

		static ::System::Double MPDBEOPOOLL(::System::Object* a1, ::System::Int32 a2)
		{
			return ((::System::Double(*)(::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + KMDJGOOINCK_MPDBEOPOOLL_OFFSET))(a1, a2);
		}

		static ::System::Double GENHBHBPIHJ(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Double(*)(::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + KMDJGOOINCK_GENHBHBPIHJ_OFFSET))(a1, a2);
		}

		static ::System::Double GENHBHBPIHJ_1(::System::Double a1, ::System::Int32 a2)
		{
			return ((::System::Double(*)(::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + KMDJGOOINCK_GENHBHBPIHJ_1_OFFSET))(a1, a2);
		}

		static ::System::Double GENHBHBPIHJ_2(::RPG::GameCore::FixPoint a1, ::System::Int32 a2)
		{
			return ((::System::Double(*)(::RPG::GameCore::FixPoint, ::System::Int32))((::PBYTE)hIl2Cpp + KMDJGOOINCK_GENHBHBPIHJ_2_OFFSET))(a1, a2);
		}

		static ::System::Double EOPDKIGDFPJ(::System::Int32 a1)
		{
			return ((::System::Double(*)(::System::Int32))((::PBYTE)hIl2Cpp + KMDJGOOINCK_EOPDKIGDFPJ_OFFSET))(a1);
		}

	};
