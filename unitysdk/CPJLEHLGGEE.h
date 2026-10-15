#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerPermanentEmotion; }

#define CPJLEHLGGEE_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD0810)
#define CPJLEHLGGEE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDCD0840)

inline static constexpr unsigned int CPJLEHLGGEE_TypeDefinitionIndex = 55905;

	class CPJLEHLGGEE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerPermanentEmotion* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerPermanentEmotion*))((::PBYTE)hIl2Cpp + CPJLEHLGGEE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJLEHLGGEE_ONTASKBEGIN_OFFSET))(this);
		}

	};
