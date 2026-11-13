#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IMissionChroniclePathUnlockConditionData; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_LEAVEFLOOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1966B6A0)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_LEAVEFLOOR_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1966B760)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_LEAVEFLOOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x1966B6B0)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_LEAVEFLOOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1966B880)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_LEAVEFLOOR_GET_CONDITIONTEXT_OFFSET UNITYSDK_OFFSET(0x1966B900)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_LEAVEFLOOR_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x1966B8F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionChroniclePathUnlockConditionData_LeaveFloor_TypeDefinitionIndex = 68052;

	class MissionChroniclePathUnlockConditionData_LeaveFloor : public ::System::Object
	{
	public:
		::System::UInt32 _FloorID_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_LEAVEFLOOR_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::RPG::Client::IMissionChroniclePathUnlockConditionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IMissionChroniclePathUnlockConditionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_LEAVEFLOOR_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_LEAVEFLOOR_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_LEAVEFLOOR_GETHASHCODE_OFFSET))(this);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_LEAVEFLOOR_GET_FLOORID_OFFSET))(this);
		}

		::System::String* get_ConditionText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONDATA_LEAVEFLOOR_GET_CONDITIONTEXT_OFFSET))(this);
		}

	};
}
