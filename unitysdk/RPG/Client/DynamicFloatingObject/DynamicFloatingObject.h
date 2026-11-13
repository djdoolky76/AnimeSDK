#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define RPG_CLIENT_DYNAMICFLOATINGOBJECT_DYNAMICFLOATINGOBJECT_CTOR_OFFSET UNITYSDK_OFFSET(0x17BAEF40)
#define RPG_CLIENT_DYNAMICFLOATINGOBJECT_DYNAMICFLOATINGOBJECT_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x17BAEEF0)

namespace RPG::Client::DynamicFloatingObject
{
	inline static constexpr unsigned int DynamicFloatingObject_TypeDefinitionIndex = 75695;

	class DynamicFloatingObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICFLOATINGOBJECT_DYNAMICFLOATINGOBJECT_CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICFLOATINGOBJECT_DYNAMICFLOATINGOBJECT_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}
