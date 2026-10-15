#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleFlowStateType.h"
#include "unitysdk/System/Object.h"
class CBFJBNFLHJE;
class NAHFJHAGNGE;
namespace RPG::GameCore { class BaseExpeditionBattleAction; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PPDGBIFKBAC_AFKAFAPJLBB_OFFSET UNITYSDK_OFFSET(0xC3748F0)
#define PPDGBIFKBAC_CTOR_OFFSET UNITYSDK_OFFSET(0xC3747C0)
#define PPDGBIFKBAC_EFPAEJBMNJH_OFFSET UNITYSDK_OFFSET(0xC374AA0)
#define PPDGBIFKBAC_GET_ROUTEID_OFFSET UNITYSDK_OFFSET(0xC374670)
#define PPDGBIFKBAC_HDEJDHKBCPN_OFFSET UNITYSDK_OFFSET(0xC374DB0)
#define PPDGBIFKBAC_IJJMIMJMNBN_OFFSET UNITYSDK_OFFSET(0xC374680)
#define PPDGBIFKBAC_KJOFNAJEMEB_OFFSET UNITYSDK_OFFSET(0xC3746E0)
#define PPDGBIFKBAC_LJHEKDELELC_OFFSET UNITYSDK_OFFSET(0xC374EB0)
#define PPDGBIFKBAC_MEGKDGHHCFM_OFFSET UNITYSDK_OFFSET(0xC374BB0)

inline static constexpr unsigned int PPDGBIFKBAC_TypeDefinitionIndex = 63900;

	class PPDGBIFKBAC : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* ECPKBEMLAPG; // 0x10
		::NAHFJHAGNGE* PMIJOPOIDML; // 0x18
		::System::Func_2<::RPG::GameCore::ExpeditionBattleFlowStateType, ::CBFJBNFLHJE*>* CBKKDIMPBJL; // 0x20
		::System::Collections::Generic::List_1<::CBFJBNFLHJE*>* JHAPINEOBNF; // 0x28
		::System::UInt32 CJBDCNHICBD; // 0x30
		::System::Int32 KIBHMBDDHKC; // 0x34
		::System::UInt32 _RouteID_k__BackingField; // 0x38
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::CBFJBNFLHJE*>* a3, ::NAHFJHAGNGE* a4, ::System::Func_2<::RPG::GameCore::ExpeditionBattleFlowStateType, ::CBFJBNFLHJE*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::CBFJBNFLHJE*>*, ::NAHFJHAGNGE*, ::System::Func_2<::RPG::GameCore::ExpeditionBattleFlowStateType, ::CBFJBNFLHJE*>*))((::PBYTE)hIl2Cpp + PPDGBIFKBAC_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 get_RouteID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPDGBIFKBAC_GET_ROUTEID_OFFSET))(this);
		}

		::System::Boolean IJJMIMJMNBN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPDGBIFKBAC_IJJMIMJMNBN_OFFSET))(this);
		}

		::RPG::GameCore::ExpeditionBattleFlowStateType KJOFNAJEMEB()
		{
			return ((::RPG::GameCore::ExpeditionBattleFlowStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + PPDGBIFKBAC_KJOFNAJEMEB_OFFSET))(this);
		}

		::System::Boolean AFKAFAPJLBB(::RPG::GameCore::BaseExpeditionBattleAction* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BaseExpeditionBattleAction*))((::PBYTE)hIl2Cpp + PPDGBIFKBAC_AFKAFAPJLBB_OFFSET))(this, a1);
		}

		::System::Void HDEJDHKBCPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPDGBIFKBAC_HDEJDHKBCPN_OFFSET))(this);
		}

		::System::Void EFPAEJBMNJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPDGBIFKBAC_EFPAEJBMNJH_OFFSET))(this);
		}

		::System::Boolean MEGKDGHHCFM(::CBFJBNFLHJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CBFJBNFLHJE*))((::PBYTE)hIl2Cpp + PPDGBIFKBAC_MEGKDGHHCFM_OFFSET))(this, a1);
		}

		::System::Boolean LJHEKDELELC(::RPG::GameCore::ExpeditionBattleFlowStateType a1, ::CBFJBNFLHJE* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleFlowStateType, ::CBFJBNFLHJE*))((::PBYTE)hIl2Cpp + PPDGBIFKBAC_LJHEKDELELC_OFFSET))(this, a1, a2);
		}

	};
