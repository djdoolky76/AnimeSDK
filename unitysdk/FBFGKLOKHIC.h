#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
namespace RPG::GameCore { class PlayMultiVoiceTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define FBFGKLOKHIC_BNAFKHPAJOI_OFFSET UNITYSDK_OFFSET(0x1BA48730)
#define FBFGKLOKHIC_CFKKNKJPJLM_OFFSET UNITYSDK_OFFSET(0x1BA48B50)
#define FBFGKLOKHIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA486D0)
#define FBFGKLOKHIC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BA486E0)
#define FBFGKLOKHIC_GANACOCPDLF_OFFSET UNITYSDK_OFFSET(0x1BA48B00)
#define FBFGKLOKHIC_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x1BA48E20)
#define FBFGKLOKHIC_GNIKDOFOOPE_OFFSET UNITYSDK_OFFSET(0x1BA48D90)
#define FBFGKLOKHIC_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1BA48D30)
#define FBFGKLOKHIC_ONSKIP_OFFSET UNITYSDK_OFFSET(0x1BA48CC0)
#define FBFGKLOKHIC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1BA48840)
#define FBFGKLOKHIC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1BA48C10)
#define FBFGKLOKHIC_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x1BA487F0)
#define FBFGKLOKHIC_TICK_OFFSET UNITYSDK_OFFSET(0x1BA48C60)

inline static constexpr unsigned int FBFGKLOKHIC_TypeDefinitionIndex = 59526;

	class FBFGKLOKHIC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PlayMultiVoiceTalk* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::GELIALJDFBL* DMKAOCCJEBG; // 0x28
		::System::Boolean EDBAPCABEMP; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayMultiVoiceTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayMultiVoiceTalk*))((::PBYTE)hIl2Cpp + FBFGKLOKHIC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFGKLOKHIC_DISPOSE_OFFSET))(this);
		}

		::GELIALJDFBL* SetNextTask(::GELIALJDFBL* a1)
		{
			return ((::GELIALJDFBL*(*)(::PVOID, ::GELIALJDFBL*))((::PBYTE)hIl2Cpp + FBFGKLOKHIC_SETNEXTTASK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFGKLOKHIC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFGKLOKHIC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBFGKLOKHIC_TICK_OFFSET))(this, a1);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFGKLOKHIC_ONSKIP_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBFGKLOKHIC_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void CFKKNKJPJLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFGKLOKHIC_CFKKNKJPJLM_OFFSET))(this);
		}

		::System::Void BNAFKHPAJOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFGKLOKHIC_BNAFKHPAJOI_OFFSET))(this);
		}

		::System::Void GNIKDOFOOPE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBFGKLOKHIC_GNIKDOFOOPE_OFFSET))(this, a1);
		}

		::System::Void GANACOCPDLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFGKLOKHIC_GANACOCPDLF_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFGKLOKHIC_GET_FORCESKIP_OFFSET))(this);
		}

	};
