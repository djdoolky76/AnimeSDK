#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNOHHOEPFHC.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ItemDisplayData; }

#define RPG_CLIENT_MULTIPATHAVATARGETNEWAVATARPATHNOTIFYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD8DB0C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiPathAvatarGetNewAvatarPathNotifyData_TypeDefinitionIndex = 66303;

	class MultiPathAvatarGetNewAvatarPathNotifyData : public ::System::Object
	{
	public:
		::RPG::Client::ItemDisplayData* EidolonDisplayItem; // 0x10
		::HNOHHOEPFHC MultiPathAvatarType; // 0x18
		::System::Boolean IsNew; // 0x1C
		::System::Boolean IsEarlyUnlocked; // 0x1D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARGETNEWAVATARPATHNOTIFYDATA_CTOR_OFFSET))(this);
		}

	};
}
