#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightEquipTrackCancelReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
namespace RPG::Client { class GridFightEquipCraftRecipe; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightEquipTrack; }
namespace RPG::Client { class GridFightEquipTrackData; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define HMFMCGDHBIO_BHPJONLNFDP_OFFSET UNITYSDK_OFFSET(0x1A34F050)
#define HMFMCGDHBIO_CHECKSOURCESPECIFICCANCEL_OFFSET UNITYSDK_OFFSET(0x1A34F4A0)
#define HMFMCGDHBIO_CONTAINSEQUIPWITHVARIANT_OFFSET UNITYSDK_OFFSET(0x1A34ED60)
#define HMFMCGDHBIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1A34F910)
#define HMFMCGDHBIO_GETQUICKOPEQUIPIDS_OFFSET UNITYSDK_OFFSET(0x1A34EE10)
#define HMFMCGDHBIO_HCIJAPKLBIC_OFFSET UNITYSDK_OFFSET(0x1A34F540)
#define HMFMCGDHBIO_LAIKMDFDPAL_OFFSET UNITYSDK_OFFSET(0x1A34F7F0)
#define HMFMCGDHBIO_MMFPIKILHHE_OFFSET UNITYSDK_OFFSET(0x1A34E910)
#define HMFMCGDHBIO_SHOULDFORCETRACKWHENFULLONCONSTRUCT_OFFSET UNITYSDK_OFFSET(0x1A34E5B0)
#define HMFMCGDHBIO_SHOULDSKIPCOMMONCANCELFLOW_OFFSET UNITYSDK_OFFSET(0x1A34F4F0)
#define HMFMCGDHBIO_TRYCRAFTFORQUICKOP_OFFSET UNITYSDK_OFFSET(0x1A34EEA0)
#define HMFMCGDHBIO_UPDATEREQUIREDEQUIPS_OFFSET UNITYSDK_OFFSET(0x1A34E6D0)
#define HMFMCGDHBIO_UPDATETARGET_OFFSET UNITYSDK_OFFSET(0x1A34E2E0)
#define HMFMCGDHBIO_UPDATEWAITTRACKEQUIPIDS_OFFSET UNITYSDK_OFFSET(0x1A34E670)

inline static constexpr unsigned int HMFMCGDHBIO_TypeDefinitionIndex = 67121;

	class HMFMCGDHBIO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFMCGDHBIO_CTOR_OFFSET))(this);
		}

		::System::Void UpdateTarget(::RPG::Client::GridFightEquipTrack* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + HMFMCGDHBIO_UPDATETARGET_OFFSET))(this, a1);
		}

		::System::Boolean ShouldForceTrackWhenFullOnConstruct(::RPG::Client::GridFightEquipTrack* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + HMFMCGDHBIO_SHOULDFORCETRACKWHENFULLONCONSTRUCT_OFFSET))(this, a1);
		}

		::System::Void UpdateWaitTrackEquipIDs(::RPG::Client::GridFightEquipTrack* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + HMFMCGDHBIO_UPDATEWAITTRACKEQUIPIDS_OFFSET))(this, a1);
		}

		::System::Void UpdateRequiredEquips(::RPG::Client::GridFightEquipTrack* a1, ::RPG::Client::GridFightEquipTrackData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*, ::RPG::Client::GridFightEquipTrackData*))((::PBYTE)hIl2Cpp + HMFMCGDHBIO_UPDATEREQUIREDEQUIPS_OFFSET))(this, a1, a2);
		}

		::System::Boolean ContainsEquipWithVariant(::RPG::Client::GridFightEquipTrack* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*, ::System::UInt32))((::PBYTE)hIl2Cpp + HMFMCGDHBIO_CONTAINSEQUIPWITHVARIANT_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* GetQuickOpEquipIDs(::RPG::Client::GridFightEquipTrack* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + HMFMCGDHBIO_GETQUICKOPEQUIPIDS_OFFSET))(this, a1);
		}

		::System::Boolean TryCraftForQuickOp(::RPG::Client::GridFightEquipTrack* a1, ::RPG::Client::GridFightEquipCraftRecipe* a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3, ::RPG::Client::GridFightEquipTrackData* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*, ::RPG::Client::GridFightEquipCraftRecipe*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::RPG::Client::GridFightEquipTrackData*))((::PBYTE)hIl2Cpp + HMFMCGDHBIO_TRYCRAFTFORQUICKOP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Nullable_1<::RPG::Client::GridFightEquipTrackCancelReason> CheckSourceSpecificCancel(::RPG::Client::GridFightEquipTrack* a1)
		{
			return ((::System::Nullable_1<::RPG::Client::GridFightEquipTrackCancelReason>(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + HMFMCGDHBIO_CHECKSOURCESPECIFICCANCEL_OFFSET))(this, a1);
		}

		::System::Boolean ShouldSkipCommonCancelFlow(::RPG::Client::GridFightEquipTrack* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + HMFMCGDHBIO_SHOULDSKIPCOMMONCANCELFLOW_OFFSET))(this, a1);
		}

		::System::Void MMFPIKILHHE(::RPG::Client::GridFightEquipTrack* a1, ::System::UInt32 a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3, ::RPG::Client::GridFightEquipTrackData* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*, ::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::RPG::Client::GridFightEquipTrackData*))((::PBYTE)hIl2Cpp + HMFMCGDHBIO_MMFPIKILHHE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean BHPJONLNFDP(::System::UInt32 a1, ::RPG::Client::GridFightEquipTrack* a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3, ::RPG::Client::GridFightEquipTrackData* a4, ::RPG::Client::GridFightEquipItemData* a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightEquipTrack*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::RPG::Client::GridFightEquipTrackData*, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + HMFMCGDHBIO_BHPJONLNFDP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean HCIJAPKLBIC(::System::UInt32 a1, ::RPG::Client::GridFightEquipTrack* a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3, ::RPG::Client::GridFightEquipTrackData* a4, ::RPG::Client::GridFightEquipItemData* a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightEquipTrack*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::RPG::Client::GridFightEquipTrackData*, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + HMFMCGDHBIO_HCIJAPKLBIC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LAIKMDFDPAL(::RPG::Client::GridFightEquipTrack* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*, ::System::UInt32))((::PBYTE)hIl2Cpp + HMFMCGDHBIO_LAIKMDFDPAL_OFFSET))(this, a1, a2);
		}

	};
