#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
namespace RPG::GameCore { class PlayAndWaitSimpleTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define FPMNLGNIOJE_BNAFKHPAJOI_OFFSET UNITYSDK_OFFSET(0x15914770)
#define FPMNLGNIOJE_CFKKNKJPJLM_OFFSET UNITYSDK_OFFSET(0x15915080)
#define FPMNLGNIOJE_CTOR_OFFSET UNITYSDK_OFFSET(0x159146B0)
#define FPMNLGNIOJE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159146C0)
#define FPMNLGNIOJE_GANACOCPDLF_OFFSET UNITYSDK_OFFSET(0x15915280)
#define FPMNLGNIOJE_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x15915560)
#define FPMNLGNIOJE_GNIKDOFOOPE_OFFSET UNITYSDK_OFFSET(0x15915510)
#define FPMNLGNIOJE_NPHDKJCJDCA_OFFSET UNITYSDK_OFFSET(0x15914DE0)
#define FPMNLGNIOJE_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x15915480)
#define FPMNLGNIOJE_ONSKIP_OFFSET UNITYSDK_OFFSET(0x15915230)
#define FPMNLGNIOJE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15914860)
#define FPMNLGNIOJE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15915110)
#define FPMNLGNIOJE_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x15914810)
#define FPMNLGNIOJE_TICK_OFFSET UNITYSDK_OFFSET(0x159151D0)

inline static constexpr unsigned int FPMNLGNIOJE_TypeDefinitionIndex = 58264;

	class FPMNLGNIOJE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PlayAndWaitSimpleTalk* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::GELIALJDFBL* DMKAOCCJEBG; // 0x28
		::System::Boolean EDBAPCABEMP; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayAndWaitSimpleTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayAndWaitSimpleTalk*))((::PBYTE)hIl2Cpp + FPMNLGNIOJE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMNLGNIOJE_DISPOSE_OFFSET))(this);
		}

		::GELIALJDFBL* SetNextTask(::GELIALJDFBL* a1)
		{
			return ((::GELIALJDFBL*(*)(::PVOID, ::GELIALJDFBL*))((::PBYTE)hIl2Cpp + FPMNLGNIOJE_SETNEXTTASK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMNLGNIOJE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMNLGNIOJE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FPMNLGNIOJE_TICK_OFFSET))(this, a1);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMNLGNIOJE_ONSKIP_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FPMNLGNIOJE_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void NPHDKJCJDCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMNLGNIOJE_NPHDKJCJDCA_OFFSET))(this);
		}

		::System::Void CFKKNKJPJLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMNLGNIOJE_CFKKNKJPJLM_OFFSET))(this);
		}

		::System::Void BNAFKHPAJOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMNLGNIOJE_BNAFKHPAJOI_OFFSET))(this);
		}

		::System::Void GNIKDOFOOPE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FPMNLGNIOJE_GNIKDOFOOPE_OFFSET))(this, a1);
		}

		::System::Void GANACOCPDLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMNLGNIOJE_GANACOCPDLF_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMNLGNIOJE_GET_FORCESKIP_OFFSET))(this);
		}

	};
