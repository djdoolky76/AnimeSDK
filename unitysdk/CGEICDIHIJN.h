#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KDJNAAOFMMJ;
class KFELGAIGHAP;
namespace RPG::Client::Prop { class BlockPuzzleBase; }
namespace RPG::GameCore { class CommonBoardPuzzleInBoard; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }

#define CGEICDIHIJN_CTOR_OFFSET UNITYSDK_OFFSET(0xCC81B40)
#define CGEICDIHIJN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC81D30)
#define CGEICDIHIJN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCC82160)
#define CGEICDIHIJN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCC821B0)
#define CGEICDIHIJN_TICK_OFFSET UNITYSDK_OFFSET(0xCC81EB0)

inline static constexpr unsigned int CGEICDIHIJN_TypeDefinitionIndex = 58034;

	class CGEICDIHIJN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::CommonBoardPuzzleInBoard* IGHAHBNLIJA; // 0x18
		::KFELGAIGHAP* BHENBGMFOLJ; // 0x20
		::KFELGAIGHAP* GBEAGJJBPAN; // 0x28
		::KDJNAAOFMMJ* KLOAHJPKECK; // 0x30
		::RPG::Client::Prop::BlockPuzzleBase* CCAHGFIABKE; // 0x38
		::KDJNAAOFMMJ* EEMAFOMJMEB; // 0x40
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x48
		::RPG::GameCore::PropComponent* ALMDGNBNPLB; // 0x50
		::System::Boolean OGIMPEPMDIL; // 0x58
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CommonBoardPuzzleInBoard* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CommonBoardPuzzleInBoard*))((::PBYTE)hIl2Cpp + CGEICDIHIJN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGEICDIHIJN_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CGEICDIHIJN_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGEICDIHIJN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGEICDIHIJN_ONTASKRESET_OFFSET))(this);
		}

	};
