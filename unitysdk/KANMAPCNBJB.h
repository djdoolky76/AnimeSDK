#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareSkillBPChangePreview; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TaskContext; }

#define KANMAPCNBJB_CTOR_OFFSET UNITYSDK_OFFSET(0xB2E4C20)
#define KANMAPCNBJB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB2E4C50)
#define KANMAPCNBJB_HECCKKKHKBN_OFFSET UNITYSDK_OFFSET(0xB2E5020)

	class KANMAPCNBJB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareSkillBPChangePreview* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareSkillBPChangePreview*))((::PBYTE)hIl2Cpp + KANMAPCNBJB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KANMAPCNBJB_EVALUATE_OFFSET))(this);
		}

		::RPG::GameCore::SkillData* HECCKKKHKBN(::RPG::GameCore::SkillCharacterComponent* a1)
		{
			return ((::RPG::GameCore::SkillData*(*)(::PVOID, ::RPG::GameCore::SkillCharacterComponent*))((::PBYTE)hIl2Cpp + KANMAPCNBJB_HECCKKKHKBN_OFFSET))(this, a1);
		}

	};
