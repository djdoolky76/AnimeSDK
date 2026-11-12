#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MARBLEHEXDEACTIVATEDNOTIFY_CTOR_OFFSET UNITYSDK_OFFSET(0xDFC5D70)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleHexDeactivatedNotify_TypeDefinitionIndex = 67739;

	class MarbleHexDeactivatedNotify : public ::System::Object
	{
	public:
		::System::Boolean IsEnemy; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 HexID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXDEACTIVATEDNOTIFY_CTOR_OFFSET))(this);
		}

	};
}
