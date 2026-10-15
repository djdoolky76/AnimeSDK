#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::Prop { class FastDeliverPuzzleEntityData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropFastDeliverSwitchTarget; }
namespace RPG::GameCore { class TaskContext; }

#define FHBFPJHFIIM_CTOR_OFFSET UNITYSDK_OFFSET(0x15771360)
#define FHBFPJHFIIM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15771D60)
#define FHBFPJHFIIM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15771370)
#define FHBFPJHFIIM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15771D10)
#define FHBFPJHFIIM_TICK_OFFSET UNITYSDK_OFFSET(0x15771DC0)

inline static constexpr unsigned int FHBFPJHFIIM_TypeDefinitionIndex = 58327;

	class FHBFPJHFIIM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PropFastDeliverSwitchTarget* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::Client::Prop::FastDeliverPuzzleEntityData* NFHPANNPJLG; // 0x28
		::RPG::Client::Prop::FastDeliverPuzzleEntityData* CFNOKPLDCGM; // 0x30
		::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x38
		::RPG::GameCore::GameEntity* JBLCDCPMAHA; // 0x40
		::UnityEngine::Vector3 KOGCFJCMFLD; // 0x48
		::UnityEngine::Vector3 CCNHAICHLBK; // 0x54
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropFastDeliverSwitchTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropFastDeliverSwitchTarget*))((::PBYTE)hIl2Cpp + FHBFPJHFIIM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBFPJHFIIM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBFPJHFIIM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBFPJHFIIM_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FHBFPJHFIIM_TICK_OFFSET))(this, a1);
		}

	};
