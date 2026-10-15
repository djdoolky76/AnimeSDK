#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class GELIALJDFBL;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPerformanceEnd; }

#define FAJGCGEHDGE_CTOR_OFFSET UNITYSDK_OFFSET(0x15681780)
#define FAJGCGEHDGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15681790)
#define FAJGCGEHDGE_KIGKKADGFCC_OFFSET UNITYSDK_OFFSET(0x15681AE0)
#define FAJGCGEHDGE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156818C0)
#define FAJGCGEHDGE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x156819A0)
#define FAJGCGEHDGE_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x15681870)
#define FAJGCGEHDGE_TICK_OFFSET UNITYSDK_OFFSET(0x15681A80)

inline static constexpr unsigned int FAJGCGEHDGE_TypeDefinitionIndex = 58908;

	class FAJGCGEHDGE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::GELIALJDFBL* CJHJNLGOJLA; // 0x20
		::System::Boolean NCDPNHDBKKG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPerformanceEnd* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPerformanceEnd*))((::PBYTE)hIl2Cpp + FAJGCGEHDGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJGCGEHDGE_DISPOSE_OFFSET))(this);
		}

		::GELIALJDFBL* SetNextTask(::GELIALJDFBL* a1)
		{
			return ((::GELIALJDFBL*(*)(::PVOID, ::GELIALJDFBL*))((::PBYTE)hIl2Cpp + FAJGCGEHDGE_SETNEXTTASK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJGCGEHDGE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJGCGEHDGE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FAJGCGEHDGE_TICK_OFFSET))(this, a1);
		}

		::System::Void KIGKKADGFCC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + FAJGCGEHDGE_KIGKKADGFCC_OFFSET))(this, a1);
		}

	};
