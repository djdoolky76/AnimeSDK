#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightAhaUnlockConditionType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTAHAUNLOCKCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0xDA5DC30)
#define RPG_CLIENT_GRIDFIGHTAHAUNLOCKCONDITION_GET_ISMET_OFFSET UNITYSDK_OFFSET(0xDA5DD90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAhaUnlockCondition_TypeDefinitionIndex = 66777;

	class GridFightAhaUnlockCondition : public ::System::Object
	{
	public:
		::RPG::Client::GridFightAhaUnlockConditionType Type; // 0x10
		::System::UInt32 Current; // 0x14
		::RPG::Client::TextID TextID; // 0x18
		::System::UInt32 Target; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHAUNLOCKCONDITION_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsMet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHAUNLOCKCONDITION_GET_ISMET_OFFSET))(this);
		}

	};
}
