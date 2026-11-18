#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGFLOORMETADATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B18410)
#define MOLEMOLE_CONFIG_CONFIGFLOORMETADATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19B17F20)
#define MOLEMOLE_CONFIG_CONFIGFLOORMETADATA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x19B18470)
#define MOLEMOLE_CONFIG_CONFIGFLOORMETADATA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x19B17FA0)
#define MOLEMOLE_CONFIG_CONFIGFLOORMETADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19B187B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFloorMetaData_TypeDefinitionIndex = 44465;

	class ConfigFloorMetaData : public ::System::Object
	{
	public:
		::System::Int32 MonsterPlayType; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* GlobalAIKey; // 0x18
		::System::Boolean DisableEntityDelayCreation; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORMETADATA__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORMETADATA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORMETADATA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORMETADATA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORMETADATA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
