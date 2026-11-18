#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x192B1620)
#define MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x192B1850)
#define MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x192B1680)
#define MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x192B18D0)
#define MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x192B1C00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitWallCameraShakeConfig_TypeDefinitionIndex = 69070;

	class HitWallCameraShakeConfig : public ::System::Object
	{
	public:
		::System::String* CameraShakeKey; // 0x10
		::System::Single CameraShakeProtectCD; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_INTERNALFROMFLX_OFFSET))(this, node);
		}
	};
}
