#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MBIBMHAPIGM;
namespace NPCCrowd::AI { class AttractorRuntime; }

#define NPCCROWD_AI_NPCATTRACTORMAINSYSTEM___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13181C50)
#define NPCCROWD_AI_NPCATTRACTORMAINSYSTEM___C__DISPLAYCLASS17_0__LATEUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x13181C60)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int NPCAttractorMainSystem___c__DisplayClass17_0_TypeDefinitionIndex = 39871;

	class NPCAttractorMainSystem___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::NPCCrowd::AI::AttractorRuntime* attractorRuntime; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCATTRACTORMAINSYSTEM___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _LateUpdate_b__0(::MBIBMHAPIGM* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::MBIBMHAPIGM*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCATTRACTORMAINSYSTEM___C__DISPLAYCLASS17_0__LATEUPDATE_B__0_OFFSET))(this, rsp);
		}
	};
}
