#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierCasterType.h"
#include "unitysdk/RPG/GameCore/ModifierStackingFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class AGPMEJILJBO;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AGPMEJILJBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE6B030)
#define AGPMEJILJBO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DE6B0E0)
#define AGPMEJILJBO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DE6AF50)

inline static constexpr unsigned int AGPMEJILJBO_TypeDefinitionIndex = 24645;

	class AGPMEJILJBO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* KIPAGNCANAJ; // 0x18
		::RPG::GameCore::DynamicFloat* PGKFGKELKDI; // 0x20
		::RPG::GameCore::DynamicFloat* LKFNPPCHCII; // 0x28
		::RPG::GameCore::DynamicFloat* FOJKIIBENMC; // 0x30
		::System::String* BJAPMKJMKNH; // 0x38
		::RPG::GameCore::DynamicString* IFNAGLOMHBK; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* LFHAABBNJDJ; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* DLCFLIBOFPN; // 0x50
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* KAKEMNLIPIH; // 0x58
		::System::String* MMCICOAEEJI; // 0x60
		::System::String* MKFEAAIKJNA; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* FMCJJBALBEN; // 0x70
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x78
		::RPG::GameCore::DynamicFloat* CFKOIAGCFDA; // 0x80
		::RPG::GameCore::DynamicFloat* FMIINGDFPKN; // 0x88
		::RPG::GameCore::DynamicFloat* HCDEOKNIGKG; // 0x90
		::System::Boolean APFPPJAKNBF; // 0x98
		::System::Boolean GCCGAPOANDM; // 0x99
		::System::Boolean DNNKBICNJOA; // 0x9A
		::System::Boolean CPFEDPAGDFF; // 0x9B
		::System::Boolean LHAFBLMBGHB; // 0x9C
		::System::Boolean BPEKOACCGHK; // 0x9D
		::System::Byte _padding0[0x2];
		::RPG::GameCore::ModifierCasterType ALCIIPJMPAF; // 0xA0
		::System::Single LDFKGILGIOA; // 0xA4
		::RPG::GameCore::ModifierStackingFlag MLLIBMECPGM; // 0xA8
		::System::Single OCAGLPIKAKC; // 0xAC
		::RPG::MVector3 HNNPEMAPANP; // 0xB0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPMEJILJBO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AGPMEJILJBO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AGPMEJILJBO*))((::PBYTE)hIl2Cpp + AGPMEJILJBO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::AGPMEJILJBO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AGPMEJILJBO*))((::PBYTE)hIl2Cpp + AGPMEJILJBO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
