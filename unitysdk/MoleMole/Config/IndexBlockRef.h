#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define MOLEMOLE_CONFIG_INDEXBLOCKREF_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1BA48260)
#define MOLEMOLE_CONFIG_INDEXBLOCKREF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA47FA0)
#define MOLEMOLE_CONFIG_INDEXBLOCKREF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1BA47C00)
#define MOLEMOLE_CONFIG_INDEXBLOCKREF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1BA48000)
#define MOLEMOLE_CONFIG_INDEXBLOCKREF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1BA47C80)
#define MOLEMOLE_CONFIG_INDEXBLOCKREF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BA478C0)
#define MOLEMOLE_CONFIG_INDEXBLOCKREF__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA48250)

namespace MoleMole::Config
{
	inline static constexpr unsigned int IndexBlockRef_TypeDefinitionIndex = 79114;

	class IndexBlockRef : public ::System::Object
	{
	public:
		::System::UInt64 blockHashName; // 0x10
		::System::Byte location; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBLOCKREF__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBLOCKREF_TOSTRING_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBLOCKREF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBLOCKREF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBLOCKREF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::String* DPIHOJBBGLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBLOCKREF_DPIHOJBBGLA_OFFSET))(this);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBLOCKREF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}
	};
}
