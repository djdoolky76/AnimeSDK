#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D16F810)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D16F850)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__GET_EQUIPCOUNTWITHOUTHACK_B__12_0_OFFSET UNITYSDK_OFFSET(0x1D16F860)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__GET_HACKEQUIP_B__22_0_OFFSET UNITYSDK_OFFSET(0x1D16FB10)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__GET_HASEQUIPCANUSEDTOCRAFT_B__20_0_OFFSET UNITYSDK_OFFSET(0x1D16F8C0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__GET_NONEBASICEQUIPCOUNT_B__14_0_OFFSET UNITYSDK_OFFSET(0x1D16F890)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__GET_SHOWNEQUIPS_B__24_0_OFFSET UNITYSDK_OFFSET(0x1D16FB40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipComponent___c_TypeDefinitionIndex = 66523;

	class GridFightEquipComponent___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70C70);
		}

		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70C78);
		}

		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70C80);
		}

		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70C88);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70C90);
		}

		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70C98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_EquipCountWithoutHack_b__12_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__GET_EQUIPCOUNTWITHOUTHACK_B__12_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_NoneBasicEquipCount_b__14_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__GET_NONEBASICEQUIPCOUNT_B__14_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_HasEquipCanUsedToCraft_b__20_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__GET_HASEQUIPCANUSEDTOCRAFT_B__20_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_HackEquip_b__22_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__GET_HACKEQUIP_B__22_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_ShownEquips_b__24_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__GET_SHOWNEQUIPS_B__24_0_OFFSET))(this, a1);
		}

	};
}
