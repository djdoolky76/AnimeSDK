#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class ConfigAttackCDUpdateData; }
namespace MoleMole::Config { class ConfigLevelGlobalAIBTreeData; }
namespace MoleMole::Config { class ConfigLevelGlobalAICounterstrokeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_GROUPAICONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFACE4F0)
#define MOLEMOLE_CONFIG_GROUPAICONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFACDF10)
#define MOLEMOLE_CONFIG_GROUPAICONFIG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xFACE550)
#define MOLEMOLE_CONFIG_GROUPAICONFIG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xFACDF90)
#define MOLEMOLE_CONFIG_GROUPAICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xFACE850)

namespace MoleMole::Config
{
	inline static constexpr unsigned int GroupAIConfig_TypeDefinitionIndex = 39239;

	class GroupAIConfig : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigLevelGlobalAIBTreeData* AiBTreeData; // 0x10
		::MoleMole::Config::ConfigLevelGlobalAICounterstrokeData* CounterstrokeData; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAttackCDUpdateData*>* AttackCdUpdateData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPAICONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPAICONFIG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPAICONFIG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPAICONFIG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPAICONFIG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
