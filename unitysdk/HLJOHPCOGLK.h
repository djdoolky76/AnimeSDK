#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByGridFightCharacterIsPreset; }
namespace RPG::GameCore { class TaskContext; }

#define HLJOHPCOGLK_CTOR_OFFSET UNITYSDK_OFFSET(0x15D63080)
#define HLJOHPCOGLK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15D630B0)

inline static constexpr unsigned int HLJOHPCOGLK_TypeDefinitionIndex = 54605;

	class HLJOHPCOGLK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByGridFightCharacterIsPreset* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByGridFightCharacterIsPreset*))((::PBYTE)hIl2Cpp + HLJOHPCOGLK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJOHPCOGLK_EVALUATE_OFFSET))(this);
		}

	};
