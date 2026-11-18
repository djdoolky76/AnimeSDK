#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObjectBuildContext; }
namespace MoleMole::Config { class DungeonMiscCtrlInfo; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_APMCKICIGDA_OFFSET UNITYSDK_OFFSET(0x16541F70)
#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x165419A0)
#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16541D20)
#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16541AB0)
#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16542360)
#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16541AA0)
#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16542200)
#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_HIPFCJHIIBO_OFFSET UNITYSDK_OFFSET(0x16542510)
#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16541D80)
#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16541950)
#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16541B30)
#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x165421F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DungeonMiscCtrlDecor_TypeDefinitionIndex = 57104;

	class DungeonMiscCtrlDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::DungeonMiscCtrlInfo*>* CtrlList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR__CTOR_OFFSET))(this);
		}

		::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
		}

		::MoleMole::Config::ConfigDecorBase* DGNAAPGKIPL()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_DGNAAPGKIPL_OFFSET))(this);
		}

		::System::Int32 GIJLLGEPMIA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_GIJLLGEPMIA_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean APMCKICIGDA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* HGDMBHDKFPK)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_APMCKICIGDA_OFFSET))(this, HGDMBHDKFPK);
		}

		static ::MoleMole::Config::DungeonMiscCtrlDecor* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::MoleMole::Config::DungeonMiscCtrlDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		static ::MoleMole::Config::DungeonMiscCtrlDecor* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::MoleMole::Config::DungeonMiscCtrlDecor*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean HIPFCJHIIBO(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* MIALFKCCCPI)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_HIPFCJHIIBO_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
