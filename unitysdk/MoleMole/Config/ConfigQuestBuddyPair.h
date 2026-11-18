#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define MOLEMOLE_CONFIG_CONFIGQUESTBUDDYPAIR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C6D4AC0)
#define MOLEMOLE_CONFIG_CONFIGQUESTBUDDYPAIR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1C6D4720)
#define MOLEMOLE_CONFIG_CONFIGQUESTBUDDYPAIR_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1C6D4B20)
#define MOLEMOLE_CONFIG_CONFIGQUESTBUDDYPAIR_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1C6D47A0)
#define MOLEMOLE_CONFIG_CONFIGQUESTBUDDYPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D4CC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigQuestBuddyPair_TypeDefinitionIndex = 85600;

	class ConfigQuestBuddyPair : public ::System::Object
	{
	public:
		::System::UInt32 QuestID; // 0x10
		::System::UInt32 RobotBuddyID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGQUESTBUDDYPAIR__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGQUESTBUDDYPAIR_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGQUESTBUDDYPAIR_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGQUESTBUDDYPAIR_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGQUESTBUDDYPAIR_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
