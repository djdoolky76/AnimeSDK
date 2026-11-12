#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCurrentTextLanguage; }
namespace RPG::GameCore { class TaskContext; }

#define BCKOKPNMLAA_CTOR_OFFSET UNITYSDK_OFFSET(0x170A8020)
#define BCKOKPNMLAA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x170A8050)

inline static constexpr unsigned int BCKOKPNMLAA_TypeDefinitionIndex = 53703;

	class BCKOKPNMLAA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCurrentTextLanguage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCurrentTextLanguage*))((::PBYTE)hIl2Cpp + BCKOKPNMLAA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKOKPNMLAA_EVALUATE_OFFSET))(this);
		}

	};
