#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ELFRESTAURANTMODULE_TAKEOUTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD79A300)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantModule_TakeOutInfo_TypeDefinitionIndex = 65101;

	class ElfRestaurantModule_TakeOutInfo : public ::System::Object
	{
	public:
		::System::Int32 Level; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE_TAKEOUTINFO_CTOR_OFFSET))(this, a1);
		}

	};
}
