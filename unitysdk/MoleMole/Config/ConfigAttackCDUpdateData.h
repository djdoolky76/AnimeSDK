#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define MOLEMOLE_CONFIG_CONFIGATTACKCDUPDATEDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x192967E0)
#define MOLEMOLE_CONFIG_CONFIGATTACKCDUPDATEDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19296440)
#define MOLEMOLE_CONFIG_CONFIGATTACKCDUPDATEDATA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x19296840)
#define MOLEMOLE_CONFIG_CONFIGATTACKCDUPDATEDATA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x192964C0)
#define MOLEMOLE_CONFIG_CONFIGATTACKCDUPDATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x192969E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAttackCDUpdateData_TypeDefinitionIndex = 74356;

	class ConfigAttackCDUpdateData : public ::System::Object
	{
	public:
		::System::Single AliveMonsterThreshold; // 0x10
		::System::Single UpdateSpeedMulti; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGATTACKCDUPDATEDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGATTACKCDUPDATEDATA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGATTACKCDUPDATEDATA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGATTACKCDUPDATEDATA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGATTACKCDUPDATEDATA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
