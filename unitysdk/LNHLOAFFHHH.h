#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMOJFIOPIAD.h"
class GINLLEEBIOH;
namespace RPG::GameCore { class ChimeraDuelAttackJumpTextNode; }
namespace RPG::GameCore { class ChimeraDuelBranchNode; }
namespace RPG::GameCore { class ChimeraDuelCreateChimeraNode; }
namespace RPG::GameCore { class ChimeraDuelCustomTalkNode; }
namespace RPG::GameCore { class ChimeraDuelFireGlobalEffectNode; }
namespace RPG::GameCore { class ChimeraDuelHysilensEffectNode; }
namespace RPG::GameCore { class ChimeraDuelModifierContainerNode; }
namespace RPG::GameCore { class ChimeraDuelNpcAnimatorControlNode; }
namespace RPG::GameCore { class ChimeraDuelNpcDitherInNode; }
namespace RPG::GameCore { class ChimeraDuelNpcFireEffectNode; }
namespace RPG::GameCore { class ChimeraDuelNpcLeaveNode; }
namespace RPG::GameCore { class ChimeraDuelReorderChimeraNode; }
namespace RPG::GameCore { class ChimeraDuelRepeatNode; }
namespace RPG::GameCore { class ChimeraDuelReplaceSavedEntitiesNode; }
namespace RPG::GameCore { class ChimeraDuelSetChimeraLightWeightActiveNode; }
namespace RPG::GameCore { class ChimeraDuelShopModifierEffectNode; }
namespace RPG::GameCore { class ChimeraDuelSpawnAllyNpcHipplenMiniNode; }
namespace RPG::GameCore { class ChimeraDuelSummonNode; }
namespace RPG::GameCore { class ChimeraDuelTalkNode; }
namespace RPG::GameCore { class ChimeraDuelUIMoveToSummonQueueNode; }

#define LNHLOAFFHHH_BELPPBKKMMN_OFFSET UNITYSDK_OFFSET(0xB7E2870)
#define LNHLOAFFHHH_CPMDEHADFCA_OFFSET UNITYSDK_OFFSET(0xB7E27E0)
#define LNHLOAFFHHH_CTOR_OFFSET UNITYSDK_OFFSET(0xB7E1B40)
#define LNHLOAFFHHH_DCAICGJHLPP_OFFSET UNITYSDK_OFFSET(0xB7E2AB0)
#define LNHLOAFFHHH_DEBKJILBPJD_OFFSET UNITYSDK_OFFSET(0xB7E1BE0)
#define LNHLOAFFHHH_EIOENACNNHD_OFFSET UNITYSDK_OFFSET(0xB7E1D70)
#define LNHLOAFFHHH_EJDCAOKOMNG_OFFSET UNITYSDK_OFFSET(0xB7E2990)
#define LNHLOAFFHHH_ELCNNDPOFAK_OFFSET UNITYSDK_OFFSET(0xB7E2900)
#define LNHLOAFFHHH_EMAGJAMBALI_OFFSET UNITYSDK_OFFSET(0xB7E1E00)
#define LNHLOAFFHHH_FOJGLOJGJBA_OFFSET UNITYSDK_OFFSET(0xB7E2160)
#define LNHLOAFFHHH_HKELDKHOPGM_OFFSET UNITYSDK_OFFSET(0xB7E1B50)
#define LNHLOAFFHHH_JPHMMEHDLLA_OFFSET UNITYSDK_OFFSET(0xB7E1C70)
#define LNHLOAFFHHH_LAIFDNDIGKL_OFFSET UNITYSDK_OFFSET(0xB7E1F20)
#define LNHLOAFFHHH_LCJILKAHEGN_OFFSET UNITYSDK_OFFSET(0xB7E2BD0)
#define LNHLOAFFHHH_MDGNNIACGNL_OFFSET UNITYSDK_OFFSET(0xB7E1E90)
#define LNHLOAFFHHH_MHPFAEGKDGG_OFFSET UNITYSDK_OFFSET(0xB7E2B40)
#define LNHLOAFFHHH_MJDEDPDCBEM_OFFSET UNITYSDK_OFFSET(0xB7E2040)
#define LNHLOAFFHHH_MLCNIILCMKE_OFFSET UNITYSDK_OFFSET(0xB7E1FB0)
#define LNHLOAFFHHH_MPDEDENADJH_OFFSET UNITYSDK_OFFSET(0xB7E20D0)
#define LNHLOAFFHHH_MPHHNKLDHFJ_OFFSET UNITYSDK_OFFSET(0xB7E2A20)
#define LNHLOAFFHHH_OBEJDBHIOEF_OFFSET UNITYSDK_OFFSET(0xB7E1D00)

