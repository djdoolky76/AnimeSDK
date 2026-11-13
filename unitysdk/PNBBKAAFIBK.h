#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightEquipTrackCancelReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
class HMFMCGDHBIO;
namespace RPG::Client { class GridFightEquipCraftRecipe; }
namespace RPG::Client { class GridFightEquipTrack; }
namespace RPG::Client { class GridFightEquipTrackData; }
namespace RPG::Client { class GridFightTraitElationLaughPointEffect; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define PNBBKAAFIBK_CCTOR_OFFSET UNITYSDK_OFFSET(0x184A8D10)
#define PNBBKAAFIBK_CHECKSOURCESPECIFICCANCEL_OFFSET UNITYSDK_OFFSET(0x184A8BD0)
#define PNBBKAAFIBK_CONTAINSEQUIPWITHVARIANT_OFFSET UNITYSDK_OFFSET(0x184A7BC0)
#define PNBBKAAFIBK_CTOR_OFFSET UNITYSDK_OFFSET(0x184A8D00)
#define PNBBKAAFIBK_FPPPCPBECAL_OFFSET UNITYSDK_OFFSET(0x184A72A0)
#define PNBBKAAFIBK_GETQUICKOPEQUIPIDS_OFFSET UNITYSDK_OFFSET(0x184A7CB0)
#define PNBBKAAFIBK_JLLDEBOPFPP_OFFSET UNITYSDK_OFFSET(0x184A8940)
#define PNBBKAAFIBK_LCKJEONEKEF_OFFSET UNITYSDK_OFFSET(0x184A7D70)
#define PNBBKAAFIBK_LDEGPKHCMCN_OFFSET UNITYSDK_OFFSET(0x184A7F40)
#define PNBBKAAFIBK_NOIJMKBBCMD_OFFSET UNITYSDK_OFFSET(0x184A8280)
#define PNBBKAAFIBK_SHOULDFORCETRACKWHENFULLONCONSTRUCT_OFFSET UNITYSDK_OFFSET(0x184A6F70)
#define PNBBKAAFIBK_SHOULDSKIPCOMMONCANCELFLOW_OFFSET UNITYSDK_OFFSET(0x184A8CB0)
#define PNBBKAAFIBK_TRYCRAFTFORQUICKOP_OFFSET UNITYSDK_OFFSET(0x184A7E20)
#define PNBBKAAFIBK_UPDATEREQUIREDEQUIPS_OFFSET UNITYSDK_OFFSET(0x184A75A0)
#define PNBBKAAFIBK_UPDATETARGET_OFFSET UNITYSDK_OFFSET(0x184A6D40)
#define PNBBKAAFIBK_UPDATEWAITTRACKEQUIPIDS_OFFSET UNITYSDK_OFFSET(0x184A6FC0)

inline static constexpr unsigned int PNBBKAAFIBK_TypeDefinitionIndex = 67124;

	class PNBBKAAFIBK : public ::System::Object
	{
	public:
		static ::HMFMCGDHBIO** StaticGet_DKJDFKHPEHL()
		{
			return (::HMFMCGDHBIO**)UnitySDK::FromName("", "PNBBKAAFIBK")->GetStaticField(0x73CF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNBBKAAFIBK_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNBBKAAFIBK_CCTOR_OFFSET))();
		}

		::System::Void UpdateTarget(::RPG::Client::GridFightEquipTrack* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + PNBBKAAFIBK_UPDATETARGET_OFFSET))(this, a1);
		}

		::System::Boolean ShouldForceTrackWhenFullOnConstruct(::RPG::Client::GridFightEquipTrack* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + PNBBKAAFIBK_SHOULDFORCETRACKWHENFULLONCONSTRUCT_OFFSET))(this, a1);
		}

		::System::Void UpdateWaitTrackEquipIDs(::RPG::Client::GridFightEquipTrack* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + PNBBKAAFIBK_UPDATEWAITTRACKEQUIPIDS_OFFSET))(this, a1);
		}

		::System::Void UpdateRequiredEquips(::RPG::Client::GridFightEquipTrack* a1, ::RPG::Client::GridFightEquipTrackData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*, ::RPG::Client::GridFightEquipTrackData*))((::PBYTE)hIl2Cpp + PNBBKAAFIBK_UPDATEREQUIREDEQUIPS_OFFSET))(this, a1, a2);
		}

		::System::Boolean ContainsEquipWithVariant(::RPG::Client::GridFightEquipTrack* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*, ::System::UInt32))((::PBYTE)hIl2Cpp + PNBBKAAFIBK_CONTAINSEQUIPWITHVARIANT_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* GetQuickOpEquipIDs(::RPG::Client::GridFightEquipTrack* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + PNBBKAAFIBK_GETQUICKOPEQUIPIDS_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* LCKJEONEKEF(::RPG::Client::GridFightEquipTrack* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + PNBBKAAFIBK_LCKJEONEKEF_OFFSET))(a1);
		}

		::System::Boolean TryCraftForQuickOp(::RPG::Client::GridFightEquipTrack* a1, ::RPG::Client::GridFightEquipCraftRecipe* a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3, ::RPG::Client::GridFightEquipTrackData* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*, ::RPG::Client::GridFightEquipCraftRecipe*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::RPG::Client::GridFightEquipTrackData*))((::PBYTE)hIl2Cpp + PNBBKAAFIBK_TRYCRAFTFORQUICKOP_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Boolean LDEGPKHCMCN(::RPG::Client::GridFightEquipTrack* a1, ::RPG::Client::GridFightEquipCraftRecipe* a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightEquipTrack*, ::RPG::Client::GridFightEquipCraftRecipe*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + PNBBKAAFIBK_LDEGPKHCMCN_OFFSET))(a1, a2, a3);
		}

		::System::UInt32 JLLDEBOPFPP(::RPG::Client::GridFightEquipTrack* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + PNBBKAAFIBK_JLLDEBOPFPP_OFFSET))(this, a1);
		}

		::System::Boolean NOIJMKBBCMD(::RPG::Client::GridFightEquipTrack* a1, ::RPG::Client::GridFightEquipCraftRecipe* a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*, ::RPG::Client::GridFightEquipCraftRecipe*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + PNBBKAAFIBK_NOIJMKBBCMD_OFFSET))(this, a1, a2, a3);
		}

		::System::Nullable_1<::RPG::Client::GridFightEquipTrackCancelReason> CheckSourceSpecificCancel(::RPG::Client::GridFightEquipTrack* a1)
		{
			return ((::System::Nullable_1<::RPG::Client::GridFightEquipTrackCancelReason>(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + PNBBKAAFIBK_CHECKSOURCESPECIFICCANCEL_OFFSET))(this, a1);
		}

		::System::Boolean ShouldSkipCommonCancelFlow(::RPG::Client::GridFightEquipTrack* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + PNBBKAAFIBK_SHOULDSKIPCOMMONCANCELFLOW_OFFSET))(this, a1);
		}

		static ::System::Void FPPPCPBECAL(::RPG::Client::GridFightEquipTrack* a1, ::RPG::Client::GridFightTraitElationLaughPointEffect* a2)
		{
			return ((::System::Void(*)(::RPG::Client::GridFightEquipTrack*, ::RPG::Client::GridFightTraitElationLaughPointEffect*))((::PBYTE)hIl2Cpp + PNBBKAAFIBK_FPPPCPBECAL_OFFSET))(a1, a2);
		}

	};
