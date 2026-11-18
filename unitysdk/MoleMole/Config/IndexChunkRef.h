#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define MOLEMOLE_CONFIG_INDEXCHUNKREF_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x16428D70)
#define MOLEMOLE_CONFIG_INDEXCHUNKREF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16428B60)
#define MOLEMOLE_CONFIG_INDEXCHUNKREF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x164287C0)
#define MOLEMOLE_CONFIG_INDEXCHUNKREF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16428BC0)
#define MOLEMOLE_CONFIG_INDEXCHUNKREF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16428840)
#define MOLEMOLE_CONFIG_INDEXCHUNKREF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16428480)
#define MOLEMOLE_CONFIG_INDEXCHUNKREF__CTOR_OFFSET UNITYSDK_OFFSET(0x16428D60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int IndexChunkRef_TypeDefinitionIndex = 54111;

	class IndexChunkRef : public ::System::Object
	{
	public:
		::System::UInt64 chunkHash; // 0x10
		::System::UInt32 fileSize; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXCHUNKREF__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXCHUNKREF_TOSTRING_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXCHUNKREF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXCHUNKREF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::String* DPIHOJBBGLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXCHUNKREF_DPIHOJBBGLA_OFFSET))(this);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXCHUNKREF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXCHUNKREF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
