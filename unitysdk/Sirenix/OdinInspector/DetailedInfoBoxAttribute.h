#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/InfoMessageType.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_DETAILEDINFOBOXATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB7FFB0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int DetailedInfoBoxAttribute_TypeDefinitionIndex = 7284;

	class DetailedInfoBoxAttribute : public ::System::Attribute
	{
	public:
		::System::String* VisibleIf; // 0x10
		::System::String* Message; // 0x18
		::System::String* Details; // 0x20
		::System::Boolean ReplaceNoWrapSpaces; // 0x28
		::System::Byte _padding0[0x3];
		::Sirenix::OdinInspector::InfoMessageType InfoMessageType; // 0x2C

		::System::Void _ctor(::System::String* message, ::System::String* details, ::Sirenix::OdinInspector::InfoMessageType infoMessageType, ::System::String* visibleIf)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Sirenix::OdinInspector::InfoMessageType, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_DETAILEDINFOBOXATTRIBUTE__CTOR_OFFSET))(this, message, details, infoMessageType, visibleIf);
		}
	};
}
