#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client::DynamicFloatingObject { class WaterSimOverrideParam_WaterSimParam; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DYNAMICFLOATINGOBJECT_WATERSIMOVERRIDEPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xCCFC2F0)

namespace RPG::Client::DynamicFloatingObject
{
	class WaterSimOverrideParam
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* overrideParams; // 0x30
		::RPG::Client::DynamicFloatingObject::WaterSimOverrideParam_WaterSimParam* defaultParam; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICFLOATINGOBJECT_WATERSIMOVERRIDEPARAM_CTOR_OFFSET))(this);
		}

	};
}
