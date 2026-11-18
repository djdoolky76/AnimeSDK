#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define MOLEMOLE_CONFIG_CONFIGSUITEV2RANDOMRESULT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1641DD90)
#define MOLEMOLE_CONFIG_CONFIGSUITEV2RANDOMRESULT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1641D9F0)
#define MOLEMOLE_CONFIG_CONFIGSUITEV2RANDOMRESULT_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1641DDF0)
#define MOLEMOLE_CONFIG_CONFIGSUITEV2RANDOMRESULT_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1641DA70)
#define MOLEMOLE_CONFIG_CONFIGSUITEV2RANDOMRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1641E120)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSuiteV2RandomResult_TypeDefinitionIndex = 68491;

	class ConfigSuiteV2RandomResult : public ::System::Object
	{
	public:
		::System::Int32 Count; // 0x10
		::System::Int32 Weight; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSUITEV2RANDOMRESULT__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSUITEV2RANDOMRESULT_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSUITEV2RANDOMRESULT_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSUITEV2RANDOMRESULT_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSUITEV2RANDOMRESULT_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
