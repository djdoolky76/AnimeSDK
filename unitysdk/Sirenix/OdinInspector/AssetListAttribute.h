#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_ASSETLISTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB7F750)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int AssetListAttribute_TypeDefinitionIndex = 7269;

	class AssetListAttribute : public ::System::Attribute
	{
	public:
		::System::String* LayerNames; // 0x10
		::System::String* AssetNamePrefix; // 0x18
		::System::String* Path; // 0x20
		::System::String* CustomFilterMethod; // 0x28
		::System::String* Tags; // 0x30
		::System::Boolean AutoPopulate; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ASSETLISTATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
