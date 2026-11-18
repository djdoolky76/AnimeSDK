#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSTREAMGAMEPATROLREACHEDACTION_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C6D9DF0)
#define MOLEMOLE_CONFIG_CONFIGSTREAMGAMEPATROLREACHEDACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C6DA8B0)
#define MOLEMOLE_CONFIG_CONFIGSTREAMGAMEPATROLREACHEDACTION_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1C6DA250)
#define MOLEMOLE_CONFIG_CONFIGSTREAMGAMEPATROLREACHEDACTION_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1C6DA910)
#define MOLEMOLE_CONFIG_CONFIGSTREAMGAMEPATROLREACHEDACTION_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1C6DA2D0)
#define MOLEMOLE_CONFIG_CONFIGSTREAMGAMEPATROLREACHEDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6DACE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigStreamGamePatrolReachedAction_TypeDefinitionIndex = 90378;

	class ConfigStreamGamePatrolReachedAction : public ::System::Object
	{
	public:
		::System::Boolean Wait; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single WaitDurationSeconds; // 0x14
		::System::Boolean FireEvent; // 0x18
		::System::Boolean PausePatrol; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSTREAMGAMEPATROLREACHEDACTION__CTOR_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* NLKHAICJJAL, ::System::String* GLBEOLEENIJ)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSTREAMGAMEPATROLREACHEDACTION_EXPOSEMEMBER_OFFSET))(this, NLKHAICJJAL, GLBEOLEENIJ);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSTREAMGAMEPATROLREACHEDACTION_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSTREAMGAMEPATROLREACHEDACTION_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSTREAMGAMEPATROLREACHEDACTION_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSTREAMGAMEPATROLREACHEDACTION_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}
	};
}
