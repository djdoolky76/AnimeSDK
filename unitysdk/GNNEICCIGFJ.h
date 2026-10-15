#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMDKMIJLJFH.h"
class EBLPAACAJCK;
class KAKADGHNMFK;
namespace RPG::GameCore { class ChimeraDuelBranchNode; }
namespace RPG::GameCore { class ChimeraDuelCustomTalkNode; }
namespace RPG::GameCore { class ChimeraDuelModifierContainerNode; }
namespace RPG::GameCore { class ChimeraDuelNpcLeaveNode; }
namespace RPG::GameCore { class ChimeraDuelProbabilityNode; }
namespace RPG::GameCore { class ChimeraDuelProbilityComparePredicate; }
namespace RPG::GameCore { class ChimeraDuelRepeatNode; }
namespace RPG::GameCore { class ChimeraDuelReplaceSavedEntitiesNode; }
namespace RPG::GameCore { class ChimeraDuelSpawnAllyNpcHipplenMiniNode; }
namespace RPG::GameCore { class ChimeraDuelTalkNode; }

#define GNNEICCIGFJ_BELPPBKKMMN_OFFSET UNITYSDK_OFFSET(0x15B11740)
#define GNNEICCIGFJ_CPMDEHADFCA_OFFSET UNITYSDK_OFFSET(0x15B11340)
#define GNNEICCIGFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15B0FC70)
#define GNNEICCIGFJ_DEBKJILBPJD_OFFSET UNITYSDK_OFFSET(0x15B103D0)
#define GNNEICCIGFJ_ELCNNDPOFAK_OFFSET UNITYSDK_OFFSET(0x15B11F50)
#define GNNEICCIGFJ_FOJGLOJGJBA_OFFSET UNITYSDK_OFFSET(0x15B10E80)
#define GNNEICCIGFJ_HKELDKHOPGM_OFFSET UNITYSDK_OFFSET(0x15B0FC80)
#define GNNEICCIGFJ_JPHMMEHDLLA_OFFSET UNITYSDK_OFFSET(0x15B10670)
#define GNNEICCIGFJ_KGFJBCGKGFK_OFFSET UNITYSDK_OFFSET(0x15B0FD50)
#define GNNEICCIGFJ_LAIFDNDIGKL_OFFSET UNITYSDK_OFFSET(0x15B10B90)
#define GNNEICCIGFJ_MIIJDIDNPNC_OFFSET UNITYSDK_OFFSET(0x15B10180)

inline static constexpr unsigned int GNNEICCIGFJ_TypeDefinitionIndex = 77621;

	class GNNEICCIGFJ : public ::HMDKMIJLJFH
	{
	public:
		::EBLPAACAJCK* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::EBLPAACAJCK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBLPAACAJCK*))((::PBYTE)hIl2Cpp + GNNEICCIGFJ_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean HKELDKHOPGM(::RPG::GameCore::ChimeraDuelBranchNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelBranchNode*))((::PBYTE)hIl2Cpp + GNNEICCIGFJ_HKELDKHOPGM_OFFSET))(this, a1);
		}

		::System::Boolean KGFJBCGKGFK(::RPG::GameCore::ChimeraDuelProbabilityNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelProbabilityNode*))((::PBYTE)hIl2Cpp + GNNEICCIGFJ_KGFJBCGKGFK_OFFSET))(this, a1);
		}

		::System::Boolean MIIJDIDNPNC(::RPG::GameCore::ChimeraDuelProbilityComparePredicate* a1, ::KAKADGHNMFK* a2, ::System::Double a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelProbilityComparePredicate*, ::KAKADGHNMFK*, ::System::Double))((::PBYTE)hIl2Cpp + GNNEICCIGFJ_MIIJDIDNPNC_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean DEBKJILBPJD(::RPG::GameCore::ChimeraDuelRepeatNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelRepeatNode*))((::PBYTE)hIl2Cpp + GNNEICCIGFJ_DEBKJILBPJD_OFFSET))(this, a1);
		}

		::System::Boolean JPHMMEHDLLA(::RPG::GameCore::ChimeraDuelModifierContainerNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelModifierContainerNode*))((::PBYTE)hIl2Cpp + GNNEICCIGFJ_JPHMMEHDLLA_OFFSET))(this, a1);
		}

		::System::Boolean LAIFDNDIGKL(::RPG::GameCore::ChimeraDuelSpawnAllyNpcHipplenMiniNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelSpawnAllyNpcHipplenMiniNode*))((::PBYTE)hIl2Cpp + GNNEICCIGFJ_LAIFDNDIGKL_OFFSET))(this, a1);
		}

		::System::Boolean FOJGLOJGJBA(::RPG::GameCore::ChimeraDuelTalkNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTalkNode*))((::PBYTE)hIl2Cpp + GNNEICCIGFJ_FOJGLOJGJBA_OFFSET))(this, a1);
		}

		::System::Boolean CPMDEHADFCA(::RPG::GameCore::ChimeraDuelCustomTalkNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelCustomTalkNode*))((::PBYTE)hIl2Cpp + GNNEICCIGFJ_CPMDEHADFCA_OFFSET))(this, a1);
		}

		::System::Boolean BELPPBKKMMN(::RPG::GameCore::ChimeraDuelReplaceSavedEntitiesNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelReplaceSavedEntitiesNode*))((::PBYTE)hIl2Cpp + GNNEICCIGFJ_BELPPBKKMMN_OFFSET))(this, a1);
		}

		::System::Boolean ELCNNDPOFAK(::RPG::GameCore::ChimeraDuelNpcLeaveNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelNpcLeaveNode*))((::PBYTE)hIl2Cpp + GNNEICCIGFJ_ELCNNDPOFAK_OFFSET))(this, a1);
		}

	};
