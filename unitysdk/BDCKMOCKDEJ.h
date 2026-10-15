#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerEffectListOnCharacter; }

#define BDCKMOCKDEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x162E05C0)
#define BDCKMOCKDEJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x162E05F0)

inline static constexpr unsigned int BDCKMOCKDEJ_TypeDefinitionIndex = 58781;

	class BDCKMOCKDEJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerEffectListOnCharacter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerEffectListOnCharacter*))((::PBYTE)hIl2Cpp + BDCKMOCKDEJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDCKMOCKDEJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
