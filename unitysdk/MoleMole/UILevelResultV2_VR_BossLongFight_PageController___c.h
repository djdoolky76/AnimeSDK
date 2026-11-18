#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NFGHOLFKEPK;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UILEVELRESULTV2_VR_BOSSLONGFIGHT_PAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19613520)
#define MOLEMOLE_UILEVELRESULTV2_VR_BOSSLONGFIGHT_PAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19613560)
#define MOLEMOLE_UILEVELRESULTV2_VR_BOSSLONGFIGHT_PAGECONTROLLER___C__REALRESTART_B__5_0_OFFSET UNITYSDK_OFFSET(0x19613730)
#define MOLEMOLE_UILEVELRESULTV2_VR_BOSSLONGFIGHT_PAGECONTROLLER___C___ONCLICKRESTARTWITHCOST_B__1_0_OFFSET UNITYSDK_OFFSET(0x19613570)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultV2_VR_BossLongFight_PageController___c_TypeDefinitionIndex = 51422;

	class UILevelResultV2_VR_BossLongFight_PageController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::NFGHOLFKEPK*>** StaticGet___9__5_0()
		{
			return (::System::Action_1<::NFGHOLFKEPK*>**)Il2CppClass::FromTypeDefinitionIndex(UILevelResultV2_VR_BossLongFight_PageController___c_TypeDefinitionIndex)->GetStaticField(0x38F50);
		}
		static ::System::Action_1<::NFGHOLFKEPK*>** StaticGet___9__1_0()
		{
			return (::System::Action_1<::NFGHOLFKEPK*>**)Il2CppClass::FromTypeDefinitionIndex(UILevelResultV2_VR_BossLongFight_PageController___c_TypeDefinitionIndex)->GetStaticField(0x38F58);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UILevelResultV2_VR_BossLongFight_PageController___c_TypeDefinitionIndex)->GetStaticField(0x38F60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_VR_BOSSLONGFIGHT_PAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_VR_BOSSLONGFIGHT_PAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void __OnClickRestartWithCost_b__1_0(::NFGHOLFKEPK* msg)
		{
			return ((::System::Void(*)(::PVOID, ::NFGHOLFKEPK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_VR_BOSSLONGFIGHT_PAGECONTROLLER___C___ONCLICKRESTARTWITHCOST_B__1_0_OFFSET))(this, msg);
		}

		::System::Void _RealRestart_b__5_0(::NFGHOLFKEPK* msg)
		{
			return ((::System::Void(*)(::PVOID, ::NFGHOLFKEPK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_VR_BOSSLONGFIGHT_PAGECONTROLLER___C__REALRESTART_B__5_0_OFFSET))(this, msg);
		}
	};
}
