#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CakeRaceWaitFinishLineTip; }
namespace RPG::GameCore { class TaskContext; }

#define LHAPPLBEOLM_CTOR_OFFSET UNITYSDK_OFFSET(0xB6A4320)
#define LHAPPLBEOLM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6A4330)
#define LHAPPLBEOLM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6A44F0)
#define LHAPPLBEOLM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB6A4740)
#define LHAPPLBEOLM_TICK_OFFSET UNITYSDK_OFFSET(0xB6A4790)
#define LHAPPLBEOLM__ONTASKBEGIN_B__4_0_OFFSET UNITYSDK_OFFSET(0xB6A47F0)

inline static constexpr unsigned int LHAPPLBEOLM_TypeDefinitionIndex = 52621;

	class LHAPPLBEOLM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::CakeRaceWaitFinishLineTip* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CakeRaceWaitFinishLineTip* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CakeRaceWaitFinishLineTip*))((::PBYTE)hIl2Cpp + LHAPPLBEOLM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAPPLBEOLM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAPPLBEOLM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAPPLBEOLM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LHAPPLBEOLM_TICK_OFFSET))(this, a1);
		}

		::System::Void _OnTaskBegin_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAPPLBEOLM__ONTASKBEGIN_B__4_0_OFFSET))(this);
		}

	};
