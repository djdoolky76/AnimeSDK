#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGBLACKCURTAIN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11E88CC0)
#define MOLEMOLE_CONFIG_CONFIGBLACKCURTAIN_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11E87750)
#define MOLEMOLE_CONFIG_CONFIGBLACKCURTAIN_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x11E88D20)
#define MOLEMOLE_CONFIG_CONFIGBLACKCURTAIN_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x11E877D0)
#define MOLEMOLE_CONFIG_CONFIGBLACKCURTAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x11E896A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigBlackCurtain_TypeDefinitionIndex = 56124;

	class ConfigBlackCurtain : public ::System::Object
	{
	public:
		::System::String* ExcludeTargets; // 0x10
		::System::Boolean EnableLocalAvatar; // 0x18
		::System::Boolean DisableReceiveShadows; // 0x19
		::System::Boolean DisableStageCollider; // 0x1A
		::System::Boolean EnableBuddy; // 0x1B
		::System::Boolean EnableStageEffect; // 0x1C
		::System::Boolean DisableShadowColorFadeByZ; // 0x1D
		::System::Boolean DisableQTE; // 0x1E
		::System::Boolean SuspendCurMatPropertyModifiers; // 0x1F
		::System::Boolean DisableStageLight; // 0x20
		::System::Boolean EnableStageMesh; // 0x21
		::System::Boolean EnableAvatar; // 0x22
		::System::Boolean EnableCaster; // 0x23
		::System::Boolean EnableMonster; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLACKCURTAIN__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLACKCURTAIN_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLACKCURTAIN_INTERNALFROMFLX_OFFSET))(this, node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLACKCURTAIN_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLACKCURTAIN_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}
	};
}
