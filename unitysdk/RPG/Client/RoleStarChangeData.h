#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_ROLESTARCHANGEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1AD0C960)

namespace RPG::Client
{
	inline static constexpr unsigned int RoleStarChangeData_TypeDefinitionIndex = 66845;

	class RoleStarChangeData : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* StarChangedRole; // 0x10
		::System::UInt32 SourceRoleID; // 0x18
		::System::Int32 SourcePosIndex; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLESTARCHANGEDATA_CTOR_OFFSET))(this);
		}

	};
}
