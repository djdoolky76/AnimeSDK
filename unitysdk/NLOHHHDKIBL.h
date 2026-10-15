#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client::ActivityHipplen { class ActivityHipplenInteractPropData; }
namespace RPG::GameCore { class ST_Side_Hipplen_Override_Interact_Like_Type; }
namespace RPG::GameCore { class TaskContext; }

#define NLOHHHDKIBL_CTOR_OFFSET UNITYSDK_OFFSET(0xBC77690)
#define NLOHHHDKIBL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC779B0)
#define NLOHHHDKIBL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC776C0)
#define NLOHHHDKIBL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC778F0)
#define NLOHHHDKIBL_TICK_OFFSET UNITYSDK_OFFSET(0xBC77890)

inline static constexpr unsigned int NLOHHHDKIBL_TypeDefinitionIndex = 52287;

	class NLOHHHDKIBL
	{
	public:
		::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* FGDGEAFMILC; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_Hipplen_Override_Interact_Like_Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_Hipplen_Override_Interact_Like_Type*))((::PBYTE)hIl2Cpp + NLOHHHDKIBL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLOHHHDKIBL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NLOHHHDKIBL_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLOHHHDKIBL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLOHHHDKIBL_DISPOSE_OFFSET))(this);
		}

	};
