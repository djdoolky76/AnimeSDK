#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObjectBuildContext; }
namespace MoleMole::Config { class DungeonMiscTimeCtrlInfo; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLDECOR_APMCKICIGDA_OFFSET UNITYSDK_OFFSET(0xFFE61D0)
#define MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLDECOR_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xFFE5C00)
#define MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFFE5F80)
#define MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFFE5D10)
#define MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLDECOR_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xFFE6650)
#define MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLDECOR_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xFFE5D00)
#define MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLDECOR_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xFFE64F0)
#define MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLDECOR_HIPFCJHIIBO_OFFSET UNITYSDK_OFFSET(0xFFE6460)
#define MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLDECOR_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xFFE5FE0)
#define MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLDECOR_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xFFE5BB0)
#define MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLDECOR_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xFFE5D90)
#define MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0xFFE6450)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DungeonMiscTimeCtrlDecor_TypeDefinitionIndex = 52666;

	class DungeonMiscTimeCtrlDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::DungeonMiscTimeCtrlInfo*>* TimeCtrlList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLDECOR__CTOR_OFFSET))(this);
		}

		::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLDECOR_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
		}

		::MoleMole::Config::ConfigDecorBase* DGNAAPGKIPL()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLDECOR_DGNAAPGKIPL_OFFSET))(this);
		}

		::System::Int32 GIJLLGEPMIA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLDECOR_GIJLLGEPMIA_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLDECOR_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLDECOR_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean APMCKICIGDA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* HGDMBHDKFPK)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLDECOR_APMCKICIGDA_OFFSET))(this, HGDMBHDKFPK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLDECOR_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean HIPFCJHIIBO(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* MIALFKCCCPI)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLDECOR_HIPFCJHIIBO_OFFSET))(this, MIALFKCCCPI);
		}

		static ::MoleMole::Config::DungeonMiscTimeCtrlDecor* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::MoleMole::Config::DungeonMiscTimeCtrlDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLDECOR_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
		}

		static ::MoleMole::Config::DungeonMiscTimeCtrlDecor* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::MoleMole::Config::DungeonMiscTimeCtrlDecor*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLDECOR_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLDECOR_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}
	};
}
