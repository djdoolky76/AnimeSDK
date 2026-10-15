#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/GNBPMOADDFD_GobackStage.h"
class DEEGAJPPPBG;
class FOOIINCDBFA;
class HJCOLAEIJFM;
class KDJNAAOFMMJ;
namespace RPG::GameCore { class AdvNPCGoback; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }

#define GNBPMOADDFD_CTOR_OFFSET UNITYSDK_OFFSET(0x15AFC280)
#define GNBPMOADDFD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15AFC8E0)
#define GNBPMOADDFD_GBOEOMEBOCP_OFFSET UNITYSDK_OFFSET(0x15AFCBE0)
#define GNBPMOADDFD_HLCCBLAPEFO_OFFSET UNITYSDK_OFFSET(0x15AFCFB0)
#define GNBPMOADDFD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15AFC940)
#define GNBPMOADDFD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15AFCD40)
#define GNBPMOADDFD_PFCHPFOGKMG_OFFSET UNITYSDK_OFFSET(0x15AFCF50)
#define GNBPMOADDFD_TICK_OFFSET UNITYSDK_OFFSET(0x15AFCE90)

inline static constexpr unsigned int GNBPMOADDFD_TypeDefinitionIndex = 52423;

	class GNBPMOADDFD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AdvNPCGoback* IGHAHBNLIJA; // 0x18
		::DEEGAJPPPBG* FAOEOJJKLLB; // 0x20
		::KDJNAAOFMMJ* ENOJCFIDHLJ; // 0x28
		::FOOIINCDBFA* CHKJEKFMODH; // 0x30
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
		::RPG::GameCore::AdventureCharacterController* EEMOFHKBEBO; // 0x40
		::RPG::GameCore::NPCComponent* OLMFOBHMCKN; // 0x48
		::HJCOLAEIJFM* DOGOBMEFBAG; // 0x50
		::KDJNAAOFMMJ* KLPHHEJAPDF; // 0x58
		::GNBPMOADDFD_GobackStage PMCOAFPCDFM; // 0x60
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNPCGoback* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNPCGoback*))((::PBYTE)hIl2Cpp + GNBPMOADDFD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBPMOADDFD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBPMOADDFD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBPMOADDFD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GNBPMOADDFD_TICK_OFFSET))(this, a1);
		}

		::System::Void GBOEOMEBOCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBPMOADDFD_GBOEOMEBOCP_OFFSET))(this);
		}

		::System::Void PFCHPFOGKMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBPMOADDFD_PFCHPFOGKMG_OFFSET))(this);
		}

		::System::Void HLCCBLAPEFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBPMOADDFD_HLCCBLAPEFO_OFFSET))(this);
		}

	};
