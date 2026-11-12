#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JHCEEAPHHGK;

#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSLOT_CTOR_OFFSET UNITYSDK_OFFSET(0xDAB8A20)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSLOT_GET_CUREQUIPUID_OFFSET UNITYSDK_OFFSET(0xDAC1B20)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSLOT_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xDAB92B0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSLOT_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xDAC1B40)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSLOT_GET_POS_OFFSET UNITYSDK_OFFSET(0xDAC1B60)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSLOT_GET_PRESETBASICID_OFFSET UNITYSDK_OFFSET(0xDAC1B00)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSLOT_SET_CUREQUIPUID_OFFSET UNITYSDK_OFFSET(0xDAC1B30)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSLOT_SET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xDAC1B50)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSLOT_SET_POS_OFFSET UNITYSDK_OFFSET(0xDAC1B70)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSLOT_SET_PRESETBASICID_OFFSET UNITYSDK_OFFSET(0xDAC1B10)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSLOT_UPDATE_OFFSET UNITYSDK_OFFSET(0xDAB8A90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightElationLaughPointSlot_TypeDefinitionIndex = 67198;

	class GridFightElationLaughPointSlot : public ::System::Object
	{
	public:
		::System::Boolean _IsUnlock_k__BackingField; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 _CurEquipUid_k__BackingField; // 0x14
		::System::UInt32 _PresetBasicId_k__BackingField; // 0x18
		::System::UInt32 _Pos_k__BackingField; // 0x1C
		::System::Void _ctor(::JHCEEAPHHGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JHCEEAPHHGK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSLOT_CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::JHCEEAPHHGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JHCEEAPHHGK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSLOT_UPDATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_PresetBasicId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSLOT_GET_PRESETBASICID_OFFSET))(this);
		}

		::System::Void set_PresetBasicId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSLOT_SET_PRESETBASICID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurEquipUid()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSLOT_GET_CUREQUIPUID_OFFSET))(this);
		}

		::System::Void set_CurEquipUid(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSLOT_SET_CUREQUIPUID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSLOT_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSLOT_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Void set_IsUnlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSLOT_SET_ISUNLOCK_OFFSET))(this, a1);
		}

		::System::UInt32 get_Pos()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSLOT_GET_POS_OFFSET))(this);
		}

		::System::Void set_Pos(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSLOT_SET_POS_OFFSET))(this, a1);
		}

	};
}
