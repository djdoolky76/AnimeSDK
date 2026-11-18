#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTPIPETRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0xFACEF60)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTPIPETRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0xFACF060)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTPIPETRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0xFACEF10)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTPIPETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFACF5B0)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTPIPETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFACF200)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTPIPETRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0xFACF980)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTPIPETRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0xFACF050)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTPIPETRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFACF610)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTPIPETRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xFACF280)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTPIPETRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFACF7F0)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTPIPETRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0xFACF470)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTPIPETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xFACFA20)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTPIPETRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0xFACFA30)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTPIPETRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0xFACFA40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HackerLittleRobotPipeTrait_TypeDefinitionIndex = 46223;

	class HackerLittleRobotPipeTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* SplineName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTPIPETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTPIPETRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTPIPETRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTPIPETRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTPIPETRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTPIPETRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTPIPETRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::HackerLittleRobotPipeTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::HackerLittleRobotPipeTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTPIPETRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTPIPETRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTPIPETRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::HackerLittleRobotPipeTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::HackerLittleRobotPipeTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTPIPETRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTPIPETRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTPIPETRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTPIPETRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
