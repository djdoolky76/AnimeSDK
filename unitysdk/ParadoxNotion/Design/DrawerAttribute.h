#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define PARADOXNOTION_DESIGN_DRAWERATTRIBUTE_GET_ISDECORATOR_OFFSET UNITYSDK_OFFSET(0x1E40BF40)
#define PARADOXNOTION_DESIGN_DRAWERATTRIBUTE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1E40BF30)
#define PARADOXNOTION_DESIGN_DRAWERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E40BF20)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int DrawerAttribute_TypeDefinitionIndex = 29948;

	class DrawerAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_DRAWERATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_DRAWERATTRIBUTE_GET_PRIORITY_OFFSET))(this);
		}

		::System::Boolean get_isDecorator()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_DRAWERATTRIBUTE_GET_ISDECORATOR_OFFSET))(this);
		}
	};
}
