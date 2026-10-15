#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HAMNJNDCEEH.h"
class PKEJBHFMHCB;
namespace RPG::GameCore { class ChimeraDuelBackToEndOfTeamNode; }
namespace RPG::GameCore { class ChimeraDuelDeleteEffectNode; }
namespace RPG::GameCore { class ChimeraDuelDitherOutNode; }
namespace RPG::GameCore { class ChimeraDuelFireBulletNode; }
namespace RPG::GameCore { class ChimeraDuelFireEffectNode; }
namespace RPG::GameCore { class ChimeraDuelLeaveNode; }
namespace RPG::GameCore { class ChimeraDuelMoveToStartOfTeamNode; }
namespace RPG::GameCore { class ChimeraDuelParallelNode; }
namespace RPG::GameCore { class ChimeraDuelPlayAnimationNode; }
namespace RPG::GameCore { class ChimeraDuelPlayEyeAnimationNode; }
namespace RPG::GameCore { class ChimeraDuelProbabilityNode; }
namespace RPG::GameCore { class ChimeraDuelSwapPositionNode; }
namespace RPG::GameCore { class ChimeraDuelWaitReplaceEffectNode; }
namespace RPG::GameCore { class ChimeraDuelWaitSecondsNode; }

#define GMOJFIOPIAD_ACBBNMKCAIL_OFFSET UNITYSDK_OFFSET(0x15ADBDE0)
#define GMOJFIOPIAD_ALDIOJMEPPB_OFFSET UNITYSDK_OFFSET(0x15ADBBA0)
#define GMOJFIOPIAD_CCGJKLLAOMA_OFFSET UNITYSDK_OFFSET(0x15ADBA80)
#define GMOJFIOPIAD_CTOR_OFFSET UNITYSDK_OFFSET(0x15ADAE00)
#define GMOJFIOPIAD_DLCIIJPBKEK_OFFSET UNITYSDK_OFFSET(0x15ADB720)
#define GMOJFIOPIAD_ECKLONDAGGN_OFFSET UNITYSDK_OFFSET(0x15ADC480)
#define GMOJFIOPIAD_FKPPHHHJPDD_OFFSET UNITYSDK_OFFSET(0x15ADBCC0)
#define GMOJFIOPIAD_GAIHHGOGNHH_OFFSET UNITYSDK_OFFSET(0x15ADB550)
#define GMOJFIOPIAD_GLAEHFIMBPN_OFFSET UNITYSDK_OFFSET(0x15ADB840)
#define GMOJFIOPIAD_IBCAKDJCDOE_OFFSET UNITYSDK_OFFSET(0x15ADB670)
#define GMOJFIOPIAD_ILBBABKLADG_OFFSET UNITYSDK_OFFSET(0x15ADC300)
#define GMOJFIOPIAD_KGBHHDBELCO_OFFSET UNITYSDK_OFFSET(0x15ADB960)
#define GMOJFIOPIAD_KGFJBCGKGFK_OFFSET UNITYSDK_OFFSET(0x15ADC600)
#define GMOJFIOPIAD_KKLGPLPMCOI_OFFSET UNITYSDK_OFFSET(0x15ADC0F0)
#define GMOJFIOPIAD_LLCDDKOLEHF_OFFSET UNITYSDK_OFFSET(0x15ADAE10)

	class GMOJFIOPIAD : public ::HAMNJNDCEEH
	{
	public:
		::PKEJBHFMHCB* EEFMDEHLLFI; // 0x10
		::System::Void _ctor(::PKEJBHFMHCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKEJBHFMHCB*))((::PBYTE)hIl2Cpp + GMOJFIOPIAD_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean LLCDDKOLEHF(::RPG::GameCore::ChimeraDuelParallelNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelParallelNode*))((::PBYTE)hIl2Cpp + GMOJFIOPIAD_LLCDDKOLEHF_OFFSET))(this, a1);
		}

		::System::Boolean GAIHHGOGNHH(::RPG::GameCore::ChimeraDuelPlayAnimationNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelPlayAnimationNode*))((::PBYTE)hIl2Cpp + GMOJFIOPIAD_GAIHHGOGNHH_OFFSET))(this, a1);
		}

		::System::Boolean IBCAKDJCDOE(::RPG::GameCore::ChimeraDuelWaitSecondsNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelWaitSecondsNode*))((::PBYTE)hIl2Cpp + GMOJFIOPIAD_IBCAKDJCDOE_OFFSET))(this, a1);
		}

		::System::Boolean DLCIIJPBKEK(::RPG::GameCore::ChimeraDuelPlayEyeAnimationNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelPlayEyeAnimationNode*))((::PBYTE)hIl2Cpp + GMOJFIOPIAD_DLCIIJPBKEK_OFFSET))(this, a1);
		}

		::System::Boolean GLAEHFIMBPN(::RPG::GameCore::ChimeraDuelDitherOutNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelDitherOutNode*))((::PBYTE)hIl2Cpp + GMOJFIOPIAD_GLAEHFIMBPN_OFFSET))(this, a1);
		}

		::System::Boolean KGBHHDBELCO(::RPG::GameCore::ChimeraDuelFireEffectNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelFireEffectNode*))((::PBYTE)hIl2Cpp + GMOJFIOPIAD_KGBHHDBELCO_OFFSET))(this, a1);
		}

		::System::Boolean CCGJKLLAOMA(::RPG::GameCore::ChimeraDuelDeleteEffectNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelDeleteEffectNode*))((::PBYTE)hIl2Cpp + GMOJFIOPIAD_CCGJKLLAOMA_OFFSET))(this, a1);
		}

		::System::Boolean ALDIOJMEPPB(::RPG::GameCore::ChimeraDuelWaitReplaceEffectNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelWaitReplaceEffectNode*))((::PBYTE)hIl2Cpp + GMOJFIOPIAD_ALDIOJMEPPB_OFFSET))(this, a1);
		}

		::System::Boolean FKPPHHHJPDD(::RPG::GameCore::ChimeraDuelLeaveNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelLeaveNode*))((::PBYTE)hIl2Cpp + GMOJFIOPIAD_FKPPHHHJPDD_OFFSET))(this, a1);
		}

		::System::Boolean ACBBNMKCAIL(::RPG::GameCore::ChimeraDuelSwapPositionNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelSwapPositionNode*))((::PBYTE)hIl2Cpp + GMOJFIOPIAD_ACBBNMKCAIL_OFFSET))(this, a1);
		}

		::System::Boolean KKLGPLPMCOI(::RPG::GameCore::ChimeraDuelFireBulletNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelFireBulletNode*))((::PBYTE)hIl2Cpp + GMOJFIOPIAD_KKLGPLPMCOI_OFFSET))(this, a1);
		}

		::System::Boolean ILBBABKLADG(::RPG::GameCore::ChimeraDuelBackToEndOfTeamNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelBackToEndOfTeamNode*))((::PBYTE)hIl2Cpp + GMOJFIOPIAD_ILBBABKLADG_OFFSET))(this, a1);
		}

		::System::Boolean ECKLONDAGGN(::RPG::GameCore::ChimeraDuelMoveToStartOfTeamNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelMoveToStartOfTeamNode*))((::PBYTE)hIl2Cpp + GMOJFIOPIAD_ECKLONDAGGN_OFFSET))(this, a1);
		}

		::System::Boolean KGFJBCGKGFK(::RPG::GameCore::ChimeraDuelProbabilityNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelProbabilityNode*))((::PBYTE)hIl2Cpp + GMOJFIOPIAD_KGFJBCGKGFK_OFFSET))(this, a1);
		}

	};
