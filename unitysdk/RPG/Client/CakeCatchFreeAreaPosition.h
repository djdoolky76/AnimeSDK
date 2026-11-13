#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CAKECATCHFREEAREAPOSITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD75030)
#define RPG_CLIENT_CAKECATCHFREEAREAPOSITION_GET_AREASLOTID_OFFSET UNITYSDK_OFFSET(0x1BD79F40)
#define RPG_CLIENT_CAKECATCHFREEAREAPOSITION_GET_INDEXINLIST_OFFSET UNITYSDK_OFFSET(0x1BD79F60)
#define RPG_CLIENT_CAKECATCHFREEAREAPOSITION_SET_AREASLOTID_OFFSET UNITYSDK_OFFSET(0x1BD79F50)
#define RPG_CLIENT_CAKECATCHFREEAREAPOSITION_SET_INDEXINLIST_OFFSET UNITYSDK_OFFSET(0x1BD79F70)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchFreeAreaPosition_TypeDefinitionIndex = 64415;

	class CakeCatchFreeAreaPosition : public ::System::Object
	{
	public:
		::System::Int32 _IndexInList_k__BackingField; // 0x10
		::System::UInt32 _AreaSlotId_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREEAREAPOSITION_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_AreaSlotId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREEAREAPOSITION_GET_AREASLOTID_OFFSET))(this);
		}

		::System::Void set_AreaSlotId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREEAREAPOSITION_SET_AREASLOTID_OFFSET))(this, a1);
		}

		::System::Int32 get_IndexInList()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREEAREAPOSITION_GET_INDEXINLIST_OFFSET))(this);
		}

		::System::Void set_IndexInList(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREEAREAPOSITION_SET_INDEXINLIST_OFFSET))(this, a1);
		}

	};
}
