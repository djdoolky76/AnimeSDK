#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define MOLEMOLE_CONFIG_CONFIGGROUPMETADATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190A1D00)
#define MOLEMOLE_CONFIG_CONFIGGROUPMETADATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x190A1AE0)
#define MOLEMOLE_CONFIG_CONFIGGROUPMETADATA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x190A1D60)
#define MOLEMOLE_CONFIG_CONFIGGROUPMETADATA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x190A1B60)
#define MOLEMOLE_CONFIG_CONFIGGROUPMETADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x190A1F90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGroupMetaData_TypeDefinitionIndex = 72717;

	class ConfigGroupMetaData : public ::System::Object
	{
	public:
		::System::Int32 DifficultyTagID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGROUPMETADATA__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGROUPMETADATA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGROUPMETADATA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGROUPMETADATA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGROUPMETADATA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
