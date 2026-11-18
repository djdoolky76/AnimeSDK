#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class GroupMemberStateValue; }
namespace MoleMole::Config { class NumIntervalByDifficulty; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERSET_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1278BC70)
#define MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERSET_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1278B730)
#define MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERSET_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1278BCD0)
#define MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERSET_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1278B7B0)
#define MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1278C040)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DungeonRandomMemberSet_TypeDefinitionIndex = 82051;

	class DungeonRandomMemberSet : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* GamePlayTagList; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::GroupMemberStateValue*>* StateValueList; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Config::NumIntervalByDifficulty*>* NumIntervalByDifficultyList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERSET__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERSET_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERSET_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERSET_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERSET_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}
	};
}
