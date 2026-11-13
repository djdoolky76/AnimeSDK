#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TargetMuteModifierEventSource; }
namespace RPG::GameCore { class TaskContext; }

#define ILCHMJOGABN_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5898C0)
#define ILCHMJOGABN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B5898F0)

inline static constexpr unsigned int ILCHMJOGABN_TypeDefinitionIndex = 56361;

	class ILCHMJOGABN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TargetMuteModifierEventSource* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TargetMuteModifierEventSource*))((::PBYTE)hIl2Cpp + ILCHMJOGABN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCHMJOGABN_ONTASKBEGIN_OFFSET))(this);
		}

	};
