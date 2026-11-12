#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNALBIEDNLH.h"
#include "unitysdk/OKGHALPIAFP_DashPhaseState.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ALMFLCJCHKP;
class BPKPCOFKFLC;
class CIIKBJFOKHL;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_Dash; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OKGHALPIAFP_CCJDPPDGBBJ_OFFSET UNITYSDK_OFFSET(0xC7D1870)
#define OKGHALPIAFP_CTOR_OFFSET UNITYSDK_OFFSET(0xC7D0350)
#define OKGHALPIAFP_ELFJLMIDIII_OFFSET UNITYSDK_OFFSET(0xC7D1700)
#define OKGHALPIAFP_FEMMCNPGPIJ_OFFSET UNITYSDK_OFFSET(0xC7D0E00)
#define OKGHALPIAFP_GBOECLMFGGE_OFFSET UNITYSDK_OFFSET(0xC7D01F0)
#define OKGHALPIAFP_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xC7D2330)
#define OKGHALPIAFP_HDCOGICCDIH_OFFSET UNITYSDK_OFFSET(0xC7D0C00)
#define OKGHALPIAFP_HEKMHLJIFLN_OFFSET UNITYSDK_OFFSET(0xC7D0FE0)
#define OKGHALPIAFP_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xC7D0450)
#define OKGHALPIAFP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC7D2250)
#define OKGHALPIAFP_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xC7D2370)
#define OKGHALPIAFP_LAAACAAHAHJ_OFFSET UNITYSDK_OFFSET(0xC7D16A0)
#define OKGHALPIAFP_MHLCGIGHLEJ_OFFSET UNITYSDK_OFFSET(0xC7D0F60)
#define OKGHALPIAFP_PAELAGGABMK_OFFSET UNITYSDK_OFFSET(0xC7D08C0)

inline static constexpr unsigned int OKGHALPIAFP_TypeDefinitionIndex = 80640;

	class OKGHALPIAFP : public ::JNALBIEDNLH
	{
	public:
		::BPKPCOFKFLC* FILOLJDELOP; // 0x28
		::System::Collections::Generic::HashSet_1<::System::Int32>* GLFMBGFHLHG; // 0x30
		::RPG::GameCore::ChenLingBattleAbility_Dash* LOFNPOAFPKG; // 0x38
		::System::Collections::Generic::HashSet_1<::System::Int32>* APOEOJPCBCP; // 0x40
		::System::Collections::Generic::List_1<::BPKPCOFKFLC*>* KIACOFKBJBD; // 0x48
		::System::Single OOLLCHINCIN; // 0x50
		::UnityEngine::Vector3 BIJFGBKCFLH; // 0x54
		::OKGHALPIAFP_DashPhaseState HFBGOKCBDAN; // 0x60
		// static const ::System::Object CCHNPOFKFID; // 0x0
		::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::CIIKBJFOKHL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + OKGHALPIAFP_CTOR_OFFSET))(this, a1, a2);
		}

		::ALMFLCJCHKP* GBOECLMFGGE()
		{
			return ((::ALMFLCJCHKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGHALPIAFP_GBOECLMFGGE_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGHALPIAFP_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void PAELAGGABMK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OKGHALPIAFP_PAELAGGABMK_OFFSET))(this, a1);
		}

		::System::Boolean HDCOGICCDIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGHALPIAFP_HDCOGICCDIH_OFFSET))(this);
		}

		::System::Void FEMMCNPGPIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGHALPIAFP_FEMMCNPGPIJ_OFFSET))(this);
		}

		::System::Void MHLCGIGHLEJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OKGHALPIAFP_MHLCGIGHLEJ_OFFSET))(this, a1);
		}

		::System::Void HEKMHLJIFLN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OKGHALPIAFP_HEKMHLJIFLN_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OKGHALPIAFP_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean LAAACAAHAHJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGHALPIAFP_LAAACAAHAHJ_OFFSET))(this);
		}

		::System::Void ELFJLMIDIII(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OKGHALPIAFP_ELFJLMIDIII_OFFSET))(this, a1);
		}

		::System::Void CCJDPPDGBBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGHALPIAFP_CCJDPPDGBBJ_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGHALPIAFP_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGHALPIAFP_KHGIKBFDLFB_OFFSET))(this);
		}

	};
