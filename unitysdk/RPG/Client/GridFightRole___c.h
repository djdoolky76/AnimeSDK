#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace RPG::GameCore { class GridFightRoleRecommendEquipConfigRow; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTROLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D4D9D20)
#define RPG_CLIENT_GRIDFIGHTROLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D9D60)
#define RPG_CLIENT_GRIDFIGHTROLE___C__GETBACKFIRSTRECOMMENDEQUIP_B__8_0_OFFSET UNITYSDK_OFFSET(0x1D4D9D90)
#define RPG_CLIENT_GRIDFIGHTROLE___C__GETBACKSECONDRECOMMENDEQUIP_B__10_0_OFFSET UNITYSDK_OFFSET(0x1D4D9DD0)
#define RPG_CLIENT_GRIDFIGHTROLE___C__GETFRONTFIRSTRECOMMENDEQUIP_B__7_0_OFFSET UNITYSDK_OFFSET(0x1D4D9D70)
#define RPG_CLIENT_GRIDFIGHTROLE___C__GETFRONTSECONDRECOMMENDEQUIP_B__9_0_OFFSET UNITYSDK_OFFSET(0x1D4D9DB0)
#define RPG_CLIENT_GRIDFIGHTROLE___C__GETSECONDRECOMMENDEQUIP_B__11_0_OFFSET UNITYSDK_OFFSET(0x1D4D9DF0)
#define RPG_CLIENT_GRIDFIGHTROLE___C__GET_EQUIPS_B__34_0_OFFSET UNITYSDK_OFFSET(0x1D4D9E10)
#define RPG_CLIENT_GRIDFIGHTROLE___C___GETEFFECTTRAITIDS_B__123_0_OFFSET UNITYSDK_OFFSET(0x1D4D9E60)
#define RPG_CLIENT_GRIDFIGHTROLE___C___GETEFFECTTRAITIDS_B__123_1_OFFSET UNITYSDK_OFFSET(0x1D4D9EC0)
#define RPG_CLIENT_GRIDFIGHTROLE___C___UPDATETRAITIDS_B__122_0_OFFSET UNITYSDK_OFFSET(0x1D4D9E40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRole___c_TypeDefinitionIndex = 66789;

	class GridFightRole___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightTraitConfig*, ::System::UInt32>** StaticGet___9__123_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitConfig*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x9620);
		}

		static ::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x9628);
		}

		static ::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x9630);
		}

		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__34_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x9638);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x9640);
		}

		static ::System::Func_2<::RPG::Client::GridFightTraitConfig*, ::System::Boolean>** StaticGet___9__123_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitConfig*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x9648);
		}

		static ::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x9650);
		}

		static ::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x9658);
		}

		static ::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x9660);
		}

		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>** StaticGet___9__122_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x9668);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE___C_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* _GetFrontFirstRecommendEquip_b__7_0(::RPG::GameCore::GridFightRoleRecommendEquipConfigRow* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE___C__GETFRONTFIRSTRECOMMENDEQUIP_B__7_0_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* _GetBackFirstRecommendEquip_b__8_0(::RPG::GameCore::GridFightRoleRecommendEquipConfigRow* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE___C__GETBACKFIRSTRECOMMENDEQUIP_B__8_0_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* _GetFrontSecondRecommendEquip_b__9_0(::RPG::GameCore::GridFightRoleRecommendEquipConfigRow* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE___C__GETFRONTSECONDRECOMMENDEQUIP_B__9_0_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* _GetBackSecondRecommendEquip_b__10_0(::RPG::GameCore::GridFightRoleRecommendEquipConfigRow* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE___C__GETBACKSECONDRECOMMENDEQUIP_B__10_0_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* _GetSecondRecommendEquip_b__11_0(::RPG::GameCore::GridFightRoleRecommendEquipConfigRow* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE___C__GETSECONDRECOMMENDEQUIP_B__11_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_Equips_b__34_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE___C__GET_EQUIPS_B__34_0_OFFSET))(this, a1);
		}

		::System::UInt32 __UpdateTraitIDs_b__122_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE___C___UPDATETRAITIDS_B__122_0_OFFSET))(this, a1);
		}

		::System::Boolean __GetEffectTraitIDs_b__123_0(::RPG::Client::GridFightTraitConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE___C___GETEFFECTTRAITIDS_B__123_0_OFFSET))(this, a1);
		}

		::System::UInt32 __GetEffectTraitIDs_b__123_1(::RPG::Client::GridFightTraitConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightTraitConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE___C___GETEFFECTTRAITIDS_B__123_1_OFFSET))(this, a1);
		}

	};
}
