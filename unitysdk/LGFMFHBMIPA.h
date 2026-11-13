#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtByInSkillRange; }
namespace RPG::GameCore { class TaskContext; }

#define LGFMFHBMIPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCA1F10)
#define LGFMFHBMIPA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1BCA1F40)

inline static constexpr unsigned int LGFMFHBMIPA_TypeDefinitionIndex = 55088;

	class LGFMFHBMIPA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtByInSkillRange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtByInSkillRange*))((::PBYTE)hIl2Cpp + LGFMFHBMIPA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFMFHBMIPA_EVALUATE_OFFSET))(this);
		}

	};
