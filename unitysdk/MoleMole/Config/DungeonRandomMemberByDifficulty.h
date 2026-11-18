#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class DungeonRandomMemberSet; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1B92F010)
#define MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B92F390)
#define MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B92F120)
#define MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1B92F5F0)
#define MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1B92F110)
#define MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1B92F7A0)
#define MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1B92F3F0)
#define MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1B92EFC0)
#define MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1B92F1A0)
#define MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B92F5E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DungeonRandomMemberByDifficulty_TypeDefinitionIndex = 55003;

	class DungeonRandomMemberByDifficulty : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::DungeonRandomMemberSet*>* RandomSet; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY__CTOR_OFFSET))(this);
		}

		::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
		}

		::MoleMole::Config::ConfigDecorBase* DGNAAPGKIPL()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_DGNAAPGKIPL_OFFSET))(this);
		}

		::System::Int32 GIJLLGEPMIA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_GIJLLGEPMIA_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		static ::MoleMole::Config::DungeonRandomMemberByDifficulty* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::MoleMole::Config::DungeonRandomMemberByDifficulty*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
		}

		static ::MoleMole::Config::DungeonRandomMemberByDifficulty* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::MoleMole::Config::DungeonRandomMemberByDifficulty*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONRANDOMMEMBERBYDIFFICULTY_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
