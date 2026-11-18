#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERENTRY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B93D040)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERENTRY_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B93C640)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERENTRY_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1B93D0A0)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERENTRY_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1B93C6C0)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B93D480)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SphereAreaTriggerEntry_TypeDefinitionIndex = 46183;

	class SphereAreaTriggerEntry : public ::System::Object
	{
	public:
		::System::Single Radius; // 0x10
		::System::Single Hight; // 0x14
		::System::Int32 Priority; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* SoundActionKey; // 0x20
		::System::String* UIKey; // 0x28
		::System::String* Flag; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERENTRY_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERENTRY_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERENTRY_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERENTRY_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}
	};
}
