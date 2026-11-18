#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define MOLEMOLE_CONFIG_CONFIGGADGETMETADATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19240D70)
#define MOLEMOLE_CONFIG_CONFIGGADGETMETADATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19240D00)
#define MOLEMOLE_CONFIG_CONFIGGADGETMETADATA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x19240D80)
#define MOLEMOLE_CONFIG_CONFIGGADGETMETADATA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x19240D60)
#define MOLEMOLE_CONFIG_CONFIGGADGETMETADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19240D90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGadgetMetaData_TypeDefinitionIndex = 87236;

	class ConfigGadgetMetaData : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGADGETMETADATA__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGADGETMETADATA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGADGETMETADATA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGADGETMETADATA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGADGETMETADATA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
