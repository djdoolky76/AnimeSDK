#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class CheckIsMagicRogueAutoDressOpen; }
namespace RPG::GameCore { class TaskContext; }

#define DOGEBGAAIHF_CTOR_OFFSET UNITYSDK_OFFSET(0x11FE2CC0)
#define DOGEBGAAIHF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11FE2DB0)
#define DOGEBGAAIHF_OEHALFNPHHA_OFFSET UNITYSDK_OFFSET(0x11FE3110)
#define DOGEBGAAIHF_ONGFFOMPEIH_OFFSET UNITYSDK_OFFSET(0x11FE31F0)
#define DOGEBGAAIHF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11FE2F10)
#define DOGEBGAAIHF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11FE32D0)
#define DOGEBGAAIHF_TICK_OFFSET UNITYSDK_OFFSET(0x11FE33B0)

inline static constexpr unsigned int DOGEBGAAIHF_TypeDefinitionIndex = 58015;

	class DOGEBGAAIHF : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* LMNNMNBEMKC; // 0x18
		::RPG::GameCore::CheckIsMagicRogueAutoDressOpen* OFKGLJOAMLD; // 0x20
		::KFELGAIGHAP* JBHLMPCBOII; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CheckIsMagicRogueAutoDressOpen* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CheckIsMagicRogueAutoDressOpen*))((::PBYTE)hIl2Cpp + DOGEBGAAIHF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOGEBGAAIHF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOGEBGAAIHF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOGEBGAAIHF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DOGEBGAAIHF_TICK_OFFSET))(this, a1);
		}

		::System::Void OEHALFNPHHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOGEBGAAIHF_OEHALFNPHHA_OFFSET))(this);
		}

		::System::Void ONGFFOMPEIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOGEBGAAIHF_ONGFFOMPEIH_OFFSET))(this);
		}

	};
