#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetCharacterEnhancedState; }
namespace RPG::GameCore { class TaskContext; }

#define AHOFPIOIHNG_CTOR_OFFSET UNITYSDK_OFFSET(0x19B2A680)
#define AHOFPIOIHNG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19B2A6B0)

inline static constexpr unsigned int AHOFPIOIHNG_TypeDefinitionIndex = 56553;

	class AHOFPIOIHNG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterEnhancedState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterEnhancedState*))((::PBYTE)hIl2Cpp + AHOFPIOIHNG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHOFPIOIHNG_ONTASKBEGIN_OFFSET))(this);
		}

	};
