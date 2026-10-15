#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KLJGNBBMJCM;
namespace RPG::GameCore { class LittleGameAbilityPixAirWaitSecond; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define ICMNEMIBIMJ_CJPOIEIKMPC_OFFSET UNITYSDK_OFFSET(0x15E465F0)
#define ICMNEMIBIMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15E464F0)
#define ICMNEMIBIMJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E46500)
#define ICMNEMIBIMJ_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x15E46940)
#define ICMNEMIBIMJ_MBGAGGKPNNM_OFFSET UNITYSDK_OFFSET(0x15E468D0)
#define ICMNEMIBIMJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E46540)
#define ICMNEMIBIMJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E46790)
#define ICMNEMIBIMJ_TICK_OFFSET UNITYSDK_OFFSET(0x15E467F0)

inline static constexpr unsigned int ICMNEMIBIMJ_TypeDefinitionIndex = 58194;

	class ICMNEMIBIMJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::LittleGameAbilityPixAirWaitSecond* OFKGLJOAMLD; // 0x18
		::KLJGNBBMJCM* KDKAGOHPOOC; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Boolean OJKJLINNHCJ; // 0x30
		::System::Byte _padding0[0x3];
		::System::Single BPAIDCADMDO; // 0x34
		::System::Single DKOFFPPGEFI; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LittleGameAbilityPixAirWaitSecond* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LittleGameAbilityPixAirWaitSecond*))((::PBYTE)hIl2Cpp + ICMNEMIBIMJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICMNEMIBIMJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICMNEMIBIMJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICMNEMIBIMJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ICMNEMIBIMJ_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskConfig* GetConfig()
		{
			return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICMNEMIBIMJ_GETCONFIG_OFFSET))(this);
		}

		::System::Single MBGAGGKPNNM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ICMNEMIBIMJ_MBGAGGKPNNM_OFFSET))(this);
		}

		::KLJGNBBMJCM* CJPOIEIKMPC()
		{
			return ((::KLJGNBBMJCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICMNEMIBIMJ_CJPOIEIKMPC_OFFSET))(this);
		}

	};
