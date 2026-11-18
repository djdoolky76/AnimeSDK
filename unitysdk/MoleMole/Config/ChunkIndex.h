#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class IndexChunkRef; }
namespace MoleMole::Config { class IndexFileRef; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CHUNKINDEX_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x19295760)
#define MOLEMOLE_CONFIG_CHUNKINDEX_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x192954C0)
#define MOLEMOLE_CONFIG_CHUNKINDEX_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19295110)
#define MOLEMOLE_CONFIG_CHUNKINDEX_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x19295520)
#define MOLEMOLE_CONFIG_CHUNKINDEX_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x19295190)
#define MOLEMOLE_CONFIG_CHUNKINDEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19294D30)
#define MOLEMOLE_CONFIG_CHUNKINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x19295750)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChunkIndex_TypeDefinitionIndex = 81309;

	class ChunkIndex : public ::System::Object
	{
	public:
		::Il2CppArray<::MoleMole::Config::IndexFileRef*>* files; // 0x10
		::Il2CppArray<::MoleMole::Config::IndexChunkRef*>* chunks; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHUNKINDEX__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHUNKINDEX_TOSTRING_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHUNKINDEX_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHUNKINDEX_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::String* DPIHOJBBGLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHUNKINDEX_DPIHOJBBGLA_OFFSET))(this);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHUNKINDEX_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHUNKINDEX_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
