#pragma once
#include "unitysdk/unitysdk.h"
class EGAIKBNEPOG;
namespace RPG::GameCore { class TaskContext; }

#define JBHKDEHCNOB_CTOR_OFFSET UNITYSDK_OFFSET(0x16561C80)
#define JBHKDEHCNOB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16561CB0)

inline static constexpr unsigned int JBHKDEHCNOB_TypeDefinitionIndex = 54820;

	class JBHKDEHCNOB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EGAIKBNEPOG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EGAIKBNEPOG*))((::PBYTE)hIl2Cpp + JBHKDEHCNOB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBHKDEHCNOB_ONTASKBEGIN_OFFSET))(this);
		}

	};
