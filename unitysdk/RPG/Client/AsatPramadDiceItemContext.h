#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AsatPramadDiceItemStep.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AsatPramadDiceItemContext; }
namespace RPG::Client { class RelicRecommendData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA9D620)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0x1CA9D400)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA9D530)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GETRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x1CA9E140)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GETSUBAFFIXCNTFORPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1CA9E230)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GETSUBAFFIXCNT_OFFSET UNITYSDK_OFFSET(0x1CA9DDD0)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GETSUBAFFIXENHANCECOUNT_OFFSET UNITYSDK_OFFSET(0x1CA9DE60)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1CA9D070)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GET_CURRENTSTEP_OFFSET UNITYSDK_OFFSET(0x1CA9CFF0)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GET_HASAFFIXSELECTIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CA9D300)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GET_HASENHANCECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CA9D360)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GET_HASRELICANDTYPESELECTED_OFFSET UNITYSDK_OFFSET(0x1CA9D2A0)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GET_ISPLANARORNAMENT_OFFSET UNITYSDK_OFFSET(0x1CA9D010)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GET_MAINAFFIXID_OFFSET UNITYSDK_OFFSET(0x1CA9D090)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GET_RELICID_OFFSET UNITYSDK_OFFSET(0x1CA9D030)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GET_RELICTYPE_OFFSET UNITYSDK_OFFSET(0x1CA9D050)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GET_REMAININGENHANCECOUNT_OFFSET UNITYSDK_OFFSET(0x1CA9D240)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GET_SUBAFFIXCNTMAP_OFFSET UNITYSDK_OFFSET(0x1CA9D0F0)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GET_SUBAFFIXIDS_OFFSET UNITYSDK_OFFSET(0x1CA9D0B0)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GET_USEDENHANCECOUNT_OFFSET UNITYSDK_OFFSET(0x1CA9D130)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_HASSUBAFFIXID_OFFSET UNITYSDK_OFFSET(0x1CA9DB40)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_RESETENHANCE_OFFSET UNITYSDK_OFFSET(0x1CA9DA90)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_SETAVATARID_OFFSET UNITYSDK_OFFSET(0x1CA9D950)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_SETCURRENTSTEP_OFFSET UNITYSDK_OFFSET(0x1CA9D740)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_SETISPLANARORNAMENT_OFFSET UNITYSDK_OFFSET(0x1CA9D790)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_SETMAINAFFIXID_OFFSET UNITYSDK_OFFSET(0x1CA9DA30)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_SETRELICID_OFFSET UNITYSDK_OFFSET(0x1CA9D890)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_SETRELICTYPE_OFFSET UNITYSDK_OFFSET(0x1CA9D8F0)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1CA9D080)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_SET_CURRENTSTEP_OFFSET UNITYSDK_OFFSET(0x1CA9D000)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_SET_ISPLANARORNAMENT_OFFSET UNITYSDK_OFFSET(0x1CA9D020)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_SET_MAINAFFIXID_OFFSET UNITYSDK_OFFSET(0x1CA9D0A0)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_SET_RELICID_OFFSET UNITYSDK_OFFSET(0x1CA9D040)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_SET_RELICTYPE_OFFSET UNITYSDK_OFFSET(0x1CA9D060)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_TRYADDSUBAFFIXID_OFFSET UNITYSDK_OFFSET(0x1CA9DC00)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_TRYREMOVESUBAFFIXID_OFFSET UNITYSDK_OFFSET(0x1CA9DD40)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_TRYSETSUBAFFIXCNT_OFFSET UNITYSDK_OFFSET(0x1CA9DF30)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_TRYSETSUBAFFIXENHANCECOUNT_OFFSET UNITYSDK_OFFSET(0x1CA9E0E0)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT__ONAVATARIDCHANGED_OFFSET UNITYSDK_OFFSET(0x1CA9D9B0)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT__RESETAFFIXSELECTION_OFFSET UNITYSDK_OFFSET(0x1CA9D690)
#define RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT__RESETRELICSELECTION_OFFSET UNITYSDK_OFFSET(0x1CA9D830)

namespace RPG::Client
{
	inline static constexpr unsigned int AsatPramadDiceItemContext_TypeDefinitionIndex = 68793;

	class AsatPramadDiceItemContext : public ::System::Object
	{
	public:
		::RPG::Client::RelicRecommendData* _RecommendData; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _SubAffixCntMap; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _SubAffixIDs; // 0x20
		::System::UInt32 _AvatarID_k__BackingField; // 0x28
		::RPG::Client::AsatPramadDiceItemStep _CurrentStep_k__BackingField; // 0x2C
		::System::Boolean _IsPlanarOrnament_k__BackingField; // 0x30
		::System::Byte _padding0[0x3];
		::System::UInt32 _RelicID_k__BackingField; // 0x34
		::System::UInt32 _MainAffixID_k__BackingField; // 0x38
		::RPG::GameCore::RelicType _RelicType_k__BackingField; // 0x3C
		// static const ::System::Object SubAffixSelectLimit; // 0x0
		// static const ::System::Object EnhanceCountLimit; // 0x0
		// static const ::System::Object InitialSubAffixCnt; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_CTOR_OFFSET))(this);
		}

