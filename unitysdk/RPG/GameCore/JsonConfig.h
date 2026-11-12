#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_GAMECORE_JSONCONFIG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E9E3170)
#define RPG_GAMECORE_JSONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9E3250)
#define RPG_GAMECORE_JSONCONFIG_RETURNTOPOOL_OFFSET UNITYSDK_OFFSET(0x1E9E3180)
#define RPG_GAMECORE_JSONCONFIG_SHAREBYCOPY_OFFSET UNITYSDK_OFFSET(0x1E9E31C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int JsonConfig_TypeDefinitionIndex = 10884;

	class JsonConfig : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONCONFIG_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONCONFIG_CLEAR_OFFSET))(this);
		}

		::System::Void ReturnToPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONCONFIG_RETURNTOPOOL_OFFSET))(this);
		}

		::System::Object* ShareByCopy()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONCONFIG_SHAREBYCOPY_OFFSET))(this);
		}

	};
}
