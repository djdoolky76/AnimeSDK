#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/ConfigRichtapResource_RichTapResourceType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIGRICHTAPRESOURCE_RESOURCE_GETAMPLITUDE_OFFSET UNITYSDK_OFFSET(0x1A7771D0)
#define MOLEMOLE_CONFIGRICHTAPRESOURCE_RESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A777290)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigRichtapResource_Resource_TypeDefinitionIndex = 91333;

	class ConfigRichtapResource_Resource : public ::System::Object
	{
	public:
		::Foundation::AssetPath assetPath; // 0x10
		::System::String* relativePath; // 0x20
		::System::Boolean autoStop; // 0x28
		::System::Byte _padding0[0x3];
		::MoleMole::ConfigRichtapResource_RichTapResourceType resourceType; // 0x2C
		::System::UInt32 hashId; // 0x30
		::System::Int32 priority; // 0x34
		::System::Int32 durationMs; // 0x38
		::System::Single amplitude; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGRICHTAPRESOURCE_RESOURCE__CTOR_OFFSET))(this);
		}

		::System::Single GetAmplitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGRICHTAPRESOURCE_RESOURCE_GETAMPLITUDE_OFFSET))(this);
		}
	};
}
