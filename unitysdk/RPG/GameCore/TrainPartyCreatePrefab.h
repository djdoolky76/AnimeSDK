#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyCreatePrefab; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYCREATEPREFAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC30650)
#define RPG_GAMECORE_TRAINPARTYCREATEPREFAB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC30680)
#define RPG_GAMECORE_TRAINPARTYCREATEPREFAB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC305F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyCreatePrefab_TypeDefinitionIndex = 22365;

	class TrainPartyCreatePrefab : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* PrefabPath; // 0x18
		::RPG::MVector3 Position; // 0x20
		::RPG::MVector3 Rotation; // 0x2C
		::RPG::MVector3 Scale; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCREATEPREFAB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyCreatePrefab* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyCreatePrefab*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCREATEPREFAB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyCreatePrefab* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyCreatePrefab*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCREATEPREFAB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
