#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimationPreloadConfig.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATIONPRELOADTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x131C9A10)
#define MOLEMOLE_CONFIG_ANIMATIONPRELOADTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x131C9B10)
#define MOLEMOLE_CONFIG_ANIMATIONPRELOADTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x131C99C0)
#define MOLEMOLE_CONFIG_ANIMATIONPRELOADTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x131CA0F0)
#define MOLEMOLE_CONFIG_ANIMATIONPRELOADTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x131C9CB0)
#define MOLEMOLE_CONFIG_ANIMATIONPRELOADTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x131CA4D0)
#define MOLEMOLE_CONFIG_ANIMATIONPRELOADTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x131C9B00)
#define MOLEMOLE_CONFIG_ANIMATIONPRELOADTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x131CA150)
#define MOLEMOLE_CONFIG_ANIMATIONPRELOADTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x131C9D30)
#define MOLEMOLE_CONFIG_ANIMATIONPRELOADTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x131CA340)
#define MOLEMOLE_CONFIG_ANIMATIONPRELOADTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x131C9FB0)
#define MOLEMOLE_CONFIG_ANIMATIONPRELOADTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x131CA6F0)
#define MOLEMOLE_CONFIG_ANIMATIONPRELOADTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x131CA700)
#define MOLEMOLE_CONFIG_ANIMATIONPRELOADTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x131CA710)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimationPreloadTrait_TypeDefinitionIndex = 88727;

	class AnimationPreloadTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::AnimationPreloadConfig>* AnimationClipPaths; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATIONPRELOADTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATIONPRELOADTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATIONPRELOADTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATIONPRELOADTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATIONPRELOADTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATIONPRELOADTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATIONPRELOADTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::AnimationPreloadTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::AnimationPreloadTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATIONPRELOADTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATIONPRELOADTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATIONPRELOADTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::AnimationPreloadTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::AnimationPreloadTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATIONPRELOADTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATIONPRELOADTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATIONPRELOADTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATIONPRELOADTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
