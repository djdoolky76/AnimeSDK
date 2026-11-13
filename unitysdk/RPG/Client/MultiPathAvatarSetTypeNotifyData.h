#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNOHHOEPFHC.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MULTIPATHAVATARSETTYPENOTIFYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A188680)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiPathAvatarSetTypeNotifyData_TypeDefinitionIndex = 68240;

	class MultiPathAvatarSetTypeNotifyData : public ::System::Object
	{
	public:
		::HNOHHOEPFHC OldPathAvatarType; // 0x10
		::HNOHHOEPFHC NewPathAvatarType; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARSETTYPENOTIFYDATA_CTOR_OFFSET))(this);
		}

	};
}
