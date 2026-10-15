#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrainPartyGameplayShowMaskBG; }

#define AGBHIALJIOP_CTOR_OFFSET UNITYSDK_OFFSET(0xCF1E480)
#define AGBHIALJIOP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF1E490)
#define AGBHIALJIOP_HOGLGBBBFJM_OFFSET UNITYSDK_OFFSET(0xCF1E4E0)
#define AGBHIALJIOP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF1E590)
#define AGBHIALJIOP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCF1E620)
#define AGBHIALJIOP_TICK_OFFSET UNITYSDK_OFFSET(0xCF1E670)

inline static constexpr unsigned int AGBHIALJIOP_TypeDefinitionIndex = 53425;

	class AGBHIALJIOP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TrainPartyGameplayShowMaskBG* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Single KCLBCNGCLHJ; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TrainPartyGameplayShowMaskBG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TrainPartyGameplayShowMaskBG*))((::PBYTE)hIl2Cpp + AGBHIALJIOP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBHIALJIOP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBHIALJIOP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBHIALJIOP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AGBHIALJIOP_TICK_OFFSET))(this, a1);
		}

		::System::Void HOGLGBBBFJM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AGBHIALJIOP_HOGLGBBBFJM_OFFSET))(this, a1);
		}

	};
