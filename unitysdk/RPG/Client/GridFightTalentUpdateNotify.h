#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTalentType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTTALENTUPDATENOTIFY_CTOR_OFFSET UNITYSDK_OFFSET(0x1E179300)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTalentUpdateNotify_TypeDefinitionIndex = 67015;

	class GridFightTalentUpdateNotify : public ::System::Object
	{
	public:
		::System::UInt32 UnlockID; // 0x10
		::RPG::Client::GridFightTalentType TalentType; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTUPDATENOTIFY_CTOR_OFFSET))(this);
		}

	};
}
