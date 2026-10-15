#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPerformanceReplayEnd; }

#define MFFPJLJNLCC_CTOR_OFFSET UNITYSDK_OFFSET(0xB8F59C0)
#define MFFPJLJNLCC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8F5A50)
#define MFFPJLJNLCC_KIGKKADGFCC_OFFSET UNITYSDK_OFFSET(0xB8F5EC0)
#define MFFPJLJNLCC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8F5BF0)
#define MFFPJLJNLCC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB8F5D00)
#define MFFPJLJNLCC_TICK_OFFSET UNITYSDK_OFFSET(0xB8F5E60)

inline static constexpr unsigned int MFFPJLJNLCC_TypeDefinitionIndex = 58909;

	class MFFPJLJNLCC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitPerformanceReplayEnd* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::KFELGAIGHAP* ILEMLGEGLCC; // 0x28
		::System::Boolean NCDPNHDBKKG; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPerformanceReplayEnd* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPerformanceReplayEnd*))((::PBYTE)hIl2Cpp + MFFPJLJNLCC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFPJLJNLCC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFPJLJNLCC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFPJLJNLCC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MFFPJLJNLCC_TICK_OFFSET))(this, a1);
		}

		::System::Void KIGKKADGFCC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + MFFPJLJNLCC_KIGKKADGFCC_OFFSET))(this, a1);
		}

	};
