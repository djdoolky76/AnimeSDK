#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObjectBuildContext; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_APMCKICIGDA_OFFSET UNITYSDK_OFFSET(0x19232A50)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x19232210)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x192326B0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19232320)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x19232B90)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x19232310)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x19232D40)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_HIPFCJHIIBO_OFFSET UNITYSDK_OFFSET(0x19232B00)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x19232710)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x19232200)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x192323A0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19232AF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDungeonDifficultyDecor_TypeDefinitionIndex = 77201;

	class ConfigDungeonDifficultyDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Int32 DifficultyTagID; // 0x18
		::System::Boolean IsDynamicDifficulty; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR__CTOR_OFFSET))(this);
		}

		::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
		}

		::MoleMole::Config::ConfigDecorBase* DGNAAPGKIPL()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_DGNAAPGKIPL_OFFSET))(this);
		}

		::System::Int32 GIJLLGEPMIA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_GIJLLGEPMIA_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean APMCKICIGDA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* HGDMBHDKFPK)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_APMCKICIGDA_OFFSET))(this, HGDMBHDKFPK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean HIPFCJHIIBO(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* MIALFKCCCPI)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_HIPFCJHIIBO_OFFSET))(this, MIALFKCCCPI);
		}

		static ::MoleMole::Config::ConfigDungeonDifficultyDecor* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::MoleMole::Config::ConfigDungeonDifficultyDecor*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
		}

		static ::MoleMole::Config::ConfigDungeonDifficultyDecor* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::MoleMole::Config::ConfigDungeonDifficultyDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
		}
	};
}
