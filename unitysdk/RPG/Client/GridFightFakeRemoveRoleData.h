#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTFAKEREMOVEROLEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D666A70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFakeRemoveRoleData_TypeDefinitionIndex = 66846;

	class GridFightFakeRemoveRoleData : public ::System::Object
	{
	public:
		::System::UInt32 TargetPosIndex; // 0x10
		::System::UInt32 PosIndex; // 0x14
		::System::UInt32 UID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFAKEREMOVEROLEDATA_CTOR_OFFSET))(this);
		}

	};
}
