#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMOJFIOPIAD.h"
class OCFMCBFNLND;
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

#define HMDKMIJLJFH_BELPPBKKMMN_OFFSET UNITYSDK_OFFSET(0x15D6E7A0)
#define HMDKMIJLJFH_CPMDEHADFCA_OFFSET UNITYSDK_OFFSET(0x15D6E710)
#define HMDKMIJLJFH_CTOR_OFFSET UNITYSDK_OFFSET(0x15D6DD40)
#define HMDKMIJLJFH_DCAICGJHLPP_OFFSET UNITYSDK_OFFSET(0x15D6E9E0)
#define HMDKMIJLJFH_DEBKJILBPJD_OFFSET UNITYSDK_OFFSET(0x15D6DDE0)
#define HMDKMIJLJFH_EIOENACNNHD_OFFSET UNITYSDK_OFFSET(0x15D6DF90)
#define HMDKMIJLJFH_EJDCAOKOMNG_OFFSET UNITYSDK_OFFSET(0x15D6E8C0)
#define HMDKMIJLJFH_ELCNNDPOFAK_OFFSET UNITYSDK_OFFSET(0x15D6E830)
#define HMDKMIJLJFH_EMAGJAMBALI_OFFSET UNITYSDK_OFFSET(0x15D6E0D0)
#define HMDKMIJLJFH_FOJGLOJGJBA_OFFSET UNITYSDK_OFFSET(0x15D6E680)
#define HMDKMIJLJFH_HKELDKHOPGM_OFFSET UNITYSDK_OFFSET(0x15D6DD50)
#define HMDKMIJLJFH_JPHMMEHDLLA_OFFSET UNITYSDK_OFFSET(0x15D6DE70)
#define HMDKMIJLJFH_LAIFDNDIGKL_OFFSET UNITYSDK_OFFSET(0x15D6E350)
#define HMDKMIJLJFH_LCJILKAHEGN_OFFSET UNITYSDK_OFFSET(0x15D6EB00)
#define HMDKMIJLJFH_MDGNNIACGNL_OFFSET UNITYSDK_OFFSET(0x15D6E210)
#define HMDKMIJLJFH_MHPFAEGKDGG_OFFSET UNITYSDK_OFFSET(0x15D6EA70)
#define HMDKMIJLJFH_MJDEDPDCBEM_OFFSET UNITYSDK_OFFSET(0x15D6E470)
#define HMDKMIJLJFH_MLCNIILCMKE_OFFSET UNITYSDK_OFFSET(0x15D6E3E0)
#define HMDKMIJLJFH_MPDEDENADJH_OFFSET UNITYSDK_OFFSET(0x15D6E5F0)
#define HMDKMIJLJFH_MPHHNKLDHFJ_OFFSET UNITYSDK_OFFSET(0x15D6E950)
#define HMDKMIJLJFH_OBEJDBHIOEF_OFFSET UNITYSDK_OFFSET(0x15D6DF00)

