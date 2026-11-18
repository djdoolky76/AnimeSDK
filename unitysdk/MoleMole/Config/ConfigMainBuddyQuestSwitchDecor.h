#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObjectBuildContext; }
namespace MoleMole::Config { class ConfigQuestBuddyPair; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_APMCKICIGDA_OFFSET UNITYSDK_OFFSET(0x1B924B50)
#define MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1B924580)
#define MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B924900)
#define MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B924690)
#define MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1B924EF0)
#define MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1B924680)
#define MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1B924D90)
#define MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_HIPFCJHIIBO_OFFSET UNITYSDK_OFFSET(0x1B9250A0)
#define MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_HKHLIMFEFBP_OFFSET UNITYSDK_OFFSET(0x1B924C00)
#define MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1B924960)
#define MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1B924530)
#define MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1B924710)
#define MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B924D80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMainBuddyQuestSwitchDecor_TypeDefinitionIndex = 64444;

	class ConfigMainBuddyQuestSwitchDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigQuestBuddyPair*>* QuestBuddyList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR__CTOR_OFFSET))(this);
		}

		::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
		}

		::MoleMole::Config::ConfigDecorBase* DGNAAPGKIPL()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_DGNAAPGKIPL_OFFSET))(this);
		}

		::System::Int32 GIJLLGEPMIA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_GIJLLGEPMIA_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean APMCKICIGDA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* HGDMBHDKFPK)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_APMCKICIGDA_OFFSET))(this, HGDMBHDKFPK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::UInt32 HKHLIMFEFBP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_HKHLIMFEFBP_OFFSET))(this);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		static ::MoleMole::Config::ConfigMainBuddyQuestSwitchDecor* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::MoleMole::Config::ConfigMainBuddyQuestSwitchDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
		}

		static ::MoleMole::Config::ConfigMainBuddyQuestSwitchDecor* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::MoleMole::Config::ConfigMainBuddyQuestSwitchDecor*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean HIPFCJHIIBO(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* MIALFKCCCPI)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_HIPFCJHIIBO_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