		::RPG::Client::AsatPramadDiceItemStep get_CurrentStep()
		{
			return ((::RPG::Client::AsatPramadDiceItemStep(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GET_CURRENTSTEP_OFFSET))(this);
		}

		::System::Void set_CurrentStep(::RPG::Client::AsatPramadDiceItemStep a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AsatPramadDiceItemStep))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_SET_CURRENTSTEP_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPlanarOrnament()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GET_ISPLANARORNAMENT_OFFSET))(this);
		}

		::System::Void set_IsPlanarOrnament(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_SET_ISPLANARORNAMENT_OFFSET))(this, a1);
		}

		::System::UInt32 get_RelicID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GET_RELICID_OFFSET))(this);
		}

		::System::Void set_RelicID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_SET_RELICID_OFFSET))(this, a1);
		}

		::RPG::GameCore::RelicType get_RelicType()
		{
			return ((::RPG::GameCore::RelicType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GET_RELICTYPE_OFFSET))(this);
		}

		::System::Void set_RelicType(::RPG::GameCore::RelicType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_SET_RELICTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_SET_AVATARID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MainAffixID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GET_MAINAFFIXID_OFFSET))(this);
		}

		::System::Void set_MainAffixID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_SET_MAINAFFIXID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_SubAffixIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GET_SUBAFFIXIDS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* get_SubAffixCntMap()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GET_SUBAFFIXCNTMAP_OFFSET))(this);
		}

		::System::UInt32 get_UsedEnhanceCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GET_USEDENHANCECOUNT_OFFSET))(this);
		}

		::System::UInt32 get_RemainingEnhanceCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GET_REMAININGENHANCECOUNT_OFFSET))(this);
		}

		::System::Boolean get_HasRelicAndTypeSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GET_HASRELICANDTYPESELECTED_OFFSET))(this);
		}

		::System::Boolean get_HasAffixSelectionCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GET_HASAFFIXSELECTIONCOMPLETED_OFFSET))(this);
		}

		::System::Boolean get_HasEnhanceCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GET_HASENHANCECOMPLETED_OFFSET))(this);
		}

		static ::RPG::Client::AsatPramadDiceItemContext* Create()
		{
			return ((::RPG::Client::AsatPramadDiceItemContext*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_CREATE_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_CLEAR_OFFSET))(this);
		}

		::System::Void SetCurrentStep(::RPG::Client::AsatPramadDiceItemStep a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AsatPramadDiceItemStep))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_SETCURRENTSTEP_OFFSET))(this, a1);
		}

		::System::Void SetIsPlanarOrnament(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_SETISPLANARORNAMENT_OFFSET))(this, a1);
		}

		::System::Void SetRelicID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_SETRELICID_OFFSET))(this, a1);
		}

		::System::Void SetRelicType(::RPG::GameCore::RelicType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_SETRELICTYPE_OFFSET))(this, a1);
		}

		::System::Void SetAvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_SETAVATARID_OFFSET))(this, a1);
		}

		::System::Void SetMainAffixID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_SETMAINAFFIXID_OFFSET))(this, a1);
		}

		::System::Boolean HasSubAffixID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_HASSUBAFFIXID_OFFSET))(this, a1);
		}

		::System::Boolean TryAddSubAffixID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_TRYADDSUBAFFIXID_OFFSET))(this, a1);
		}

		::System::Boolean TryRemoveSubAffixID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_TRYREMOVESUBAFFIXID_OFFSET))(this, a1);
		}

		::System::UInt32 GetSubAffixCnt(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GETSUBAFFIXCNT_OFFSET))(this, a1);
		}

		::System::UInt32 GetSubAffixEnhanceCount(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GETSUBAFFIXENHANCECOUNT_OFFSET))(this, a1);
		}

		::System::Boolean TrySetSubAffixCnt(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_TRYSETSUBAFFIXCNT_OFFSET))(this, a1, a2);
		}

		::System::Boolean TrySetSubAffixEnhanceCount(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_TRYSETSUBAFFIXENHANCECOUNT_OFFSET))(this, a1, a2);
		}

		::System::Void ResetEnhance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_RESETENHANCE_OFFSET))(this);
		}

		::RPG::Client::RelicRecommendData* GetRecommendData()
		{
			return ((::RPG::Client::RelicRecommendData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GETRECOMMENDDATA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* GetSubAffixCntForProtocol()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT_GETSUBAFFIXCNTFORPROTOCOL_OFFSET))(this);
		}

		::System::Void _OnAvatarIDChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT__ONAVATARIDCHANGED_OFFSET))(this);
		}

		::System::Void _ResetRelicSelection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT__RESETRELICSELECTION_OFFSET))(this);
		}

		::System::Void _ResetAffixSelection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMCONTEXT__RESETAFFIXSELECTION_OFFSET))(this);
		}

	};
}
