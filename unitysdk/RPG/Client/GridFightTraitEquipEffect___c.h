#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDCE2E20)
#define RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDCE2E60)
#define RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECT___C__GET_EQUIPITEMDATAS_B__3_0_OFFSET UNITYSDK_OFFSET(0xDCE2E70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitEquipEffect___c_TypeDefinitionIndex = 67244;

	class GridFightTraitEquipEffect___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::RPG::Client::GridFightEquipItemData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x14D60);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x14D68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECT___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemData* _get_EquipItemDatas_b__3_0(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECT___C__GET_EQUIPITEMDATAS_B__3_0_OFFSET))(this, a1);
		}

	};
}
