#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightTraitBonusConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9FB680)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9FB6C0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___C__GET_BONUSTYPECONFIGS_B__57_0_OFFSET UNITYSDK_OFFSET(0x1C9FB700)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___C__GET_ENHANCETYPECONFIGS_B__59_0_OFFSET UNITYSDK_OFFSET(0x1C9FB760)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___C___CALCULATEEQUIP_B__6_0_OFFSET UNITYSDK_OFFSET(0x1C9FB6D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitSpaceEffect___c_TypeDefinitionIndex = 65878;

	class GridFightTraitSpaceEffect___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x177C0);
		}

		static ::System::Func_2<::RPG::Client::GridFightTraitBonusConfig*, ::System::Boolean>** StaticGet___9__59_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitBonusConfig*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x177C8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x177D0);
		}

		static ::System::Func_2<::RPG::Client::GridFightTraitBonusConfig*, ::System::Boolean>** StaticGet___9__57_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitBonusConfig*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x177D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __CalculateEquip_b__6_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___C___CALCULATEEQUIP_B__6_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_BonusTypeConfigs_b__57_0(::RPG::Client::GridFightTraitBonusConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitBonusConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___C__GET_BONUSTYPECONFIGS_B__57_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_EnhanceTypeConfigs_b__59_0(::RPG::Client::GridFightTraitBonusConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitBonusConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___C__GET_ENHANCETYPECONFIGS_B__59_0_OFFSET))(this, a1);
		}

	};
}
