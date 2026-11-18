#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define MOLEMOLE_CONFIG_TRIGGERCREATIONDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x118E6300)
#define MOLEMOLE_CONFIG_TRIGGERCREATIONDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x118E59F0)
#define MOLEMOLE_CONFIG_TRIGGERCREATIONDATA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x118E6360)
#define MOLEMOLE_CONFIG_TRIGGERCREATIONDATA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x118E5A70)
#define MOLEMOLE_CONFIG_TRIGGERCREATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x118E6790)

namespace MoleMole::Config
{
	inline static constexpr unsigned int TriggerCreationData_TypeDefinitionIndex = 70220;

	class TriggerCreationData : public ::System::Object
	{
	public:
		::System::Int32 Type; // 0x10
		::UnityEngine::Vector3 Center; // 0x14
		::UnityEngine::Vector3 Size; // 0x20
		::System::Single Radius; // 0x2C
		::System::Single Height; // 0x30
		::System::Int32 Direction; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERCREATIONDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERCREATIONDATA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERCREATIONDATA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERCREATIONDATA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERCREATIONDATA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
