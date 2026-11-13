#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNOHHOEPFHC.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ItemDisplayData; }

#define RPG_CLIENT_MULTIPATHAVATARGETNEWAVATARPATHNOTIFYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A188670)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiPathAvatarGetNewAvatarPathNotifyData_TypeDefinitionIndex = 68239;

	class MultiPathAvatarGetNewAvatarPathNotifyData : public ::System::Object
	{
	public:
		::RPG::Client::ItemDisplayData* EidolonDisplayItem; // 0x10
		::System::Boolean IsEarlyUnlocked; // 0x18
		::System::Boolean IsNew; // 0x19
		::System::Byte _padding0[0x2];
		::HNOHHOEPFHC MultiPathAvatarType; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARGETNEWAVATARPATHNOTIFYDATA_CTOR_OFFSET))(this);
		}

	};
}
