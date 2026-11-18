#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigAnimatorBoolParam.h"
#include "unitysdk/MoleMole/Config/ConfigAnimatorFloatParam.h"
#include "unitysdk/MoleMole/Config/ConfigAnimatorIntParam.h"
#include "unitysdk/MoleMole/Config/ConfigAnimatorTriggerParam.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xFAA4830)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0xFAA3340)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0xFAA3440)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0xFAA32B0)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFAA42E0)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFAA3880)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0xFAA3430)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFAA4340)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xFAA3900)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0xFAA48B0)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFAA46A0)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0xFAA41A0)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xFAA4E00)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0xFAA4E10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorParamTrait_TypeDefinitionIndex = 53552;

	class AnimatorParamTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAnimatorTriggerParam>* AnimatorTriggerParams; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAnimatorBoolParam>* AnimatorBoolParams; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAnimatorIntParam>* AnimatorIntParams; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAnimatorFloatParam>* AnimatorFloatParams; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::AnimatorParamTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::AnimatorParamTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::AnimatorParamTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::AnimatorParamTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
