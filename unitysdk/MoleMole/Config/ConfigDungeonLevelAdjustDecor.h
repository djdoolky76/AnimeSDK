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

#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_APMCKICIGDA_OFFSET UNITYSDK_OFFSET(0x16532070)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x165319F0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16531D70)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16531B00)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16532420)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16531AF0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x165325D0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_HIPFCJHIIBO_OFFSET UNITYSDK_OFFSET(0x16532390)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16531DD0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x165319A0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_MOFAEMLBGGH_OFFSET UNITYSDK_OFFSET(0x16532110)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16531B80)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x16532380)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDungeonLevelAdjustDecor_TypeDefinitionIndex = 84138;

	class ConfigDungeonLevelAdjustDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* LevelAdjustIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR__CTOR_OFFSET))(this);
		}

		::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
		}

		::MoleMole::Config::ConfigDecorBase* DGNAAPGKIPL()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_DGNAAPGKIPL_OFFSET))(this);
		}

		::System::Int32 GIJLLGEPMIA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_GIJLLGEPMIA_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean APMCKICIGDA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* HGDMBHDKFPK)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_APMCKICIGDA_OFFSET))(this, HGDMBHDKFPK);
		}

		::System::Void MOFAEMLBGGH(::Foundation::ViewObject::Donjon::DonjonFloorObject* PGAGGIOEFOG)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_MOFAEMLBGGH_OFFSET))(this, PGAGGIOEFOG);
		}

		::System::Boolean HIPFCJHIIBO(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* MIALFKCCCPI)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_HIPFCJHIIBO_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		static ::MoleMole::Config::ConfigDungeonLevelAdjustDecor* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::MoleMole::Config::ConfigDungeonLevelAdjustDecor*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		static ::MoleMole::Config::ConfigDungeonLevelAdjustDecor* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::MoleMole::Config::ConfigDungeonLevelAdjustDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
		}
	};
}
