#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
namespace RPG::GameCore { class CollectionPlaySimpleTalk; }
namespace RPG::GameCore { class PlayAndWaitSimpleTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define AEJKECEBEDL_BNAFKHPAJOI_OFFSET UNITYSDK_OFFSET(0xD5B0380)
#define AEJKECEBEDL_CFKKNKJPJLM_OFFSET UNITYSDK_OFFSET(0xD5B0D10)
#define AEJKECEBEDL_CTOR_OFFSET UNITYSDK_OFFSET(0xD5B0320)
#define AEJKECEBEDL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD5B0330)
#define AEJKECEBEDL_GANACOCPDLF_OFFSET UNITYSDK_OFFSET(0xD5B0ED0)
#define AEJKECEBEDL_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xD5B1120)
#define AEJKECEBEDL_GNIKDOFOOPE_OFFSET UNITYSDK_OFFSET(0xD5B10D0)
#define AEJKECEBEDL_NPHDKJCJDCA_OFFSET UNITYSDK_OFFSET(0xD5B0A50)
#define AEJKECEBEDL_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xD5B1040)
#define AEJKECEBEDL_ONSKIP_OFFSET UNITYSDK_OFFSET(0xD5B0E80)
#define AEJKECEBEDL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD5B0490)
#define AEJKECEBEDL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD5B0DD0)
#define AEJKECEBEDL_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0xD5B0440)
#define AEJKECEBEDL_TICK_OFFSET UNITYSDK_OFFSET(0xD5B0E20)

inline static constexpr unsigned int AEJKECEBEDL_TypeDefinitionIndex = 59271;

	class AEJKECEBEDL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PlayAndWaitSimpleTalk* FBJHEDMOMBF; // 0x18
		::RPG::GameCore::CollectionPlaySimpleTalk* OFKGLJOAMLD; // 0x20
		::GELIALJDFBL* DMKAOCCJEBG; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::System::Boolean EDBAPCABEMP; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CollectionPlaySimpleTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CollectionPlaySimpleTalk*))((::PBYTE)hIl2Cpp + AEJKECEBEDL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJKECEBEDL_DISPOSE_OFFSET))(this);
		}

		::GELIALJDFBL* SetNextTask(::GELIALJDFBL* a1)
		{
			return ((::GELIALJDFBL*(*)(::PVOID, ::GELIALJDFBL*))((::PBYTE)hIl2Cpp + AEJKECEBEDL_SETNEXTTASK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJKECEBEDL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJKECEBEDL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AEJKECEBEDL_TICK_OFFSET))(this, a1);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJKECEBEDL_ONSKIP_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AEJKECEBEDL_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void NPHDKJCJDCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJKECEBEDL_NPHDKJCJDCA_OFFSET))(this);
		}

		::System::Void CFKKNKJPJLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJKECEBEDL_CFKKNKJPJLM_OFFSET))(this);
		}

		::System::Void BNAFKHPAJOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJKECEBEDL_BNAFKHPAJOI_OFFSET))(this);
		}

		::System::Void GNIKDOFOOPE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AEJKECEBEDL_GNIKDOFOOPE_OFFSET))(this, a1);
		}

		::System::Void GANACOCPDLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJKECEBEDL_GANACOCPDLF_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJKECEBEDL_GET_FORCESKIP_OFFSET))(this);
		}

	};