inline static constexpr unsigned int HMDKMIJLJFH_TypeDefinitionIndex = 77631;

	class HMDKMIJLJFH : public ::GMOJFIOPIAD
	{
	public:
		::OCFMCBFNLND* EEFMDEHLLFI; // 0x18
		::System::Void _ctor(::OCFMCBFNLND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCFMCBFNLND*))((::PBYTE)hIl2Cpp + HMDKMIJLJFH_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean HKELDKHOPGM(::RPG::GameCore::ChimeraDuelBranchNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelBranchNode*))((::PBYTE)hIl2Cpp + HMDKMIJLJFH_HKELDKHOPGM_OFFSET))(this, a1);
		}

		::System::Boolean DEBKJILBPJD(::RPG::GameCore::ChimeraDuelRepeatNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelRepeatNode*))((::PBYTE)hIl2Cpp + HMDKMIJLJFH_DEBKJILBPJD_OFFSET))(this, a1);
		}

		::System::Boolean JPHMMEHDLLA(::RPG::GameCore::ChimeraDuelModifierContainerNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelModifierContainerNode*))((::PBYTE)hIl2Cpp + HMDKMIJLJFH_JPHMMEHDLLA_OFFSET))(this, a1);
		}

		::System::Boolean OBEJDBHIOEF(::RPG::GameCore::ChimeraDuelShopModifierEffectNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelShopModifierEffectNode*))((::PBYTE)hIl2Cpp + HMDKMIJLJFH_OBEJDBHIOEF_OFFSET))(this, a1);
		}

		::System::Boolean EIOENACNNHD(::RPG::GameCore::ChimeraDuelNpcAnimatorControlNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelNpcAnimatorControlNode*))((::PBYTE)hIl2Cpp + HMDKMIJLJFH_EIOENACNNHD_OFFSET))(this, a1);
		}

		::System::Boolean EMAGJAMBALI(::RPG::GameCore::ChimeraDuelNpcFireEffectNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelNpcFireEffectNode*))((::PBYTE)hIl2Cpp + HMDKMIJLJFH_EMAGJAMBALI_OFFSET))(this, a1);
		}

		::System::Boolean MDGNNIACGNL(::RPG::GameCore::ChimeraDuelNpcDitherInNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelNpcDitherInNode*))((::PBYTE)hIl2Cpp + HMDKMIJLJFH_MDGNNIACGNL_OFFSET))(this, a1);
		}

		::System::Boolean LAIFDNDIGKL(::RPG::GameCore::ChimeraDuelSpawnAllyNpcHipplenMiniNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelSpawnAllyNpcHipplenMiniNode*))((::PBYTE)hIl2Cpp + HMDKMIJLJFH_LAIFDNDIGKL_OFFSET))(this, a1);
		}

		::System::Boolean MLCNIILCMKE(::RPG::GameCore::ChimeraDuelSummonNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelSummonNode*))((::PBYTE)hIl2Cpp + HMDKMIJLJFH_MLCNIILCMKE_OFFSET))(this, a1);
		}

		::System::Boolean MJDEDPDCBEM(::RPG::GameCore::ChimeraDuelFireGlobalEffectNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelFireGlobalEffectNode*))((::PBYTE)hIl2Cpp + HMDKMIJLJFH_MJDEDPDCBEM_OFFSET))(this, a1);
		}

		::System::Boolean MPDEDENADJH(::RPG::GameCore::ChimeraDuelHysilensEffectNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelHysilensEffectNode*))((::PBYTE)hIl2Cpp + HMDKMIJLJFH_MPDEDENADJH_OFFSET))(this, a1);
		}

		::System::Boolean FOJGLOJGJBA(::RPG::GameCore::ChimeraDuelTalkNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTalkNode*))((::PBYTE)hIl2Cpp + HMDKMIJLJFH_FOJGLOJGJBA_OFFSET))(this, a1);
		}

		::System::Boolean CPMDEHADFCA(::RPG::GameCore::ChimeraDuelCustomTalkNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelCustomTalkNode*))((::PBYTE)hIl2Cpp + HMDKMIJLJFH_CPMDEHADFCA_OFFSET))(this, a1);
		}

		::System::Boolean BELPPBKKMMN(::RPG::GameCore::ChimeraDuelReplaceSavedEntitiesNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelReplaceSavedEntitiesNode*))((::PBYTE)hIl2Cpp + HMDKMIJLJFH_BELPPBKKMMN_OFFSET))(this, a1);
		}

		::System::Boolean ELCNNDPOFAK(::RPG::GameCore::ChimeraDuelNpcLeaveNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelNpcLeaveNode*))((::PBYTE)hIl2Cpp + HMDKMIJLJFH_ELCNNDPOFAK_OFFSET))(this, a1);
		}

		::System::Boolean EJDCAOKOMNG(::RPG::GameCore::ChimeraDuelCreateChimeraNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelCreateChimeraNode*))((::PBYTE)hIl2Cpp + HMDKMIJLJFH_EJDCAOKOMNG_OFFSET))(this, a1);
		}

		::System::Boolean MPHHNKLDHFJ(::RPG::GameCore::ChimeraDuelUIMoveToSummonQueueNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelUIMoveToSummonQueueNode*))((::PBYTE)hIl2Cpp + HMDKMIJLJFH_MPHHNKLDHFJ_OFFSET))(this, a1);
		}

		::System::Boolean DCAICGJHLPP(::RPG::GameCore::ChimeraDuelAttackJumpTextNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelAttackJumpTextNode*))((::PBYTE)hIl2Cpp + HMDKMIJLJFH_DCAICGJHLPP_OFFSET))(this, a1);
		}

		::System::Boolean MHPFAEGKDGG(::RPG::GameCore::ChimeraDuelSetChimeraLightWeightActiveNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelSetChimeraLightWeightActiveNode*))((::PBYTE)hIl2Cpp + HMDKMIJLJFH_MHPFAEGKDGG_OFFSET))(this, a1);
		}

		::System::Boolean LCJILKAHEGN(::RPG::GameCore::ChimeraDuelReorderChimeraNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelReorderChimeraNode*))((::PBYTE)hIl2Cpp + HMDKMIJLJFH_LCJILKAHEGN_OFFSET))(this, a1);
		}

	};
