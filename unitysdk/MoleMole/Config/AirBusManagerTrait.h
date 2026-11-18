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

#define MOLEMOLE_CONFIG_AIRBUSMANAGERTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x19287020)
#define MOLEMOLE_CONFIG_AIRBUSMANAGERTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19287120)
#define MOLEMOLE_CONFIG_AIRBUSMANAGERTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x19286FD0)
#define MOLEMOLE_CONFIG_AIRBUSMANAGERTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19287D30)
#define MOLEMOLE_CONFIG_AIRBUSMANAGERTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19287560)
#define MOLEMOLE_CONFIG_AIRBUSMANAGERTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19288240)
#define MOLEMOLE_CONFIG_AIRBUSMANAGERTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x19287110)
#define MOLEMOLE_CONFIG_AIRBUSMANAGERTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19287D90)
#define MOLEMOLE_CONFIG_AIRBUSMANAGERTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x192875E0)
#define MOLEMOLE_CONFIG_AIRBUSMANAGERTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x192880B0)
#define MOLEMOLE_CONFIG_AIRBUSMANAGERTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x19287BF0)
#define MOLEMOLE_CONFIG_AIRBUSMANAGERTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19288310)
#define MOLEMOLE_CONFIG_AIRBUSMANAGERTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19288320)
#define MOLEMOLE_CONFIG_AIRBUSMANAGERTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19288330)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AirBusManagerTrait_TypeDefinitionIndex = 41505;

	class AirBusManagerTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* CurveName; // 0x18
		::System::Single StationWaitTime; // 0x20
		::System::Single StationExitWaitTime; // 0x24
		::System::Boolean ManualControl; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSMANAGERTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSMANAGERTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSMANAGERTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSMANAGERTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSMANAGERTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSMANAGERTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSMANAGERTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::AirBusManagerTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::AirBusManagerTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSMANAGERTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSMANAGERTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSMANAGERTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::AirBusManagerTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::AirBusManagerTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSMANAGERTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSMANAGERTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSMANAGERTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSMANAGERTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
