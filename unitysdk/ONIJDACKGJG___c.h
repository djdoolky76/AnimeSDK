#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CakeRaceTitleRow; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define ONIJDACKGJG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7E3530)
#define ONIJDACKGJG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7E3570)
#define ONIJDACKGJG___C__LOADTITLECONFIG_B__14_0_OFFSET UNITYSDK_OFFSET(0x1C7E3580)

	class ONIJDACKGJG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1AC10);
		}

		static ::System::Comparison_1<::RPG::GameCore::CakeRaceTitleRow*>** StaticGet___9__14_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::CakeRaceTitleRow*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1AC18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONIJDACKGJG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _LoadTitleConfig_b__14_0(::RPG::GameCore::CakeRaceTitleRow* a1, ::RPG::GameCore::CakeRaceTitleRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::CakeRaceTitleRow*, ::RPG::GameCore::CakeRaceTitleRow*))((::PBYTE)hIl2Cpp + ONIJDACKGJG___C__LOADTITLECONFIG_B__14_0_OFFSET))(this, a1, a2);
		}

	};
