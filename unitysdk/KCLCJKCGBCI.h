#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
namespace RPG::GameCore { class PlayAndWaitRogueSimpleTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define KCLCJKCGBCI_BNAFKHPAJOI_OFFSET UNITYSDK_OFFSET(0xB335270)
#define KCLCJKCGBCI_CFKKNKJPJLM_OFFSET UNITYSDK_OFFSET(0xB3356C0)
#define KCLCJKCGBCI_CTOR_OFFSET UNITYSDK_OFFSET(0xB3351B0)
#define KCLCJKCGBCI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB3351C0)
#define KCLCJKCGBCI_GANACOCPDLF_OFFSET UNITYSDK_OFFSET(0xB335950)
#define KCLCJKCGBCI_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB335B10)
#define KCLCJKCGBCI_GNIKDOFOOPE_OFFSET UNITYSDK_OFFSET(0xB335A10)
#define KCLCJKCGBCI_NPHDKJCJDCA_OFFSET UNITYSDK_OFFSET(0xB3354B0)
#define KCLCJKCGBCI_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB335870)
#define KCLCJKCGBCI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB335360)
#define KCLCJKCGBCI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB335750)
#define KCLCJKCGBCI_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0xB335310)
#define KCLCJKCGBCI_TICK_OFFSET UNITYSDK_OFFSET(0xB335810)

inline static constexpr unsigned int KCLCJKCGBCI_TypeDefinitionIndex = 58263;

	class KCLCJKCGBCI : public ::GELIALJDFBL
	{
	public:
		::GELIALJDFBL* DMKAOCCJEBG; // 0x18
		::RPG::GameCore::PlayAndWaitRogueSimpleTalk* OFKGLJOAMLD; // 0x20
		::System::Boolean EDBAPCABEMP; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayAndWaitRogueSimpleTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayAndWaitRogueSimpleTalk*))((::PBYTE)hIl2Cpp + KCLCJKCGBCI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLCJKCGBCI_DISPOSE_OFFSET))(this);
		}

		::GELIALJDFBL* SetNextTask(::GELIALJDFBL* a1)
		{
			return ((::GELIALJDFBL*(*)(::PVOID, ::GELIALJDFBL*))((::PBYTE)hIl2Cpp + KCLCJKCGBCI_SETNEXTTASK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLCJKCGBCI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLCJKCGBCI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KCLCJKCGBCI_TICK_OFFSET))(this, a1);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLCJKCGBCI_ONSKIP_OFFSET))(this);
		}

		::System::Void NPHDKJCJDCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLCJKCGBCI_NPHDKJCJDCA_OFFSET))(this);
		}

		::System::Void CFKKNKJPJLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLCJKCGBCI_CFKKNKJPJLM_OFFSET))(this);
		}

		::System::Void BNAFKHPAJOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLCJKCGBCI_BNAFKHPAJOI_OFFSET))(this);
		}

		::System::Void GNIKDOFOOPE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KCLCJKCGBCI_GNIKDOFOOPE_OFFSET))(this, a1);
		}

		::System::Void GANACOCPDLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLCJKCGBCI_GANACOCPDLF_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLCJKCGBCI_GET_FORCESKIP_OFFSET))(this);
		}

	};
