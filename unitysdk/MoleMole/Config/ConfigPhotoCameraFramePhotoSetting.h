#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAIMBOBMNGA.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGPHOTOCAMERAFRAMEPHOTOSETTING__CCTOR_OFFSET UNITYSDK_OFFSET(0x16418D40)
#define MOLEMOLE_CONFIG_CONFIGPHOTOCAMERAFRAMEPHOTOSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x16418D20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPhotoCameraFramePhotoSetting_TypeDefinitionIndex = 68351;

	class ConfigPhotoCameraFramePhotoSetting : public ::System::Object
	{
	public:
		static ::MoleMole::Config::ConfigPhotoCameraFramePhotoSetting** StaticGet_Default()
		{
			return (::MoleMole::Config::ConfigPhotoCameraFramePhotoSetting**)Il2CppClass::FromTypeDefinitionIndex(ConfigPhotoCameraFramePhotoSetting_TypeDefinitionIndex)->GetStaticField(0x39010);
		}
		::CAIMBOBMNGA SaveMode; // 0x10
		::System::Single PhotoShowScale; // 0x14
		::System::String* InnerEdgeName; // 0x18
		::System::String* OuterEdgeName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPHOTOCAMERAFRAMEPHOTOSETTING__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPHOTOCAMERAFRAMEPHOTOSETTING__CCTOR_OFFSET))();
		}
	};
}
