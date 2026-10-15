#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TimeRewindControllerInteract; }

#define MMIPBHJNICO_CTOR_OFFSET UNITYSDK_OFFSET(0xB9D3430)
#define MMIPBHJNICO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9D3460)

inline static constexpr unsigned int MMIPBHJNICO_TypeDefinitionIndex = 53398;

	class MMIPBHJNICO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TimeRewindControllerInteract* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TimeRewindControllerInteract*))((::PBYTE)hIl2Cpp + MMIPBHJNICO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIPBHJNICO_ONTASKBEGIN_OFFSET))(this);
		}

	};
