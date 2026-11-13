#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBPNHCICJGF.h"
#include "unitysdk/HOIMPNMCBEI.h"
class EBBJGCKIBAA;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TurnBasedGameMode; }

#define OOJOKHAAKGD_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x196AC580)
#define OOJOKHAAKGD_CTOR_OFFSET UNITYSDK_OFFSET(0x196ABCD0)
#define OOJOKHAAKGD_GKPMCFLOJHJ_OFFSET UNITYSDK_OFFSET(0x196ABFF0)
#define OOJOKHAAKGD_IEGLEELHCGG_OFFSET UNITYSDK_OFFSET(0x196AC450)
#define OOJOKHAAKGD_INOMGFMHLDO_OFFSET UNITYSDK_OFFSET(0x196AC750)
#define OOJOKHAAKGD_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x196ABCE0)
#define OOJOKHAAKGD_TICK_OFFSET UNITYSDK_OFFSET(0x196AC360)

inline static constexpr unsigned int OOJOKHAAKGD_TypeDefinitionIndex = 57486;

	class OOJOKHAAKGD : public ::HBPNHCICJGF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::EBBJGCKIBAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::EBBJGCKIBAA*))((::PBYTE)hIl2Cpp + OOJOKHAAKGD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOJOKHAAKGD_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOJOKHAAKGD_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OOJOKHAAKGD_TICK_OFFSET))(this, a1);
		}

		::HOIMPNMCBEI INOMGFMHLDO()
		{
			return ((::HOIMPNMCBEI(*)(::PVOID))((::PBYTE)hIl2Cpp + OOJOKHAAKGD_INOMGFMHLDO_OFFSET))(this);
		}

		::System::Boolean GKPMCFLOJHJ(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + OOJOKHAAKGD_GKPMCFLOJHJ_OFFSET))(this, a1, a2);
		}

		::HOIMPNMCBEI IEGLEELHCGG()
		{
			return ((::HOIMPNMCBEI(*)(::PVOID))((::PBYTE)hIl2Cpp + OOJOKHAAKGD_IEGLEELHCGG_OFFSET))(this);
		}

	};
