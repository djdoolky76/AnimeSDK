#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class ConfigCameraComposer; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCAMERASCREENOFFSET_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFABC2B0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASCREENOFFSET_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFABB200)
#define MOLEMOLE_CONFIG_CONFIGCAMERASCREENOFFSET_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFABC310)
#define MOLEMOLE_CONFIG_CONFIGCAMERASCREENOFFSET_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xFABB280)
#define MOLEMOLE_CONFIG_CONFIGCAMERASCREENOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0xFABC800)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraScreenOffset_TypeDefinitionIndex = 62605;

	class ConfigCameraScreenOffset : public ::System::Object
	{
	public:
		::System::String* EndCurveKey; // 0x10
		::System::String* StartCurveKey; // 0x18
		::MoleMole::Config::ConfigCameraComposer* CameraComposerParam; // 0x20
		::System::Single StretchTime; // 0x28
		::System::Single HoldTime; // 0x2C
		::System::Single RecoilTime; // 0x30
		::System::Single DelayTime; // 0x34
		::System::Boolean KeepCameraDirection; // 0x38
		::System::Boolean MuteDelay; // 0x39
		::System::Boolean IngoreTimeScale; // 0x3A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCREENOFFSET__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCREENOFFSET_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCREENOFFSET_INTERNALFROMFLX_OFFSET))(this, node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCREENOFFSET_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCREENOFFSET_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}
	};
}
