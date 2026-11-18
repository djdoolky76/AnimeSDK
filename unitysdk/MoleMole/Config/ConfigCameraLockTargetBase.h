#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETBASE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x174F4E90)
#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETBASE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x174F4C70)
#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETBASE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x174F4EF0)
#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETBASE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x174F4CF0)
#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x174F50E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraLockTargetBase_TypeDefinitionIndex = 48098;

	class ConfigCameraLockTargetBase : public ::System::Object
	{
	public:
		::System::Boolean MuteLock; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETBASE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETBASE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETBASE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETBASE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}
	};
}
