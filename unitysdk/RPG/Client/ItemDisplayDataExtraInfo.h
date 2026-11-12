#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ITEMDISPLAYDATAEXTRAINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xDDBBE30)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemDisplayDataExtraInfo_TypeDefinitionIndex = 67637;

	class ItemDisplayDataExtraInfo : public ::System::Object
	{
	public:
		::System::Boolean IsFromMultipleDrop; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDISPLAYDATAEXTRAINFO_CTOR_OFFSET))(this);
		}

	};
}
