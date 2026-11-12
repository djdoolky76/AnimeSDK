#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
class FOOIINCDBFA;
class OLMLKNCEDKN;
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class ST_Main_MoveAlongPath; }
namespace RPG::GameCore { class TaskContext; }

#define PPHLICFGGKC_BFJBKDGAJMO_OFFSET UNITYSDK_OFFSET(0xCCBC5E0)
#define PPHLICFGGKC_CTOR_OFFSET UNITYSDK_OFFSET(0xCCBC070)
#define PPHLICFGGKC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCCBC280)
#define PPHLICFGGKC_JLKJIHLELND_OFFSET UNITYSDK_OFFSET(0xCCBC510)
#define PPHLICFGGKC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCCBC2D0)
#define PPHLICFGGKC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCCBC890)
#define PPHLICFGGKC_OOGCMLCLMJF_OFFSET UNITYSDK_OFFSET(0xCCBC840)

inline static constexpr unsigned int PPHLICFGGKC_TypeDefinitionIndex = 53314;

	class PPHLICFGGKC
	{
	public:
		::OLMLKNCEDKN* IKGBNADHLNA; // 0x28
		::RPG::GameCore::AdventureAbilityComponent* PCDEEAAIFPK; // 0x30
		::FOOIINCDBFA* KBJNJLBILFH; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_MoveAlongPath* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_MoveAlongPath*))((::PBYTE)hIl2Cpp + PPHLICFGGKC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPHLICFGGKC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPHLICFGGKC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void BFJBKDGAJMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPHLICFGGKC_BFJBKDGAJMO_OFFSET))(this);
		}

		::System::Void OOGCMLCLMJF(::RPG::GameCore::AdvNavigationFailReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + PPHLICFGGKC_OOGCMLCLMJF_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPHLICFGGKC_ONTASKRESET_OFFSET))(this);
		}

		::RPG::GameCore::CharacterMotionFlag JLKJIHLELND()
		{
			return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + PPHLICFGGKC_JLKJIHLELND_OFFSET))(this);
		}

	};
