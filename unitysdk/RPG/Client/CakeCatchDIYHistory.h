#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BOMHOLBACKF.h"
#include "unitysdk/RPG/Client/TrainCakeCatchExhibitController_CatGroundType.h"
#include "unitysdk/System/Object.h"
class BFAKMCIJFCB;
namespace RPG::Client { class CakeCatchClimbingFrameData; }
namespace RPG::Client { class CakeCatchFreeRangeAreaData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKECATCHDIYHISTORY_CLEARALL_OFFSET UNITYSDK_OFFSET(0xD2416F0)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_CLEAREDITMODE_OFFSET UNITYSDK_OFFSET(0xD240F80)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_CLEARGROUNDPOSE_OFFSET UNITYSDK_OFFSET(0xD240E40)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_CLEARSHELFCAKE_OFFSET UNITYSDK_OFFSET(0xD241370)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_CREATEPROTODATA_OFFSET UNITYSDK_OFFSET(0xD2465F0)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_CTOR_OFFSET UNITYSDK_OFFSET(0xD23D6F0)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD23F430)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_GETCLIMBINGFRAMEBYSLOT_OFFSET UNITYSDK_OFFSET(0xD241BD0)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_GETCLIMBINGFRAMELIST_OFFSET UNITYSDK_OFFSET(0xD242170)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_GETCLIMBINGFRAMETYPE_OFFSET UNITYSDK_OFFSET(0xD241AE0)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_GETCOPYPROTODATA_OFFSET UNITYSDK_OFFSET(0xD23DAB0)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_GETFREERANGEAREABYSLOTID_OFFSET UNITYSDK_OFFSET(0xD2404A0)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_GETFREERANGEAREALIST_OFFSET UNITYSDK_OFFSET(0xD2422A0)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_SETCLIMBINGFRAMETYPE_OFFSET UNITYSDK_OFFSET(0xD23F920)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_SWITCHGROUNDPOSE_OFFSET UNITYSDK_OFFSET(0xD240B90)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_SYNCRECORD_OFFSET UNITYSDK_OFFSET(0xD23DB20)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_TRYADDCAKETOGROUND_OFFSET UNITYSDK_OFFSET(0xD2406D0)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_TRYADDCAKETOSHELF_OFFSET UNITYSDK_OFFSET(0xD23FE50)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_TRYRESETGROUNDPOSE_OFFSET UNITYSDK_OFFSET(0xD241480)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_WILLADDCAKETOGROUND_OFFSET UNITYSDK_OFFSET(0xD240620)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_WILLADDCAKETOSHELF_OFFSET UNITYSDK_OFFSET(0xD23FBF0)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_WILLSETGROUNDPOSE_OFFSET UNITYSDK_OFFSET(0xD246520)
#define RPG_CLIENT_CAKECATCHDIYHISTORY__ISCAKEKNOWPOSE_OFFSET UNITYSDK_OFFSET(0xD2471E0)
#define RPG_CLIENT_CAKECATCHDIYHISTORY__REBUILDINDEXES_OFFSET UNITYSDK_OFFSET(0xD245690)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchDIYHistory_TypeDefinitionIndex = 64421;

	class CakeCatchDIYHistory : public ::System::Object
	{
	public:
		::BFAKMCIJFCB* _ProtoData; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CakeCatchClimbingFrameData*>* _ClimbingFrameBySlotDict; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CakeCatchFreeRangeAreaData*>* _FreeRangeAreaDict; // 0x20
		::BOMHOLBACKF _ClimbingFrameType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncRecord(::BFAKMCIJFCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFAKMCIJFCB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_SYNCRECORD_OFFSET))(this, a1);
		}

		::System::Void _RebuildIndexes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY__REBUILDINDEXES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeCatchFreeRangeAreaData*>* GetFreeRangeAreaList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeCatchFreeRangeAreaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_GETFREERANGEAREALIST_OFFSET))(this);
		}

		::RPG::Client::CakeCatchFreeRangeAreaData* GetFreeRangeAreaBySlotId(::System::UInt32 a1)
		{
			return ((::RPG::Client::CakeCatchFreeRangeAreaData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_GETFREERANGEAREABYSLOTID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeCatchClimbingFrameData*>* GetClimbingFrameList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeCatchClimbingFrameData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_GETCLIMBINGFRAMELIST_OFFSET))(this);
		}

		::RPG::Client::CakeCatchClimbingFrameData* GetClimbingFrameBySlot(::System::UInt32 a1)
		{
			return ((::RPG::Client::CakeCatchClimbingFrameData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_GETCLIMBINGFRAMEBYSLOT_OFFSET))(this, a1);
		}

		::BOMHOLBACKF GetClimbingFrameType()
		{
			return ((::BOMHOLBACKF(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_GETCLIMBINGFRAMETYPE_OFFSET))(this);
		}

		::System::Void SetClimbingFrameType(::BOMHOLBACKF a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOMHOLBACKF))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_SETCLIMBINGFRAMETYPE_OFFSET))(this, a1);
		}

		::System::Boolean WillAddCakeToShelf(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_WILLADDCAKETOSHELF_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryAddCakeToShelf(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_TRYADDCAKETOSHELF_OFFSET))(this, a1, a2);
		}

		::System::Void ClearShelfCake(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_CLEARSHELFCAKE_OFFSET))(this, a1);
		}

		::System::Boolean WillAddCakeToGround(::System::UInt32 a1, ::System::Int32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_WILLADDCAKETOGROUND_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean WillSetGroundPose(::System::UInt32 a1, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_WILLSETGROUNDPOSE_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryAddCakeToGround(::System::UInt32 a1, ::System::Int32 a2, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType a3, ::System::UInt32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_TRYADDCAKETOGROUND_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SwitchGroundPose(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_SWITCHGROUNDPOSE_OFFSET))(this, a1);
		}

		::System::Void ClearGroundPose(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_CLEARGROUNDPOSE_OFFSET))(this, a1);
		}

		::System::Void TryResetGroundPose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_TRYRESETGROUNDPOSE_OFFSET))(this);
		}

		::System::Void ClearEditMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_CLEAREDITMODE_OFFSET))(this);
		}

		::System::Void ClearAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_CLEARALL_OFFSET))(this);
		}

		::BFAKMCIJFCB* GetCopyProtoData()
		{
			return ((::BFAKMCIJFCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_GETCOPYPROTODATA_OFFSET))(this);
		}

		::BFAKMCIJFCB* CreateProtoData()
		{
			return ((::BFAKMCIJFCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_CREATEPROTODATA_OFFSET))(this);
		}

		::System::Boolean _IsCakeKnowPose(::System::UInt32 a1, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY__ISCAKEKNOWPOSE_OFFSET))(this, a1, a2);
		}

	};
}
