#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/AttractorDefinition.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCCROWD_AI_ATTRACTORTEMPLATE_GET_ELEMENTLABEL_OFFSET UNITYSDK_OFFSET(0xFD16BB0)
#define NPCCROWD_AI_ATTRACTORTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0xFD16C70)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorTemplate_TypeDefinitionIndex = 53970;

	class AttractorTemplate : public ::System::Object
	{
	public:
		::System::Int32 id; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* description; // 0x18
		::NPCCrowd::AI::AttractorDefinition definition; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORTEMPLATE__CTOR_OFFSET))(this);
		}

		::System::String* get_ElementLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORTEMPLATE_GET_ELEMENTLABEL_OFFSET))(this);
		}
	};
}
