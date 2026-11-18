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

#define MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_APMCKICIGDA_OFFSET UNITYSDK_OFFSET(0x1923F870)
#define MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1923F1F0)
#define MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1923F570)
#define MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1923F300)
#define MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1923FC40)
#define MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1923F2F0)
#define MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1923FDF0)
#define MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_HIPFCJHIIBO_OFFSET UNITYSDK_OFFSET(0x1923FBB0)
#define MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1923F5D0)
#define MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1923F1A0)
#define MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_MOFAEMLBGGH_OFFSET UNITYSDK_OFFSET(0x1923F910)
#define MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1923F380)
#define MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1923FBA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFloorLevelAbilityDecor_TypeDefinitionIndex = 70313;

	class ConfigFloorLevelAbilityDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* LevelAbilityIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR__CTOR_OFFSET))(this);
		}

		::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
		}

		::MoleMole::Config::ConfigDecorBase* DGNAAPGKIPL()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_DGNAAPGKIPL_OFFSET))(this);
		}

		::System::Int32 GIJLLGEPMIA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_GIJLLGEPMIA_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean APMCKICIGDA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* HGDMBHDKFPK)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_APMCKICIGDA_OFFSET))(this, HGDMBHDKFPK);
		}

		::System::Void MOFAEMLBGGH(::Foundation::ViewObject::Donjon::DonjonFloorObject* PGAGGIOEFOG)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_MOFAEMLBGGH_OFFSET))(this, PGAGGIOEFOG);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean HIPFCJHIIBO(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* MIALFKCCCPI)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_HIPFCJHIIBO_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		static ::MoleMole::Config::ConfigFloorLevelAbilityDecor* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::MoleMole::Config::ConfigFloorLevelAbilityDecor*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
		}

		static ::MoleMole::Config::ConfigFloorLevelAbilityDecor* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::MoleMole::Config::ConfigFloorLevelAbilityDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
		}
	};
}
