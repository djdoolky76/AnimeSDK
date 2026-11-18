#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObjectBuildContext; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_APMCKICIGDA_OFFSET UNITYSDK_OFFSET(0x1BA28AA0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1BA28530)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA28890)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1BA28640)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1BA28BD0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1BA28630)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_HAMDFIGPIEC_OFFSET UNITYSDK_OFFSET(0x1BA28B40)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1BA28D80)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_HIPFCJHIIBO_OFFSET UNITYSDK_OFFSET(0x1BA28EE0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1BA288F0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1BA28520)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1BA286C0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA28BC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDungeonErosionDecor_TypeDefinitionIndex = 68461;

	class ConfigDungeonErosionDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::UInt32 ZKErosionID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR__CTOR_OFFSET))(this);
		}

		::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
		}

		::MoleMole::Config::ConfigDecorBase* DGNAAPGKIPL()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_DGNAAPGKIPL_OFFSET))(this);
		}

		::System::Int32 GIJLLGEPMIA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_GIJLLGEPMIA_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean APMCKICIGDA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* HGDMBHDKFPK)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_APMCKICIGDA_OFFSET))(this, HGDMBHDKFPK);
		}

		::System::Void HAMDFIGPIEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_HAMDFIGPIEC_OFFSET))(this);
		}

		static ::MoleMole::Config::ConfigDungeonErosionDecor* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::MoleMole::Config::ConfigDungeonErosionDecor*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		static ::MoleMole::Config::ConfigDungeonErosionDecor* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::MoleMole::Config::ConfigDungeonErosionDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean HIPFCJHIIBO(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* MIALFKCCCPI)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_HIPFCJHIIBO_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
