#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PIXAIR_PIXAIRBACKPACK_CTOR_OFFSET UNITYSDK_OFFSET(0xE585C50)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirBackpack_TypeDefinitionIndex = 82098;

	class PixAirBackpack : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBACKPACK_CTOR_OFFSET))(this);
		}

	};
}
