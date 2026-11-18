#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/Config/EtherEyesFixConfig.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectConfig.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectOverrideConfig.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectSize.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x190B14F0)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x190AEFB0)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x190AF0B0)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x190AEF60)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190B0D10)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x190AFA20)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x190B1450)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x190AF0A0)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x190B0D70)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x190AFAA0)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x190B12C0)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x190B0BD0)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x190B1580)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x190B15A0)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x190B15B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EtherEyesObjectTrait_TypeDefinitionIndex = 87148;

	class EtherEyesObjectTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::MoleMole::Config::EtherEyesObjectConfig EtherEyesObjectConfig; // 0x18
		::System::Single HoldSuccessTime; // 0x30
		::System::Boolean UseInteractEffect; // 0x34
		::System::Byte _padding0[0x3];
		::System::Single InteractDistanceOffset; // 0x38
		::System::Boolean UseFocusOutLine; // 0x3C
		::System::Byte _padding1[0x3];
		::MoleMole::Config::EtherEyesObjectSize ObjectSize; // 0x40
		::System::Byte _padding2[0x4];
		::System::String* OverrideHintKey; // 0x48
		::System::Boolean NeedOverride; // 0x50
		::System::Boolean ShowLockPointUI; // 0x51
		::MoleMole::Config::EtherEyesObjectOverrideConfig EtherEyesObjectOverrideConfig; // 0x52
		::System::Byte _padding3[0x3];
		::MoleMole::Config::EtherEyesFixConfig EtherEyesFixConfig; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::EtherEyesObjectTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::EtherEyesObjectTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::EtherEyesObjectTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::EtherEyesObjectTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
