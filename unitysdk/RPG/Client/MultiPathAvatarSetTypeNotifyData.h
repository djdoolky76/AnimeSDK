#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNOHHOEPFHC.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MULTIPATHAVATARSETTYPENOTIFYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD8DB0D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiPathAvatarSetTypeNotifyData_TypeDefinitionIndex = 66304;

	class MultiPathAvatarSetTypeNotifyData : public ::System::Object
	{
	public:
		::HNOHHOEPFHC NewPathAvatarType; // 0x10
		::HNOHHOEPFHC OldPathAvatarType; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARSETTYPENOTIFYDATA_CTOR_OFFSET))(this);
		}

	};
}
