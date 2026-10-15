#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetupAlleyTransportGuide; }
namespace RPG::GameCore { class TaskContext; }

#define FKHLNPMHGGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x157FAC70)
#define FKHLNPMHGGJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157FAC80)
#define FKHLNPMHGGJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157FACC0)
#define FKHLNPMHGGJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x157FAD20)
#define FKHLNPMHGGJ_TICK_OFFSET UNITYSDK_OFFSET(0x157FAD70)

	class FKHLNPMHGGJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetupAlleyTransportGuide* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetupAlleyTransportGuide* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetupAlleyTransportGuide*))((::PBYTE)hIl2Cpp + FKHLNPMHGGJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHLNPMHGGJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHLNPMHGGJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHLNPMHGGJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FKHLNPMHGGJ_TICK_OFFSET))(this, a1);
		}

	};
