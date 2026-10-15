#pragma once
#include "unitysdk/unitysdk.h"
class FOOIINCDBFA;
class HJCOLAEIJFM;
namespace RPG::GameCore { class ST_Side_ListenFindTrotterState; }
namespace RPG::GameCore { class TaskContext; }

#define PHIOEPJFMFJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC2478C0)
#define PHIOEPJFMFJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC247AE0)
#define PHIOEPJFMFJ_LBDCCMBAILD_OFFSET UNITYSDK_OFFSET(0xC247E40)
#define PHIOEPJFMFJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC2478F0)
#define PHIOEPJFMFJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC247A90)
#define PHIOEPJFMFJ_TICK_OFFSET UNITYSDK_OFFSET(0xC247B30)

inline static constexpr unsigned int PHIOEPJFMFJ_TypeDefinitionIndex = 52237;

	class PHIOEPJFMFJ
	{
	public:
		::FOOIINCDBFA* AGJDABDMMEH; // 0x28
		::HJCOLAEIJFM* ACLGKGFMOGM; // 0x30
		::System::Single ICMAPOKKICI; // 0x38
		::System::Boolean KBPDONHBCIJ; // 0x3C
		// static const ::System::Object GCCLLGPDKJM; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_ListenFindTrotterState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_ListenFindTrotterState*))((::PBYTE)hIl2Cpp + PHIOEPJFMFJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIOEPJFMFJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIOEPJFMFJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIOEPJFMFJ_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PHIOEPJFMFJ_TICK_OFFSET))(this, a1);
		}

		::System::Void LBDCCMBAILD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIOEPJFMFJ_LBDCCMBAILD_OFFSET))(this);
		}

	};
