#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace Sirenix::OdinInspector { class PropertyGroupAttribute; }
namespace System { class String; }

#define SIRENIX_ODININSPECTOR_PROPERTYGROUPATTRIBUTE_COMBINEVALUESWITH_OFFSET UNITYSDK_OFFSET(0x1EC62490)
#define SIRENIX_ODININSPECTOR_PROPERTYGROUPATTRIBUTE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EC62420)
#define SIRENIX_ODININSPECTOR_PROPERTYGROUPATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC623B0)

namespace Sirenix::OdinInspector
{
	class PropertyGroupAttribute : public ::System::Attribute
	{
	public:
		::System::String* GroupID; // 0x10
		::System::String* GroupName; // 0x18
		::System::Single Order; // 0x20
		::System::Boolean AnimateVisibility; // 0x24
		::System::Boolean HideWhenChildrenAreInvisible; // 0x25
		::System::Void _ctor(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROPERTYGROUPATTRIBUTE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROPERTYGROUPATTRIBUTE_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void CombineValuesWith(::Sirenix::OdinInspector::PropertyGroupAttribute* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::PropertyGroupAttribute*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROPERTYGROUPATTRIBUTE_COMBINEVALUESWITH_OFFSET))(this, a1);
		}

	};
}
