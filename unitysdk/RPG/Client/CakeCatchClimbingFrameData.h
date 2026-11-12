#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJACHMJFEAH;

#define RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD245500)
#define RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD245570)
#define RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_GET_CAKEID_OFFSET UNITYSDK_OFFSET(0xD245600)
#define RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_GET_SLOT_OFFSET UNITYSDK_OFFSET(0xD245620)
#define RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_SETCAKEID_OFFSET UNITYSDK_OFFSET(0xD2455B0)
#define RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_SET_CAKEID_OFFSET UNITYSDK_OFFSET(0xD245610)
#define RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_SET_SLOT_OFFSET UNITYSDK_OFFSET(0xD245630)
#define RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_SYNCFROMPROTO_OFFSET UNITYSDK_OFFSET(0xD245510)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchClimbingFrameData_TypeDefinitionIndex = 64420;

	class CakeCatchClimbingFrameData : public ::System::Object
	{
	public:
		::System::UInt32 _CakeId_k__BackingField; // 0x10
		::System::UInt32 _Slot_k__BackingField; // 0x14
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void SyncFromProto(::HJACHMJFEAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJACHMJFEAH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_SYNCFROMPROTO_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void SetCakeId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_SETCAKEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CakeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_GET_CAKEID_OFFSET))(this);
		}

		::System::Void set_CakeId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_SET_CAKEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Slot()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_GET_SLOT_OFFSET))(this);
		}

		::System::Void set_Slot(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHCLIMBINGFRAMEDATA_SET_SLOT_OFFSET))(this, a1);
		}

	};
}
