#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_PAMOCCUPYDETAIL_CTOR_OFFSET UNITYSDK_OFFSET(0xE32B2A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiFloorConflictModule_PamOccupyDetail_TypeDefinitionIndex = 68238;

	class MultiFloorConflictModule_PamOccupyDetail : public ::System::Object
	{
	public:
		::System::Boolean IsOccupy; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 FloorID; // 0x14
		::System::UInt32 MainMissionID; // 0x18
		::System::UInt32 GroupID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_PAMOCCUPYDETAIL_CTOR_OFFSET))(this);
		}

	};
}
