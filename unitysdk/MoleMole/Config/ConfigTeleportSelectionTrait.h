#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/Config/TeleportSelectionType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x190AA0B0)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x190A86A0)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x190A87A0)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x190A8630)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190A9AB0)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x190A8E80)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x190AA2B0)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x190A8790)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x190A9B10)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x190A8F00)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x190A9F20)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x190A9970)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x190AA300)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x190AA310)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x190AA320)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTeleportSelectionTrait_TypeDefinitionIndex = 73690;

	class ConfigTeleportSelectionTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::MoleMole::Config::TeleportSelectionType Type; // 0x18
		::System::Single PreInteractDistanceOffset; // 0x1C
		::System::Single InteractDistanceOffset; // 0x20
		::System::Single InteractAngle; // 0x24
		::System::Boolean NeedShowUI; // 0x28
		::System::Byte _padding0[0x7];
		::System::String* MobileTextKey; // 0x30
		::System::String* PcOrConsoleTextKey; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigTeleportSelectionTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigTeleportSelectionTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigTeleportSelectionTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigTeleportSelectionTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
