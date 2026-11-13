#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightFormationRole; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSeasonRole; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6808D0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D680910)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_ISEMPTY_B__80_0_OFFSET UNITYSDK_OFFSET(0x1D680A00)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_ISEMPTY_B__80_1_OFFSET UNITYSDK_OFFSET(0x1D680A10)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_MAINROLES_B__98_0_OFFSET UNITYSDK_OFFSET(0x1D680A20)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_RECOMMENDBASICEQUIPS_B__56_0_OFFSET UNITYSDK_OFFSET(0x1D6809C0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_RECOMMENDBASICEQUIPS_B__56_1_OFFSET UNITYSDK_OFFSET(0x1D6809D0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_RECOMMENDEQUIPS_B__58_0_OFFSET UNITYSDK_OFFSET(0x1D6809E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_RECOMMENDEQUIPS_B__58_1_OFFSET UNITYSDK_OFFSET(0x1D6809F0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__HASANYEQUIPTOTRACK_B__29_0_OFFSET UNITYSDK_OFFSET(0x1D680920)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormation___c_TypeDefinitionIndex = 66216;

	class GridFightGameFormation___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__56_1()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x714C0);
		}

		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__80_1()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x714C8);
		}

		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__80_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x714D0);
		}

		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>** StaticGet___9__98_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x714D8);
		}

		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__58_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x714E0);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__58_1()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x714E8);
		}

		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__56_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x714F0);
		}

		static ::System::Func_2<::RPG::Client::GridFightFormationRole*, ::System::Boolean>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightFormationRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x714F8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71500);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _HasAnyEquipToTrack_b__29_0(::RPG::Client::GridFightFormationRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightFormationRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__HASANYEQUIPTOTRACK_B__29_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_RecommendBasicEquips_b__56_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_RECOMMENDBASICEQUIPS_B__56_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* _get_RecommendBasicEquips_b__56_1(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_RECOMMENDBASICEQUIPS_B__56_1_OFFSET))(this, a1);
		}

		::System::Boolean _get_RecommendEquips_b__58_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_RECOMMENDEQUIPS_B__58_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* _get_RecommendEquips_b__58_1(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_RECOMMENDEQUIPS_B__58_1_OFFSET))(this, a1);
		}

		::System::Boolean _get_IsEmpty_b__80_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_ISEMPTY_B__80_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_IsEmpty_b__80_1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_ISEMPTY_B__80_1_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* _get_MainRoles_b__98_0(::RPG::Client::GridFightSeasonRole* a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_MAINROLES_B__98_0_OFFSET))(this, a1);
		}

	};
}
