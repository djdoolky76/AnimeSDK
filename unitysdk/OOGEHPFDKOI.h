#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerBlendShapesEmotion; }

#define OOGEHPFDKOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1969C1A0)
#define OOGEHPFDKOI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1969C1D0)

inline static constexpr unsigned int OOGEHPFDKOI_TypeDefinitionIndex = 57107;

	class OOGEHPFDKOI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerBlendShapesEmotion* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerBlendShapesEmotion*))((::PBYTE)hIl2Cpp + OOGEHPFDKOI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOGEHPFDKOI_ONTASKBEGIN_OFFSET))(this);
		}

	};
