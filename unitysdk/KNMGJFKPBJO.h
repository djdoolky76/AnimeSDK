#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrainPartyEventCharacterTriggerEmotion; }

#define KNMGJFKPBJO_CTOR_OFFSET UNITYSDK_OFFSET(0xB582040)
#define KNMGJFKPBJO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB582070)

inline static constexpr unsigned int KNMGJFKPBJO_TypeDefinitionIndex = 53423;

	class KNMGJFKPBJO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TrainPartyEventCharacterTriggerEmotion* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TrainPartyEventCharacterTriggerEmotion*))((::PBYTE)hIl2Cpp + KNMGJFKPBJO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMGJFKPBJO_ONTASKBEGIN_OFFSET))(this);
		}

	};
