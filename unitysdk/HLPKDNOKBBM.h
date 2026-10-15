#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LOEONJJICDK.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/TacticsBuyResult.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/TacticsDiscardResult.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/TacticsRefreshResult.h"
class AIMNKMEFBKE;
class CHLBAOBKLEH;
class CPAMMPKEOEO;
class GAMAMJKNNFK;
class IJFIHJJPHNA;
class JBKIDPONKLP;
class OPGEANNFHCO;
class PLAJONHLDJN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HLPKDNOKBBM_ACNNFHPPLOF_OFFSET UNITYSDK_OFFSET(0x1C63FF80)
#define HLPKDNOKBBM_BCGFOGKNJLH_OFFSET UNITYSDK_OFFSET(0x1C63B1A0)
#define HLPKDNOKBBM_BCILNLPOLBC_OFFSET UNITYSDK_OFFSET(0x1C63CF70)
#define HLPKDNOKBBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C639D60)
#define HLPKDNOKBBM_DEKFLPMNDMJ_OFFSET UNITYSDK_OFFSET(0x1C63A9A0)
#define HLPKDNOKBBM_DGEJJJHHDGJ_OFFSET UNITYSDK_OFFSET(0x1C63ED40)
#define HLPKDNOKBBM_DKCEADDMOMA_OFFSET UNITYSDK_OFFSET(0x1C63EA80)
#define HLPKDNOKBBM_EEBFFACJHFA_OFFSET UNITYSDK_OFFSET(0x1C640520)
#define HLPKDNOKBBM_EFACGJCEEKE_OFFSET UNITYSDK_OFFSET(0x1C640AD0)
#define HLPKDNOKBBM_FHNMPLMMELK_OFFSET UNITYSDK_OFFSET(0x1C63F270)
#define HLPKDNOKBBM_FLKMEDLAILA_OFFSET UNITYSDK_OFFSET(0x1C63E410)
#define HLPKDNOKBBM_IEENKAFDHIJ_OFFSET UNITYSDK_OFFSET(0x1C63D910)
#define HLPKDNOKBBM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C63AEF0)
#define HLPKDNOKBBM_JCFGKIKANDL_OFFSET UNITYSDK_OFFSET(0x1C640F90)
#define HLPKDNOKBBM_JCPKMJOJNFE_OFFSET UNITYSDK_OFFSET(0x1C63A410)
#define HLPKDNOKBBM_KBBCMCLJFML_OFFSET UNITYSDK_OFFSET(0x1C63BC20)
#define HLPKDNOKBBM_LBDKFLBEGIP_OFFSET UNITYSDK_OFFSET(0x1C63C990)
#define HLPKDNOKBBM_LGGNNJKMFKF_OFFSET UNITYSDK_OFFSET(0x1C639D70)
#define HLPKDNOKBBM_MBOABDGOAMJ_OFFSET UNITYSDK_OFFSET(0x1C63B6E0)
#define HLPKDNOKBBM_MEHCDKDOFGK_OFFSET UNITYSDK_OFFSET(0x1C63F8C0)
#define HLPKDNOKBBM_OKLOHGMDOIC_OFFSET UNITYSDK_OFFSET(0x1C63C3A0)
#define HLPKDNOKBBM_OKMMLJNNJHL_OFFSET UNITYSDK_OFFSET(0x1C63D3E0)
#define HLPKDNOKBBM_OOEEDIKJONP_OFFSET UNITYSDK_OFFSET(0x1C63FDF0)

