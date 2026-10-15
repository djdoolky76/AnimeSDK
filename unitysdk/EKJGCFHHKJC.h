#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterHeadStopLookAt; }
namespace RPG::GameCore { class TaskContext; }

#define EKJGCFHHKJC_CTOR_OFFSET UNITYSDK_OFFSET(0x154FE5F0)
#define EKJGCFHHKJC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x154FE800)
#define EKJGCFHHKJC_EDNJAFJEPJF_OFFSET UNITYSDK_OFFSET(0x154FE950)
#define EKJGCFHHKJC_HOEGEDNNIMM_OFFSET UNITYSDK_OFFSET(0x154FE670)
#define EKJGCFHHKJC_NDBOOAEKNMC_OFFSET UNITYSDK_OFFSET(0x154FEA10)
#define EKJGCFHHKJC_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x154FE9B0)
#define EKJGCFHHKJC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x154FE600)
#define EKJGCFHHKJC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x154FE840)
#define EKJGCFHHKJC_TICK_OFFSET UNITYSDK_OFFSET(0x154FE890)

inline static constexpr unsigned int EKJGCFHHKJC_TypeDefinitionIndex = 58005;

	class EKJGCFHHKJC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AdventureCharacterController* NGCHOMCMKPI; // 0x18
		::RPG::GameCore::CharacterHeadStopLookAt* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterHeadStopLookAt* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterHeadStopLookAt*))((::PBYTE)hIl2Cpp + EKJGCFHHKJC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJGCFHHKJC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJGCFHHKJC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJGCFHHKJC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EKJGCFHHKJC_TICK_OFFSET))(this, a1);
		}

		::System::Void EDNJAFJEPJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJGCFHHKJC_EDNJAFJEPJF_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EKJGCFHHKJC_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void HOEGEDNNIMM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EKJGCFHHKJC_HOEGEDNNIMM_OFFSET))(this, a1);
		}

		::System::Boolean NDBOOAEKNMC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJGCFHHKJC_NDBOOAEKNMC_OFFSET))(this);
		}

	};
