#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class ChunkIndex; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x16405A30)
#define MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16405710)
#define MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16405450)
#define MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16405770)
#define MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x16405A70)
#define MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x164054D0)
#define MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER_PKKJDGBKKAI_OFFSET UNITYSDK_OFFSET(0x16405950)
#define MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16405300)
#define MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x16405940)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChunkIndexContainer_TypeDefinitionIndex = 41281;

	class ChunkIndexContainer : public ::System::Object
	{
	public:
		::MoleMole::Config::ChunkIndex* chunkIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER_TOSTRING_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		static ::System::String* PKKJDGBKKAI(::Foundation::ResourceFileType FMCHIMDIKBB)
		{
			return ((::System::String*(*)(::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER_PKKJDGBKKAI_OFFSET))(FMCHIMDIKBB);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::String* DPIHOJBBGLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER_DPIHOJBBGLA_OFFSET))(this);
		}

		static ::MoleMole::Config::ChunkIndexContainer* LNFENFDLMIG(::System::String* CEKNHIDPNNA)
		{
			return ((::MoleMole::Config::ChunkIndexContainer*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER_LNFENFDLMIG_OFFSET))(CEKNHIDPNNA);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHUNKINDEXCONTAINER_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}
	};
}
