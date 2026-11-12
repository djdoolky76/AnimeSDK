#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ENDDRINKMAKERSEQUENCEFINISHARGS_CTOR_OFFSET UNITYSDK_OFFSET(0xD7B3440)

namespace RPG::Client
{
	inline static constexpr unsigned int EndDrinkMakerSequenceFinishArgs_TypeDefinitionIndex = 65081;

	class EndDrinkMakerSequenceFinishArgs : public ::System::Object
	{
	public:
		::System::UInt32 GuestId; // 0x10
		::System::UInt32 Tips; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENDDRINKMAKERSEQUENCEFINISHARGS_CTOR_OFFSET))(this);
		}

	};
}