inline static constexpr unsigned int HLPKDNOKBBM_TypeDefinitionIndex = 36522;

	class HLPKDNOKBBM : public ::LOEONJJICDK
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* KOFPJPACNFK; // 0x18
		::AIMNKMEFBKE* EEFMDEHLLFI; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* BLBFKOMOPGF; // 0x28
		::JBKIDPONKLP* LJNHKLIHDNA; // 0x30
		::OPGEANNFHCO* NFCNPEHJEBJ; // 0x38
		::OPGEANNFHCO* OHBCDBDKLHI; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::GAMAMJKNNFK*>*>* ANGHOHOKPFD; // 0x48
		::CPAMMPKEOEO* FBACJCJAJKJ; // 0x50
		::CHLBAOBKLEH* GLMCLFIBELO; // 0x58
		::OPGEANNFHCO* PJHADECJNMJ; // 0x60
		::PLAJONHLDJN* IBGLIGGOIEK; // 0x68
		::System::Int32 CKJGKLAIBII; // 0x70
		::System::Void _ctor(::PLAJONHLDJN* a1, ::AIMNKMEFBKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PLAJONHLDJN*, ::AIMNKMEFBKE*))((::PBYTE)hIl2Cpp + HLPKDNOKBBM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void LGGNNJKMFKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPKDNOKBBM_LGGNNJKMFKF_OFFSET))(this);
		}

		::System::Void JCPKMJOJNFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPKDNOKBBM_JCPKMJOJNFE_OFFSET))(this);
		}

		::System::Void DEKFLPMNDMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPKDNOKBBM_DEKFLPMNDMJ_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPKDNOKBBM_INITIALIZE_OFFSET))(this);
		}

		::System::Void BCGFOGKNJLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPKDNOKBBM_BCGFOGKNJLH_OFFSET))(this);
		}

		::System::Void MBOABDGOAMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPKDNOKBBM_MBOABDGOAMJ_OFFSET))(this);
		}

		::System::Void KBBCMCLJFML(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + HLPKDNOKBBM_KBBCMCLJFML_OFFSET))(this, a1);
		}

		::System::Void OKLOHGMDOIC(::IJFIHJJPHNA* a1, ::IJFIHJJPHNA* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::IJFIHJJPHNA*, ::System::UInt32))((::PBYTE)hIl2Cpp + HLPKDNOKBBM_OKLOHGMDOIC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LBDKFLBEGIP(::IJFIHJJPHNA* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Int32))((::PBYTE)hIl2Cpp + HLPKDNOKBBM_LBDKFLBEGIP_OFFSET))(this, a1, a2);
		}

		::System::Void BCILNLPOLBC(::IJFIHJJPHNA* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Int32))((::PBYTE)hIl2Cpp + HLPKDNOKBBM_BCILNLPOLBC_OFFSET))(this, a1, a2);
		}

		::System::Void OKMMLJNNJHL(::System::Int32 a1, ::IJFIHJJPHNA* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::IJFIHJJPHNA*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + HLPKDNOKBBM_OKMMLJNNJHL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IEENKAFDHIJ(::System::Int32 a1, ::IJFIHJJPHNA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + HLPKDNOKBBM_IEENKAFDHIJ_OFFSET))(this, a1, a2);
		}

		::System::Void DKCEADDMOMA(::System::Int32 a1, ::IJFIHJJPHNA* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::IJFIHJJPHNA*, ::System::Boolean))((::PBYTE)hIl2Cpp + HLPKDNOKBBM_DKCEADDMOMA_OFFSET))(this, a1, a2, a3);
		}

		::RPG::LittleGameShare::DiceCombatCore::TacticsRefreshResult DGEJJJHHDGJ(::System::Int32 a1, ::IJFIHJJPHNA* a2)
		{
			return ((::RPG::LittleGameShare::DiceCombatCore::TacticsRefreshResult(*)(::PVOID, ::System::Int32, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + HLPKDNOKBBM_DGEJJJHHDGJ_OFFSET))(this, a1, a2);
		}

		::System::UInt32 FLKMEDLAILA(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3, ::System::Int32 a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + HLPKDNOKBBM_FLKMEDLAILA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 FHNMPLMMELK(::System::Int32 a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + HLPKDNOKBBM_FHNMPLMMELK_OFFSET))(this, a1, a2, a3);
		}

		::RPG::LittleGameShare::DiceCombatCore::TacticsBuyResult MEHCDKDOFGK(::IJFIHJJPHNA* a1, ::System::Int32 a2)
		{
			return ((::RPG::LittleGameShare::DiceCombatCore::TacticsBuyResult(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Int32))((::PBYTE)hIl2Cpp + HLPKDNOKBBM_MEHCDKDOFGK_OFFSET))(this, a1, a2);
		}

		::RPG::LittleGameShare::DiceCombatCore::TacticsDiscardResult OOEEDIKJONP(::IJFIHJJPHNA* a1, ::System::Int32 a2)
		{
			return ((::RPG::LittleGameShare::DiceCombatCore::TacticsDiscardResult(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Int32))((::PBYTE)hIl2Cpp + HLPKDNOKBBM_OOEEDIKJONP_OFFSET))(this, a1, a2);
		}

		::System::Void ACNNFHPPLOF(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + HLPKDNOKBBM_ACNNFHPPLOF_OFFSET))(this, a1);
		}

		::System::Void EEBFFACJHFA(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + HLPKDNOKBBM_EEBFFACJHFA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* EFACGJCEEKE(::IJFIHJJPHNA* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + HLPKDNOKBBM_EFACGJCEEKE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* JCFGKIKANDL(::IJFIHJJPHNA* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + HLPKDNOKBBM_JCFGKIKANDL_OFFSET))(this, a1);
		}

	};
