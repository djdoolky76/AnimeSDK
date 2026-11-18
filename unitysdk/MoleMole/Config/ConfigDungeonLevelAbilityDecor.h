#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObject; }
namespace Foundation::ViewObject::Donjon { class DonjonFloorObjectBuildContext; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_APMCKICIGDA_OFFSET UNITYSDK_OFFSET(0x19233570)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x19232EF0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19233270)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19233000)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x19233A10)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x19232FF0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x192338B0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_HIPFCJHIIBO_OFFSET UNITYSDK_OFFSET(0x19233BC0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x192332D0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x19232EA0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_MOFAEMLBGGH_OFFSET UNITYSDK_OFFSET(0x19233610)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x19233080)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x192338A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDungeonLevelAbilityDecor_TypeDefinitionIndex = 87305;

	class ConfigDungeonLevelAbilityDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* LevelAbilityIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR__CTOR_OFFSET))(this);
		}

		::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
		}

		::MoleMole::Config::ConfigDecorBase* DGNAAPGKIPL()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_DGNAAPGKIPL_OFFSET))(this);
		}

		::System::Int32 GIJLLGEPMIA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_GIJLLGEPMIA_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean APMCKICIGDA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* HGDMBHDKFPK)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_APMCKICIGDA_OFFSET))(this, HGDMBHDKFPK);
		}

		::System::Void MOFAEMLBGGH(::Foundation::ViewObject::Donjon::DonjonFloorObject* PGAGGIOEFOG)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_MOFAEMLBGGH_OFFSET))(this, PGAGGIOEFOG);
		}

		static ::MoleMole::Config::ConfigDungeonLevelAbilityDecor* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::MoleMole::Config::ConfigDungeonLevelAbilityDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		static ::MoleMole::Config::ConfigDungeonLevelAbilityDecor* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::MoleMole::Config::ConfigDungeonLevelAbilityDecor*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean HIPFCJHIIBO(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* MIALFKCCCPI)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_HIPFCJHIIBO_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
