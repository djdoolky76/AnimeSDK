#pragma once
#include "unitysdk/unitysdk.h"
class EKFMIDBJDIA;
class FOOIINCDBFA;
class HJCOLAEIJFM;
namespace RPG::GameCore { class ST_Side_ListenFindTreasureState; }
namespace RPG::GameCore { class TaskContext; }

#define FAOJPHHDFFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1567D5A0)
#define FAOJPHHDFFB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1567D920)
#define FAOJPHHDFFB_IFCNMIBPBOI_OFFSET UNITYSDK_OFFSET(0x1567DCB0)
#define FAOJPHHDFFB_LBDCCMBAILD_OFFSET UNITYSDK_OFFSET(0x1567DC20)
#define FAOJPHHDFFB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1567D5D0)
#define FAOJPHHDFFB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1567D820)
#define FAOJPHHDFFB_TICK_OFFSET UNITYSDK_OFFSET(0x1567DA20)

inline static constexpr unsigned int FAOJPHHDFFB_TypeDefinitionIndex = 52236;

	class FAOJPHHDFFB
	{
	public:
		::HJCOLAEIJFM* ACLGKGFMOGM; // 0x28
		::FOOIINCDBFA* AGJDABDMMEH; // 0x30
		::System::Boolean KBPDONHBCIJ; // 0x38
		::System::Byte _padding0[0x3];
		::System::Single ICMAPOKKICI; // 0x3C
		// static const ::System::Object GCCLLGPDKJM; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_ListenFindTreasureState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_ListenFindTreasureState*))((::PBYTE)hIl2Cpp + FAOJPHHDFFB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOJPHHDFFB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOJPHHDFFB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOJPHHDFFB_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FAOJPHHDFFB_TICK_OFFSET))(this, a1);
		}

		::System::Void IFCNMIBPBOI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + FAOJPHHDFFB_IFCNMIBPBOI_OFFSET))(this, a1);
		}

		::System::Void LBDCCMBAILD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOJPHHDFFB_LBDCCMBAILD_OFFSET))(this);
		}

	};
