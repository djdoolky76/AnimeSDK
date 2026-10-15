#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCBMADADMDJ.h"
#include "unitysdk/RPG/GameCore/SOFinishReason.h"
class BACCOPOCMPC;
class CEGJADNLKED;
class KFELGAIGHAP;
namespace RPG::GameCore { class AdvTriggerAIPlaySmartObject; }
namespace RPG::GameCore { class TaskContext; }

#define KGAJNLAOFEJ_ABFEBBHDLFI_OFFSET UNITYSDK_OFFSET(0xB3CC650)
#define KGAJNLAOFEJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB3CBAC0)
#define KGAJNLAOFEJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB3CBB80)
#define KGAJNLAOFEJ_INAGMNKGMDE_OFFSET UNITYSDK_OFFSET(0xB3CC540)
#define KGAJNLAOFEJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB3CBC90)
#define KGAJNLAOFEJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB3CC4A0)
#define KGAJNLAOFEJ_TICK_OFFSET UNITYSDK_OFFSET(0xB3CC200)

inline static constexpr unsigned int KGAJNLAOFEJ_TypeDefinitionIndex = 52517;

	class KGAJNLAOFEJ : public ::GCBMADADMDJ
	{
	public:
		::RPG::GameCore::AdvTriggerAIPlaySmartObject* OFKGLJOAMLD; // 0x30
		::CEGJADNLKED* DFMOOFNKPOG; // 0x38
		::BACCOPOCMPC* PJLGDHFHFLO; // 0x40
		::KFELGAIGHAP* BJLJAHMLKIO; // 0x48
		::System::UInt32 LCJDAMMJLEI; // 0x50
		::System::UInt32 MMILCBFLPDJ; // 0x54
		::System::UInt64 OHICNFCJKCM; // 0x58
		::System::Boolean FNEJMBKLEIP; // 0x60
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvTriggerAIPlaySmartObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvTriggerAIPlaySmartObject*))((::PBYTE)hIl2Cpp + KGAJNLAOFEJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAJNLAOFEJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAJNLAOFEJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KGAJNLAOFEJ_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAJNLAOFEJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void INAGMNKGMDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAJNLAOFEJ_INAGMNKGMDE_OFFSET))(this);
		}

		::System::Void ABFEBBHDLFI(::RPG::GameCore::SOFinishReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SOFinishReason))((::PBYTE)hIl2Cpp + KGAJNLAOFEJ_ABFEBBHDLFI_OFFSET))(this, a1);
		}

	};
