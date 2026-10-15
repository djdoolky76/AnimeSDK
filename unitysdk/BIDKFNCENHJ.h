#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAJDFCHFBGN;
class KAKADGHNMFK;
namespace RPG::GameCore { class ChimeraDuelEntityAttributeComparePredicate; }
namespace RPG::GameCore { class ChimeraDuelEntityHasAnyEquipmentsPredicate; }
namespace RPG::GameCore { class ChimeraDuelEntityPredicateBase; }
namespace RPG::GameCore { class ChimeraDuelEntityValueComparePredicate; }

#define BIDKFNCENHJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB4A3DC0)
#define BIDKFNCENHJ_EBLGEPPGOFI_OFFSET UNITYSDK_OFFSET(0xB4A3F50)
#define BIDKFNCENHJ_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xB4A3DD0)
#define BIDKFNCENHJ_LMNJJMBPHJA_OFFSET UNITYSDK_OFFSET(0xB4A40C0)
#define BIDKFNCENHJ_NDPFLFNHHAM_OFFSET UNITYSDK_OFFSET(0xB4A41A0)

	class BIDKFNCENHJ : public ::System::Object
	{
	public:
		::HAJDFCHFBGN* BJGGFKFAJMA; // 0x10
		::System::Void _ctor(::HAJDFCHFBGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HAJDFCHFBGN*))((::PBYTE)hIl2Cpp + BIDKFNCENHJ_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean KFGJEKJHIMB(::KAKADGHNMFK* a1, ::RPG::GameCore::ChimeraDuelEntityPredicateBase* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::KAKADGHNMFK*, ::RPG::GameCore::ChimeraDuelEntityPredicateBase*))((::PBYTE)hIl2Cpp + BIDKFNCENHJ_KFGJEKJHIMB_OFFSET))(this, a1, a2);
		}

		::System::Boolean EBLGEPPGOFI(::KAKADGHNMFK* a1, ::RPG::GameCore::ChimeraDuelEntityValueComparePredicate* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::KAKADGHNMFK*, ::RPG::GameCore::ChimeraDuelEntityValueComparePredicate*))((::PBYTE)hIl2Cpp + BIDKFNCENHJ_EBLGEPPGOFI_OFFSET))(this, a1, a2);
		}

		::System::Boolean LMNJJMBPHJA(::KAKADGHNMFK* a1, ::RPG::GameCore::ChimeraDuelEntityAttributeComparePredicate* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::KAKADGHNMFK*, ::RPG::GameCore::ChimeraDuelEntityAttributeComparePredicate*))((::PBYTE)hIl2Cpp + BIDKFNCENHJ_LMNJJMBPHJA_OFFSET))(this, a1, a2);
		}

		::System::Boolean NDPFLFNHHAM(::KAKADGHNMFK* a1, ::RPG::GameCore::ChimeraDuelEntityHasAnyEquipmentsPredicate* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::KAKADGHNMFK*, ::RPG::GameCore::ChimeraDuelEntityHasAnyEquipmentsPredicate*))((::PBYTE)hIl2Cpp + BIDKFNCENHJ_NDPFLFNHHAM_OFFSET))(this, a1, a2);
		}

	};
