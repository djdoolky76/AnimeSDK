#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class String; }

#define MOLEMOLE_CONFIG_REACHIKCONFIG_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x6E9390)
#define MOLEMOLE_CONFIG_REACHIKCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x6E9430)
#define MOLEMOLE_CONFIG_REACHIKCONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x6E93A0)
#define MOLEMOLE_CONFIG_REACHIKCONFIG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x6E9490)
#define MOLEMOLE_CONFIG_REACHIKCONFIG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x6E94A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ReachIKConfig_TypeDefinitionIndex = 82379;

	struct alignas(8) ReachIKConfig
	{
		::System::String* Name; // 0x10
		::System::UInt32 MemberID; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* AttachPoint; // 0x20

		::System::Void ExposeMember(::OHDHAGLCAEB* NLKHAICJJAL, ::System::String* GLBEOLEENIJ)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKCONFIG_EXPOSEMEMBER_OFFSET))(this, NLKHAICJJAL, GLBEOLEENIJ);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKCONFIG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKCONFIG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKCONFIG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKCONFIG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}
	};
}
