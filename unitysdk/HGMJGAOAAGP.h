#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class FPBABHMOAII;
class GELIALJDFBL;
namespace RPG::GameCore { class PlayAndWaitSimpleTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define HGMJGAOAAGP_BNAFKHPAJOI_OFFSET UNITYSDK_OFFSET(0x15CA4A50)
#define HGMJGAOAAGP_CFKKNKJPJLM_OFFSET UNITYSDK_OFFSET(0x15CA5300)
#define HGMJGAOAAGP_CTOR_OFFSET UNITYSDK_OFFSET(0x15CA49F0)
#define HGMJGAOAAGP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CA4A00)
#define HGMJGAOAAGP_EKCDIDBBEAC_OFFSET UNITYSDK_OFFSET(0x15CA56C0)
#define HGMJGAOAAGP_GANACOCPDLF_OFFSET UNITYSDK_OFFSET(0x15CA54C0)
#define HGMJGAOAAGP_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x15CA5960)
#define HGMJGAOAAGP_GNIKDOFOOPE_OFFSET UNITYSDK_OFFSET(0x15CA5910)
#define HGMJGAOAAGP_MCMDNGNOIAC_OFFSET UNITYSDK_OFFSET(0x15CA4E80)
#define HGMJGAOAAGP_NPHDKJCJDCA_OFFSET UNITYSDK_OFFSET(0x15CA5060)
#define HGMJGAOAAGP_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x15CA5630)
#define HGMJGAOAAGP_ONSKIP_OFFSET UNITYSDK_OFFSET(0x15CA5470)
#define HGMJGAOAAGP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CA4B60)
#define HGMJGAOAAGP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15CA53C0)
#define HGMJGAOAAGP_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x15CA4B10)
#define HGMJGAOAAGP_TICK_OFFSET UNITYSDK_OFFSET(0x15CA5410)

inline static constexpr unsigned int HGMJGAOAAGP_TypeDefinitionIndex = 52617;

	class HGMJGAOAAGP : public ::GELIALJDFBL
	{
	public:
		::GELIALJDFBL* DMKAOCCJEBG; // 0x18
		::RPG::GameCore::PlayAndWaitSimpleTalk* FBJHEDMOMBF; // 0x20
		::FPBABHMOAII* OFKGLJOAMLD; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::System::Boolean EDBAPCABEMP; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FPBABHMOAII* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FPBABHMOAII*))((::PBYTE)hIl2Cpp + HGMJGAOAAGP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMJGAOAAGP_DISPOSE_OFFSET))(this);
		}

		::GELIALJDFBL* SetNextTask(::GELIALJDFBL* a1)
		{
			return ((::GELIALJDFBL*(*)(::PVOID, ::GELIALJDFBL*))((::PBYTE)hIl2Cpp + HGMJGAOAAGP_SETNEXTTASK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMJGAOAAGP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMJGAOAAGP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HGMJGAOAAGP_TICK_OFFSET))(this, a1);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMJGAOAAGP_ONSKIP_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HGMJGAOAAGP_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* EKCDIDBBEAC()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMJGAOAAGP_EKCDIDBBEAC_OFFSET))(this);
		}

		::System::Void MCMDNGNOIAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMJGAOAAGP_MCMDNGNOIAC_OFFSET))(this);
		}

		::System::Void NPHDKJCJDCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMJGAOAAGP_NPHDKJCJDCA_OFFSET))(this);
		}

		::System::Void CFKKNKJPJLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMJGAOAAGP_CFKKNKJPJLM_OFFSET))(this);
		}

		::System::Void BNAFKHPAJOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMJGAOAAGP_BNAFKHPAJOI_OFFSET))(this);
		}

		::System::Void GNIKDOFOOPE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HGMJGAOAAGP_GNIKDOFOOPE_OFFSET))(this, a1);
		}

		::System::Void GANACOCPDLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMJGAOAAGP_GANACOCPDLF_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMJGAOAAGP_GET_FORCESKIP_OFFSET))(this);
		}

	};
