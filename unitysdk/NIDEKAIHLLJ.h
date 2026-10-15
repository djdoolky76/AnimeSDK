#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class DeferCreateTrialPlayer; }
namespace RPG::GameCore { class TaskContext; }

#define NIDEKAIHLLJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBBD9A70)
#define NIDEKAIHLLJ_DDNMIFGNJLG_OFFSET UNITYSDK_OFFSET(0xBBD9B60)
#define NIDEKAIHLLJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBD9A80)
#define NIDEKAIHLLJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBD9AC0)
#define NIDEKAIHLLJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBBDA540)
#define NIDEKAIHLLJ_TICK_OFFSET UNITYSDK_OFFSET(0xBBDA590)

inline static constexpr unsigned int NIDEKAIHLLJ_TypeDefinitionIndex = 54995;

	class NIDEKAIHLLJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::DeferCreateTrialPlayer* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DeferCreateTrialPlayer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DeferCreateTrialPlayer*))((::PBYTE)hIl2Cpp + NIDEKAIHLLJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDEKAIHLLJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDEKAIHLLJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void DDNMIFGNJLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDEKAIHLLJ_DDNMIFGNJLG_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDEKAIHLLJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NIDEKAIHLLJ_TICK_OFFSET))(this, a1);
		}

	};
