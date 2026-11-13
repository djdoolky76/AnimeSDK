#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class CharacterTriggerFreeStyle; }
namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class TaskContext; }

#define LJNNABHJIMH_CTOR_OFFSET UNITYSDK_OFFSET(0x18CC4930)
#define LJNNABHJIMH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18CC4940)
#define LJNNABHJIMH_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x18CC4990)
#define LJNNABHJIMH_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x18CC5350)
#define LJNNABHJIMH_ONSKIP_OFFSET UNITYSDK_OFFSET(0x18CC5300)
#define LJNNABHJIMH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18CC49A0)
#define LJNNABHJIMH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18CC50D0)
#define LJNNABHJIMH_TICK_OFFSET UNITYSDK_OFFSET(0x18CC5120)

inline static constexpr unsigned int LJNNABHJIMH_TypeDefinitionIndex = 59251;

	class LJNNABHJIMH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::CharacterTriggerFreeStyle* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::FreeStyleComponent* JHFKOHNKLMH; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::RPG::Client::MockAnimator* APPGGMLEPLN; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterTriggerFreeStyle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterTriggerFreeStyle*))((::PBYTE)hIl2Cpp + LJNNABHJIMH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJNNABHJIMH_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJNNABHJIMH_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJNNABHJIMH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJNNABHJIMH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LJNNABHJIMH_TICK_OFFSET))(this, a1);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJNNABHJIMH_ONSKIP_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LJNNABHJIMH_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

	};
