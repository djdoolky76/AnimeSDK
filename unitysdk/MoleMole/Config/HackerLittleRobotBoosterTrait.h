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

#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x16543340)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x16543440)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x16543330)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x165436D0)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x165434E0)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x16543980)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x16543430)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16543760)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x16543560)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x165437C0)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x16543590)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x16543A10)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x16543A20)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x16543A30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HackerLittleRobotBoosterTrait_TypeDefinitionIndex = 90895;

	class HackerLittleRobotBoosterTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::HackerLittleRobotBoosterTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::HackerLittleRobotBoosterTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::HackerLittleRobotBoosterTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::HackerLittleRobotBoosterTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
