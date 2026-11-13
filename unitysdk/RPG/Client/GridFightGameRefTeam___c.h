#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSeasonRole; }
namespace RPG::Client { class GridFightTrait; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD56BF0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD56C30)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__GETROLESBYTRAIT_B__61_1_OFFSET UNITYSDK_OFFSET(0x1CD56CF0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__GET_ACTIVATEDTRAITS_B__9_0_OFFSET UNITYSDK_OFFSET(0x1CD56C40)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__GET_ALLROLES_B__32_0_OFFSET UNITYSDK_OFFSET(0x1CD56C90)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__GET_UNLOCKEDEXPERTIDS_B__67_0_OFFSET UNITYSDK_OFFSET(0x1CD56D60)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__GET_UNLOCKEDEXPERTIDS_B__67_1_OFFSET UNITYSDK_OFFSET(0x1CD56EF0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C___REBUILDALLMEMBERS_B__60_0_OFFSET UNITYSDK_OFFSET(0x1CD56CD0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C___SYNCTEAM_B__59_2_OFFSET UNITYSDK_OFFSET(0x1CD56CB0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C___SYNCTEAM_B__59_4_OFFSET UNITYSDK_OFFSET(0x1CD56CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefTeam___c_TypeDefinitionIndex = 66342;

	class GridFightGameRefTeam___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71A60);
		}

		static ::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71A68);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71A70);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__61_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71A78);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__59_4()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71A80);
		}

		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::Boolean>** StaticGet___9__67_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71A88);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__59_2()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71A90);
		}

		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>** StaticGet___9__60_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71A98);
		}

		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::UInt32>** StaticGet___9__67_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71AA0);
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
