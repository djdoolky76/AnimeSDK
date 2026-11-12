#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CakeRaceTitleRow; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define ONIJDACKGJG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D964E60)
#define ONIJDACKGJG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D964EA0)
#define ONIJDACKGJG___C__LOADTITLECONFIG_B__14_0_OFFSET UNITYSDK_OFFSET(0x1D964EB0)

inline static constexpr unsigned int ONIJDACKGJG___c_TypeDefinitionIndex = 38157;

	class ONIJDACKGJG___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::CakeRaceTitleRow*>** StaticGet___9__14_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::CakeRaceTitleRow*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x139F0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x139F8);
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
