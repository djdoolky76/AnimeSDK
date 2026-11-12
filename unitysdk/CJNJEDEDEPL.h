#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrainPartyEventCharacterTriggerFreeStyle; }

#define CJNJEDEDEPL_CTOR_OFFSET UNITYSDK_OFFSET(0xE08A800)
#define CJNJEDEDEPL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE08A810)
#define CJNJEDEDEPL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE08A860)
#define CJNJEDEDEPL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE08AA40)
#define CJNJEDEDEPL_TICK_OFFSET UNITYSDK_OFFSET(0xE08AA90)

inline static constexpr unsigned int CJNJEDEDEPL_TypeDefinitionIndex = 54586;

	class CJNJEDEDEPL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::TrainPartyEventCharacterTriggerFreeStyle* OFKGLJOAMLD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TrainPartyEventCharacterTriggerFreeStyle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TrainPartyEventCharacterTriggerFreeStyle*))((::PBYTE)hIl2Cpp + CJNJEDEDEPL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNJEDEDEPL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNJEDEDEPL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNJEDEDEPL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CJNJEDEDEPL_TICK_OFFSET))(this, a1);
		}

	};
