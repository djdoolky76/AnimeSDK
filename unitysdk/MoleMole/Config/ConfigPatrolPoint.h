#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace MoleMole::Config { class ConfigStreamGamePatrolReachedAction; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGPATROLPOINT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x7DD7E0)
#define MOLEMOLE_CONFIG_CONFIGPATROLPOINT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7DD880)
#define MOLEMOLE_CONFIG_CONFIGPATROLPOINT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7DD7F0)
#define MOLEMOLE_CONFIG_CONFIGPATROLPOINT_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x7DD910)
#define MOLEMOLE_CONFIG_CONFIGPATROLPOINT_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x7DD8E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPatrolPoint_TypeDefinitionIndex = 64583;

	struct alignas(8) ConfigPatrolPoint
	{
		::System::String* PointKey; // 0x10
		::MoleMole::Config::ConfigStreamGamePatrolReachedAction* OnReached; // 0x18

		::System::Void ExposeMember(::OHDHAGLCAEB* NLKHAICJJAL, ::System::String* GLBEOLEENIJ)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPATROLPOINT_EXPOSEMEMBER_OFFSET))(this, NLKHAICJJAL, GLBEOLEENIJ);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPATROLPOINT_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPATROLPOINT_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPATROLPOINT_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPATROLPOINT_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
