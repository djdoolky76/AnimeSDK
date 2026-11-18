#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APAEIGKBNHL.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class MCILJDNCFHA;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1278B5D0)
#define MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x127883C0)
#define MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x127884C0)
#define MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x12788330)
#define MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1278AB30)
#define MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12789280)
#define MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1278B460)
#define MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x127884B0)
#define MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1278AB90)
#define MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x12789300)
#define MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1278B2D0)
#define MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1278A9F0)
#define MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1278B680)
#define MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1278B690)
#define MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1278B6A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ControllableObjectTrait_TypeDefinitionIndex = 73517;

	class ControllableObjectTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::APAEIGKBNHL ControllableObjectType; // 0x18
		::System::Boolean UseBlackFadeBackToAvatar; // 0x1C
		::System::Boolean DisableActiveExit; // 0x1D
		::System::Byte _padding0[0x2];
		::System::String* ConfigKey; // 0x20
		::System::String* SubConfigKey; // 0x28
		::System::Boolean UseOverrideCameraData; // 0x30
		::System::Byte _padding1[0x7];
		::System::String* OverridePointKey; // 0x38
		::System::Single OverrideMinPitch; // 0x40
		::System::Single OverrideMaxPitch; // 0x44
		::System::Single OverrideMinYaw; // 0x48
		::System::Single OverrideMaxYaw; // 0x4C
		::System::Single OverrideFOV; // 0x50
		::System::Boolean ExitSecoindSure; // 0x54
		::System::Byte _padding2[0x3];
		::System::String* ExitSecoindSureText; // 0x58
		::System::Boolean EnableExitDistanceStreamingCheck; // 0x60
		::System::Byte _padding3[0x3];
		::System::Single ExitBlackFadeDistance; // 0x64
		::MCILJDNCFHA* voCameraHackObjectComponent; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ControllableObjectTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ControllableObjectTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ControllableObjectTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ControllableObjectTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTROLLABLEOBJECTTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
