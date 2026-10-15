#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class CICNAOMJPGD;
class FEBFJNFNBAP;
namespace RPG::GameCore { class FinishPerformanceMission; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DGMIJNGMGOP_APDGPOALAPG_OFFSET UNITYSDK_OFFSET(0xE856F20)
#define DGMIJNGMGOP_BNAFKHPAJOI_OFFSET UNITYSDK_OFFSET(0xE8550B0)
#define DGMIJNGMGOP_CCTOR_OFFSET UNITYSDK_OFFSET(0xE857730)
#define DGMIJNGMGOP_CFKKNKJPJLM_OFFSET UNITYSDK_OFFSET(0xE855900)
#define DGMIJNGMGOP_CTOR_OFFSET UNITYSDK_OFFSET(0xE855030)
#define DGMIJNGMGOP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE855040)
#define DGMIJNGMGOP_EEAJKOMIJPP_OFFSET UNITYSDK_OFFSET(0xE856920)
#define DGMIJNGMGOP_HIIFNNAPLIE_OFFSET UNITYSDK_OFFSET(0xE8551D0)
#define DGMIJNGMGOP_HOCINNHGDMA_OFFSET UNITYSDK_OFFSET(0xE856FE0)
#define DGMIJNGMGOP_ILJELOPONJF_OFFSET UNITYSDK_OFFSET(0xE855A20)
#define DGMIJNGMGOP_INGNNPAPPGA_OFFSET UNITYSDK_OFFSET(0xE856E40)
#define DGMIJNGMGOP_LCAHFHMKLHE_OFFSET UNITYSDK_OFFSET(0xE856830)
#define DGMIJNGMGOP_LHOEJKDMHEM_OFFSET UNITYSDK_OFFSET(0xE857330)
#define DGMIJNGMGOP_OHANJPICCFA_OFFSET UNITYSDK_OFFSET(0xE856AC0)
#define DGMIJNGMGOP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE8552D0)
#define DGMIJNGMGOP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE856730)
#define DGMIJNGMGOP_TICK_OFFSET UNITYSDK_OFFSET(0xE8567D0)

	class DGMIJNGMGOP : public ::GELIALJDFBL
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::FEBFJNFNBAP*>* JBGICBANKII; // 0x18
		::RPG::GameCore::FinishPerformanceMission* OFKGLJOAMLD; // 0x20
		::CICNAOMJPGD* BLDCFMJOMMK; // 0x28
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::FEBFJNFNBAP*>* GAFIGJAGCJP; // 0x38
		::System::UInt32 IGGEDLCGKBH; // 0x40
		::System::UInt32 DJNJFAJBFCF; // 0x44
		::System::Boolean PLNJDLLDFOP; // 0x48
		::System::Byte _padding0[0x3];
		::System::UInt32 ONIGLAHGGIO; // 0x4C
		static ::System::Single* StaticGet_CIGIMIPDILE()
		{
			return (::System::Single*)UnitySDK::FromName("", "DGMIJNGMGOP")->GetStaticField(0x14EA0);
		}

		static ::System::Single* StaticGet_IGHKKECNLGO()
		{
			return (::System::Single*)UnitySDK::FromName("", "DGMIJNGMGOP")->GetStaticField(0x14EA4);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FinishPerformanceMission* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FinishPerformanceMission*))((::PBYTE)hIl2Cpp + DGMIJNGMGOP_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGMIJNGMGOP_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMIJNGMGOP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMIJNGMGOP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMIJNGMGOP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DGMIJNGMGOP_TICK_OFFSET))(this, a1);
		}

		::System::Void CFKKNKJPJLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMIJNGMGOP_CFKKNKJPJLM_OFFSET))(this);
		}

		::System::Void BNAFKHPAJOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMIJNGMGOP_BNAFKHPAJOI_OFFSET))(this);
		}

		::System::Void LCAHFHMKLHE(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + DGMIJNGMGOP_LCAHFHMKLHE_OFFSET))(this, a1, a2);
		}

		::System::Void INGNNPAPPGA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DGMIJNGMGOP_INGNNPAPPGA_OFFSET))(this, a1);
		}

		::System::Void APDGPOALAPG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DGMIJNGMGOP_APDGPOALAPG_OFFSET))(this, a1);
		}

		::System::Void ILJELOPONJF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DGMIJNGMGOP_ILJELOPONJF_OFFSET))(this, a1);
		}

		::System::Void HOCINNHGDMA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DGMIJNGMGOP_HOCINNHGDMA_OFFSET))(this, a1);
		}

		::System::Void LHOEJKDMHEM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DGMIJNGMGOP_LHOEJKDMHEM_OFFSET))(this, a1);
		}

		::System::Void OHANJPICCFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMIJNGMGOP_OHANJPICCFA_OFFSET))(this);
		}

		::System::Void HIIFNNAPLIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMIJNGMGOP_HIIFNNAPLIE_OFFSET))(this);
		}

		::System::Void EEAJKOMIJPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMIJNGMGOP_EEAJKOMIJPP_OFFSET))(this);
		}

	};
