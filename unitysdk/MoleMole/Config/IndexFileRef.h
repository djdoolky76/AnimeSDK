#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class KEHFHMFPCFG;
namespace System { class String; }

#define MOLEMOLE_CONFIG_INDEXFILEREF_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x12792AF0)
#define MOLEMOLE_CONFIG_INDEXFILEREF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12792890)
#define MOLEMOLE_CONFIG_INDEXFILEREF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12792500)
#define MOLEMOLE_CONFIG_INDEXFILEREF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x127928F0)
#define MOLEMOLE_CONFIG_INDEXFILEREF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x12792580)
#define MOLEMOLE_CONFIG_INDEXFILEREF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x127920B0)
#define MOLEMOLE_CONFIG_INDEXFILEREF__CTOR_OFFSET UNITYSDK_OFFSET(0x12792AE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int IndexFileRef_TypeDefinitionIndex = 49350;

	class IndexFileRef : public ::System::Object
	{
	public:
		::System::UInt64 fileHash; // 0x10
		::Il2CppArray<::KEHFHMFPCFG*>* chunks; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXFILEREF__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXFILEREF_TOSTRING_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXFILEREF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXFILEREF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::String* DPIHOJBBGLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXFILEREF_DPIHOJBBGLA_OFFSET))(this);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXFILEREF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXFILEREF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
