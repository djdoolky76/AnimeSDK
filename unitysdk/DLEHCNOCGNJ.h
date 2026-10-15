#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowPerformanceRollingSubtitles; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define DLEHCNOCGNJ_CTOR_OFFSET UNITYSDK_OFFSET(0xF895230)
#define DLEHCNOCGNJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF895240)
#define DLEHCNOCGNJ_LHBNAIMMAJD_OFFSET UNITYSDK_OFFSET(0xF895900)
#define DLEHCNOCGNJ_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xF8957C0)
#define DLEHCNOCGNJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF895360)
#define DLEHCNOCGNJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF895710)
#define DLEHCNOCGNJ_TICK_OFFSET UNITYSDK_OFFSET(0xF895300)
#define DLEHCNOCGNJ__ONTASKBEGIN_B__3_0_OFFSET UNITYSDK_OFFSET(0xF895960)

inline static constexpr unsigned int DLEHCNOCGNJ_TypeDefinitionIndex = 58676;

	class DLEHCNOCGNJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowPerformanceRollingSubtitles* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Boolean NFDJKNCHPKK; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowPerformanceRollingSubtitles* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowPerformanceRollingSubtitles*))((::PBYTE)hIl2Cpp + DLEHCNOCGNJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEHCNOCGNJ_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DLEHCNOCGNJ_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEHCNOCGNJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEHCNOCGNJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DLEHCNOCGNJ_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void LHBNAIMMAJD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DLEHCNOCGNJ_LHBNAIMMAJD_OFFSET))(this, a1);
		}

		::System::Void _OnTaskBegin_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEHCNOCGNJ__ONTASKBEGIN_B__3_0_OFFSET))(this);
		}

	};
