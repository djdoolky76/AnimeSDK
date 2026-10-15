#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetCharacterEnhancedState; }
namespace RPG::GameCore { class TaskContext; }

#define AHOFPIOIHNG_CTOR_OFFSET UNITYSDK_OFFSET(0xEB89C10)
#define AHOFPIOIHNG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB89C40)

inline static constexpr unsigned int AHOFPIOIHNG_TypeDefinitionIndex = 55370;

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
