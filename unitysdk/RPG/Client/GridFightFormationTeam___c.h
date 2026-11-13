#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSeasonRole; }
namespace RPG::Client { class GridFightTrait; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D673B10)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D673B50)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GETROLESBYTRAIT_B__74_1_OFFSET UNITYSDK_OFFSET(0x1D673DF0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GET_ACTIVATEDTRAITS_B__9_0_OFFSET UNITYSDK_OFFSET(0x1D673B60)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GET_ALLROLES_B__34_0_OFFSET UNITYSDK_OFFSET(0x1D673C00)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GET_ALLROLES_B__34_1_OFFSET UNITYSDK_OFFSET(0x1D673D90)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GET_TRAITSWITHLAYERMORETHANONE_B__11_0_OFFSET UNITYSDK_OFFSET(0x1D673BB0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GET_UNLOCKEDEXPERTIDS_B__80_0_OFFSET UNITYSDK_OFFSET(0x1D673E60)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GET_UNLOCKEDEXPERTIDS_B__80_1_OFFSET UNITYSDK_OFFSET(0x1D673FF0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C___SYNCTEAM_B__70_1_OFFSET UNITYSDK_OFFSET(0x1D673DD0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C___SYNCTEAM_B__70_3_OFFSET UNITYSDK_OFFSET(0x1D673DB0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C___SYNCTEAM_B__70_5_OFFSET UNITYSDK_OFFSET(0x1D673DC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFormationTeam___c_TypeDefinitionIndex = 66198;

	class GridFightFormationTeam___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::Boolean>** StaticGet___9__80_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71340);
		}

		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>** StaticGet___9__34_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71348);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71350);
		}

		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>** StaticGet___9__70_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71358);
		}

		static ::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71360);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__70_5()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71368);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__70_3()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71370);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__74_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71378);
		}

		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::UInt32>** StaticGet___9__34_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71380);
		}

		static ::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71388);
		}

		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::UInt32>** StaticGet___9__80_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71390);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_ActivatedTraits_b__9_0(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GET_ACTIVATEDTRAITS_B__9_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_TraitsWithLayerMoreThanOne_b__11_0(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GET_TRAITSWITHLAYERMORETHANONE_B__11_0_OFFSET))(this, a1);
		}

		::System::UInt32 _get_AllRoles_b__34_0(::RPG::Client::GridFightSeasonRole* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GET_ALLROLES_B__34_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* _get_AllRoles_b__34_1(::RPG::Client::GridFightSeasonRole* a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GET_ALLROLES_B__34_1_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* __SyncTeam_b__70_3(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C___SYNCTEAM_B__70_3_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* __SyncTeam_b__70_5(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C___SYNCTEAM_B__70_5_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* __SyncTeam_b__70_1(::RPG::Client::GridFightSeasonRole* a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C___SYNCTEAM_B__70_1_OFFSET))(this, a1);
		}

		::System::Boolean _GetRolesByTrait_b__74_1(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GETROLESBYTRAIT_B__74_1_OFFSET))(this, a1);
		}

		::System::Boolean _get_UnlockedExpertIDs_b__80_0(::RPG::Client::GridFightSeasonRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GET_UNLOCKEDEXPERTIDS_B__80_0_OFFSET))(this, a1);
		}

		::System::UInt32 _get_UnlockedExpertIDs_b__80_1(::RPG::Client::GridFightSeasonRole* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GET_UNLOCKEDEXPERTIDS_B__80_1_OFFSET))(this, a1);
		}

	};
}
