#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDAABDONMMD.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace MoleMole::Config { class ConfigPatrolPointSet; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x118E35E0)
#define MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x118E36E0)
#define MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x118E3590)
#define MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x118E42C0)
#define MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x118E3B20)
#define MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x118E4780)
#define MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x118E36D0)
#define MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x118E4320)
#define MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x118E3BA0)
#define MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x118E45F0)
#define MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x118E4180)
#define MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x118E4820)
#define MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x118E4830)
#define MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x118E4840)

namespace MoleMole::Config
{
	inline static constexpr unsigned int StreamingGamePatrolMoveTrait_TypeDefinitionIndex = 78887;

	class StreamingGamePatrolMoveTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::MoleMole::Config::ConfigPatrolPointSet* PointSets; // 0x18
		::System::Single StuckTimeoutSeconds; // 0x20
		::KDAABDONMMD StuckResolution; // 0x24
		::System::Single StuckFadeDuration; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::StreamingGamePatrolMoveTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::StreamingGamePatrolMoveTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::StreamingGamePatrolMoveTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::StreamingGamePatrolMoveTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