inline static constexpr unsigned int LNHLOAFFHHH_TypeDefinitionIndex = 78355;

	class LNHLOAFFHHH : public ::GMOJFIOPIAD
	{
	public:
		::GINLLEEBIOH* EEFMDEHLLFI; // 0x18
		::System::Void _ctor(::GINLLEEBIOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GINLLEEBIOH*))((::PBYTE)hIl2Cpp + LNHLOAFFHHH_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean HKELDKHOPGM(::RPG::GameCore::ChimeraDuelBranchNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelBranchNode*))((::PBYTE)hIl2Cpp + LNHLOAFFHHH_HKELDKHOPGM_OFFSET))(this, a1);
		}

		::System::Boolean DEBKJILBPJD(::RPG::GameCore::ChimeraDuelRepeatNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelRepeatNode*))((::PBYTE)hIl2Cpp + LNHLOAFFHHH_DEBKJILBPJD_OFFSET))(this, a1);
		}

		::System::Boolean JPHMMEHDLLA(::RPG::GameCore::ChimeraDuelModifierContainerNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelModifierContainerNode*))((::PBYTE)hIl2Cpp + LNHLOAFFHHH_JPHMMEHDLLA_OFFSET))(this, a1);
		}

		::System::Boolean OBEJDBHIOEF(::RPG::GameCore::ChimeraDuelShopModifierEffectNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelShopModifierEffectNode*))((::PBYTE)hIl2Cpp + LNHLOAFFHHH_OBEJDBHIOEF_OFFSET))(this, a1);
		}

		::System::Boolean EIOENACNNHD(::RPG::GameCore::ChimeraDuelNpcAnimatorControlNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelNpcAnimatorControlNode*))((::PBYTE)hIl2Cpp + LNHLOAFFHHH_EIOENACNNHD_OFFSET))(this, a1);
		}

		::System::Boolean EMAGJAMBALI(::RPG::GameCore::ChimeraDuelNpcFireEffectNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelNpcFireEffectNode*))((::PBYTE)hIl2Cpp + LNHLOAFFHHH_EMAGJAMBALI_OFFSET))(this, a1);
		}

		::System::Boolean MDGNNIACGNL(::RPG::GameCore::ChimeraDuelNpcDitherInNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelNpcDitherInNode*))((::PBYTE)hIl2Cpp + LNHLOAFFHHH_MDGNNIACGNL_OFFSET))(this, a1);
		}

		::System::Boolean LAIFDNDIGKL(::RPG::GameCore::ChimeraDuelSpawnAllyNpcHipplenMiniNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelSpawnAllyNpcHipplenMiniNode*))((::PBYTE)hIl2Cpp + LNHLOAFFHHH_LAIFDNDIGKL_OFFSET))(this, a1);
		}

		::System::Boolean MLCNIILCMKE(::RPG::GameCore::ChimeraDuelSummonNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelSummonNode*))((::PBYTE)hIl2Cpp + LNHLOAFFHHH_MLCNIILCMKE_OFFSET))(this, a1);
		}

		::System::Boolean MJDEDPDCBEM(::RPG::GameCore::ChimeraDuelFireGlobalEffectNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelFireGlobalEffectNode*))((::PBYTE)hIl2Cpp + LNHLOAFFHHH_MJDEDPDCBEM_OFFSET))(this, a1);
		}

		::System::Boolean MPDEDENADJH(::RPG::GameCore::ChimeraDuelHysilensEffectNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelHysilensEffectNode*))((::PBYTE)hIl2Cpp + LNHLOAFFHHH_MPDEDENADJH_OFFSET))(this, a1);
		}

		::System::Boolean FOJGLOJGJBA(::RPG::GameCore::ChimeraDuelTalkNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTalkNode*))((::PBYTE)hIl2Cpp + LNHLOAFFHHH_FOJGLOJGJBA_OFFSET))(this, a1);
		}

		::System::Boolean CPMDEHADFCA(::RPG::GameCore::ChimeraDuelCustomTalkNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelCustomTalkNode*))((::PBYTE)hIl2Cpp + LNHLOAFFHHH_CPMDEHADFCA_OFFSET))(this, a1);
		}

		::System::Boolean BELPPBKKMMN(::RPG::GameCore::ChimeraDuelReplaceSavedEntitiesNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelReplaceSavedEntitiesNode*))((::PBYTE)hIl2Cpp + LNHLOAFFHHH_BELPPBKKMMN_OFFSET))(this, a1);
		}

		::System::Boolean ELCNNDPOFAK(::RPG::GameCore::ChimeraDuelNpcLeaveNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelNpcLeaveNode*))((::PBYTE)hIl2Cpp + LNHLOAFFHHH_ELCNNDPOFAK_OFFSET))(this, a1);
		}

		::System::Boolean EJDCAOKOMNG(::RPG::GameCore::ChimeraDuelCreateChimeraNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelCreateChimeraNode*))((::PBYTE)hIl2Cpp + LNHLOAFFHHH_EJDCAOKOMNG_OFFSET))(this, a1);
		}

		::System::Boolean MPHHNKLDHFJ(::RPG::GameCore::ChimeraDuelUIMoveToSummonQueueNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelUIMoveToSummonQueueNode*))((::PBYTE)hIl2Cpp + LNHLOAFFHHH_MPHHNKLDHFJ_OFFSET))(this, a1);
		}

		::System::Boolean DCAICGJHLPP(::RPG::GameCore::ChimeraDuelAttackJumpTextNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelAttackJumpTextNode*))((::PBYTE)hIl2Cpp + LNHLOAFFHHH_DCAICGJHLPP_OFFSET))(this, a1);
		}

		::System::Boolean MHPFAEGKDGG(::RPG::GameCore::ChimeraDuelSetChimeraLightWeightActiveNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelSetChimeraLightWeightActiveNode*))((::PBYTE)hIl2Cpp + LNHLOAFFHHH_MHPFAEGKDGG_OFFSET))(this, a1);
		}

		::System::Boolean LCJILKAHEGN(::RPG::GameCore::ChimeraDuelReorderChimeraNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelReorderChimeraNode*))((::PBYTE)hIl2Cpp + LNHLOAFFHHH_LCJILKAHEGN_OFFSET))(this, a1);
		}

	};
