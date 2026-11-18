#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Design/DrawerAttribute.h"

namespace System { class String; }

#define PARADOXNOTION_DESIGN_CALLBACKATTRIBUTE_GET_ISDECORATOR_OFFSET UNITYSDK_OFFSET(0x1EBB8640)
#define PARADOXNOTION_DESIGN_CALLBACKATTRIBUTE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1EBB8650)
#define PARADOXNOTION_DESIGN_CALLBACKATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB8660)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int CallbackAttribute_TypeDefinitionIndex = 30002;

	class CallbackAttribute : public ::ParadoxNotion::Design::DrawerAttribute
	{
	public:
		::System::String* methodName; // 0x10

		::System::Void _ctor(::System::String* methodName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_CALLBACKATTRIBUTE__CTOR_OFFSET))(this, methodName);
		}

		::System::Boolean get_isDecorator()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_CALLBACKATTRIBUTE_GET_ISDECORATOR_OFFSET))(this);
		}

		::System::Int32 get_priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_CALLBACKATTRIBUTE_GET_PRIORITY_OFFSET))(this);
		}
	};
}
