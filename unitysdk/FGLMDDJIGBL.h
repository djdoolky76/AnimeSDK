#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAJDFCHFBGN;
namespace RPG::GameCore { class ChimeraDuelAreSelectionsEqualPredicate; }
namespace RPG::GameCore { class ChimeraDuelAttributeComparePredicate; }
namespace RPG::GameCore { class ChimeraDuelPredicateBase; }
namespace RPG::GameCore { class ChimeraDuelValueComparePredicate; }

#define FGLMDDJIGBL_BKIFEFODILP_OFFSET UNITYSDK_OFFSET(0x15769400)
#define FGLMDDJIGBL_CTOR_OFFSET UNITYSDK_OFFSET(0x15768A70)
#define FGLMDDJIGBL_EBLGEPPGOFI_OFFSET UNITYSDK_OFFSET(0x15768BE0)
#define FGLMDDJIGBL_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x15768A80)
#define FGLMDDJIGBL_NNEKCMIAONE_OFFSET UNITYSDK_OFFSET(0x15768D40)

	class FGLMDDJIGBL : public ::System::Object
	{
	public:
		::HAJDFCHFBGN* BJGGFKFAJMA; // 0x10
		::System::Void _ctor(::HAJDFCHFBGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HAJDFCHFBGN*))((::PBYTE)hIl2Cpp + FGLMDDJIGBL_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean KFGJEKJHIMB(::RPG::GameCore::ChimeraDuelPredicateBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelPredicateBase*))((::PBYTE)hIl2Cpp + FGLMDDJIGBL_KFGJEKJHIMB_OFFSET))(this, a1);
		}

		::System::Boolean EBLGEPPGOFI(::RPG::GameCore::ChimeraDuelValueComparePredicate* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelValueComparePredicate*))((::PBYTE)hIl2Cpp + FGLMDDJIGBL_EBLGEPPGOFI_OFFSET))(this, a1);
		}

		::System::Boolean NNEKCMIAONE(::RPG::GameCore::ChimeraDuelAttributeComparePredicate* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelAttributeComparePredicate*))((::PBYTE)hIl2Cpp + FGLMDDJIGBL_NNEKCMIAONE_OFFSET))(this, a1);
		}

		::System::Boolean BKIFEFODILP(::RPG::GameCore::ChimeraDuelAreSelectionsEqualPredicate* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelAreSelectionsEqualPredicate*))((::PBYTE)hIl2Cpp + FGLMDDJIGBL_BKIFEFODILP_OFFSET))(this, a1);
		}

	};
