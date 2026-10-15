#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PILFPGHPECF.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class RtCharacterFlagVisual; }
namespace RPG::GameCore { class RtCharacterVisual; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CPCJHAMKGKC_CTOR_OFFSET UNITYSDK_OFFSET(0xDCCF1B0)
#define CPCJHAMKGKC_DCGHFMDLDBN_OFFSET UNITYSDK_OFFSET(0xDCB9D40)
#define CPCJHAMKGKC_FKPIHLIOEJN_OFFSET UNITYSDK_OFFSET(0xDCB9D00)
#define CPCJHAMKGKC_IBCFGBOGPDF_OFFSET UNITYSDK_OFFSET(0xDCCF1C0)
#define CPCJHAMKGKC_JCAGBIBIGIP_OFFSET UNITYSDK_OFFSET(0xDCCED50)
#define CPCJHAMKGKC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xDCCED70)
#define CPCJHAMKGKC_MLJGBPDDBDD_OFFSET UNITYSDK_OFFSET(0xDCB9D20)
#define CPCJHAMKGKC_MPAKADKIDCK_OFFSET UNITYSDK_OFFSET(0xDCCED30)

inline static constexpr unsigned int CPCJHAMKGKC_TypeDefinitionIndex = 53968;

	class CPCJHAMKGKC : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* ILPDNHEJDJH; // 0x10
		::Il2CppArray<::PILFPGHPECF>* HBMMNAMCAHO; // 0x18
		::RPG::GameCore::RtCharacterVisual* EABKOHGCHFP; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* LJEADACFDCI; // 0x28
		::System::Int32 OBIABMKKIAF; // 0x30
		::System::Int32 LBGPDEAIBDJ; // 0x34
		::System::Int32 NFFHMIABMPM; // 0x38
		::System::Int32 NALMBOOCCIN; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCJHAMKGKC_CTOR_OFFSET))(this);
		}

		::System::Single FKPIHLIOEJN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCJHAMKGKC_FKPIHLIOEJN_OFFSET))(this);
		}

		::System::Single DCGHFMDLDBN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCJHAMKGKC_DCGHFMDLDBN_OFFSET))(this);
		}

		::System::Single MLJGBPDDBDD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCJHAMKGKC_MLJGBPDDBDD_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint MPAKADKIDCK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCJHAMKGKC_MPAKADKIDCK_OFFSET))(this);
		}

		::System::Boolean JCAGBIBIGIP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCJHAMKGKC_JCAGBIBIGIP_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::RtCharacterVisual* a1, ::Il2CppArray<::RPG::GameCore::RtCharacterFlagVisual*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtCharacterVisual*, ::Il2CppArray<::RPG::GameCore::RtCharacterFlagVisual*>*))((::PBYTE)hIl2Cpp + CPCJHAMKGKC_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Int32 IBCFGBOGPDF(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CPCJHAMKGKC_IBCFGBOGPDF_OFFSET))(this, a1);
		}

	};
