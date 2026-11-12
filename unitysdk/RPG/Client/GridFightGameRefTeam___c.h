#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSeasonRole; }
namespace RPG::Client { class GridFightTrait; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDB42820)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDB42860)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__GETROLESBYTRAIT_B__61_1_OFFSET UNITYSDK_OFFSET(0xDB42920)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__GET_ACTIVATEDTRAITS_B__9_0_OFFSET UNITYSDK_OFFSET(0xDB42870)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__GET_ALLROLES_B__32_0_OFFSET UNITYSDK_OFFSET(0xDB428C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__GET_UNLOCKEDEXPERTIDS_B__67_0_OFFSET UNITYSDK_OFFSET(0xDB42990)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__GET_UNLOCKEDEXPERTIDS_B__67_1_OFFSET UNITYSDK_OFFSET(0xDB42B20)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C___REBUILDALLMEMBERS_B__60_0_OFFSET UNITYSDK_OFFSET(0xDB42900)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C___SYNCTEAM_B__59_2_OFFSET UNITYSDK_OFFSET(0xDB428E0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C___SYNCTEAM_B__59_4_OFFSET UNITYSDK_OFFSET(0xDB428F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefTeam___c_TypeDefinitionIndex = 66342;

	class GridFightGameRefTeam___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71D10);
		}

		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::UInt32>** StaticGet___9__67_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71D18);
		}

		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::Boolean>** StaticGet___9__67_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71D20);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__59_4()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71D28);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__59_2()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71D30);
		}

		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71D38);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71D40);
		}

		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>** StaticGet___9__60_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71D48);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__61_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71D50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_ActivatedTraits_b__9_0(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__GET_ACTIVATEDTRAITS_B__9_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* _get_AllRoles_b__32_0(::RPG::Client::GridFightSeasonRole* a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__GET_ALLROLES_B__32_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* __SyncTeam_b__59_2(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C___SYNCTEAM_B__59_2_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* __SyncTeam_b__59_4(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C___SYNCTEAM_B__59_4_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* __RebuildAllMembers_b__60_0(::RPG::Client::GridFightSeasonRole* a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C___REBUILDALLMEMBERS_B__60_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetRolesByTrait_b__61_1(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__GETROLESBYTRAIT_B__61_1_OFFSET))(this, a1);
		}

		::System::Boolean _get_UnlockedExpertIDs_b__67_0(::RPG::Client::GridFightSeasonRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__GET_UNLOCKEDEXPERTIDS_B__67_0_OFFSET))(this, a1);
		}

		::System::UInt32 _get_UnlockedExpertIDs_b__67_1(::RPG::Client::GridFightSeasonRole* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__GET_UNLOCKEDEXPERTIDS_B__67_1_OFFSET))(this, a1);
		}

	};
}
