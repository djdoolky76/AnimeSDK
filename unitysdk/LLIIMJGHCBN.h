#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/Client/Prop/BoxmanPuzzlePlayerInBoardState.h"
class KDJNAAOFMMJ;
class KFELGAIGHAP;
namespace RPG::Client::Prop { class BoxmanPuzzleBoard; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PuzzleBoxmanInBoard; }
namespace RPG::GameCore { class TaskContext; }

#define LLIIMJGHCBN_CTOR_OFFSET UNITYSDK_OFFSET(0xB769610)
#define LLIIMJGHCBN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7698B0)
#define LLIIMJGHCBN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB769810)
#define LLIIMJGHCBN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB769860)
#define LLIIMJGHCBN_TICK_OFFSET UNITYSDK_OFFSET(0xB769A10)

inline static constexpr unsigned int LLIIMJGHCBN_TypeDefinitionIndex = 58368;

	class LLIIMJGHCBN : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* BHENBGMFOLJ; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::RPG::GameCore::PuzzleBoxmanInBoard* IGHAHBNLIJA; // 0x28
		::KDJNAAOFMMJ* KLOAHJPKECK; // 0x30
		::RPG::Client::Prop::BoxmanPuzzleBoard* CCAHGFIABKE; // 0x38
		::RPG::GameCore::PropComponent* ALMDGNBNPLB; // 0x40
		::KDJNAAOFMMJ* EEMAFOMJMEB; // 0x48
		::KFELGAIGHAP* GBEAGJJBPAN; // 0x50
		::RPG::Client::Prop::BoxmanPuzzlePlayerInBoardState OHOMIFJPGFE; // 0x58
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PuzzleBoxmanInBoard* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PuzzleBoxmanInBoard*))((::PBYTE)hIl2Cpp + LLIIMJGHCBN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLIIMJGHCBN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLIIMJGHCBN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLIIMJGHCBN_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LLIIMJGHCBN_TICK_OFFSET))(this, a1);
		}

	};
