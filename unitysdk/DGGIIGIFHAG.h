#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ChessRogueDoorInteraction; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define DGGIIGIFHAG_AAMNDDAFEHE_OFFSET UNITYSDK_OFFSET(0xE83DC10)
#define DGGIIGIFHAG_CTOR_OFFSET UNITYSDK_OFFSET(0xE83D2D0)
#define DGGIIGIFHAG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE83DA90)
#define DGGIIGIFHAG_GBNKIKIIGBJ_OFFSET UNITYSDK_OFFSET(0xE83D610)
#define DGGIIGIFHAG_HENDLIGAPMF_OFFSET UNITYSDK_OFFSET(0xE83D7B0)
#define DGGIIGIFHAG_KJFGIHFDLLD_OFFSET UNITYSDK_OFFSET(0xE83D470)
#define DGGIIGIFHAG_LLOEFKGGEHA_OFFSET UNITYSDK_OFFSET(0xE83DB30)
#define DGGIIGIFHAG_MNKFIGLKIGI_OFFSET UNITYSDK_OFFSET(0xE83DBA0)
#define DGGIIGIFHAG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE83D2E0)
#define DGGIIGIFHAG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE83D950)
#define DGGIIGIFHAG_TICK_OFFSET UNITYSDK_OFFSET(0xE83DAD0)

inline static constexpr unsigned int DGGIIGIFHAG_TypeDefinitionIndex = 58017;

	class DGGIIGIFHAG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ChessRogueDoorInteraction* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChessRogueDoorInteraction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChessRogueDoorInteraction*))((::PBYTE)hIl2Cpp + DGGIIGIFHAG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGIIGIFHAG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGIIGIFHAG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGIIGIFHAG_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DGGIIGIFHAG_TICK_OFFSET))(this, a1);
		}

		::System::Void GBNKIKIIGBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGIIGIFHAG_GBNKIKIIGBJ_OFFSET))(this);
		}

		::System::Void KJFGIHFDLLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGIIGIFHAG_KJFGIHFDLLD_OFFSET))(this);
		}

		::System::Void HENDLIGAPMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGIIGIFHAG_HENDLIGAPMF_OFFSET))(this);
		}

		::System::Void LLOEFKGGEHA(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + DGGIIGIFHAG_LLOEFKGGEHA_OFFSET))(this, a1, a2);
		}

		::System::Void MNKFIGLKIGI(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + DGGIIGIFHAG_MNKFIGLKIGI_OFFSET))(this, a1, a2);
		}

		::System::Void AAMNDDAFEHE(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + DGGIIGIFHAG_AAMNDDAFEHE_OFFSET))(this, a1, a2);
		}

	};
