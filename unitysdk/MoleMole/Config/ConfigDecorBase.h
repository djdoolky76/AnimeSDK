#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObjectBuildContext; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGDECORBASE_APMCKICIGDA_OFFSET UNITYSDK_OFFSET(0x1BA282A0)
#define MOLEMOLE_CONFIG_CONFIGDECORBASE_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1BA27D20)
#define MOLEMOLE_CONFIG_CONFIGDECORBASE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA28050)
#define MOLEMOLE_CONFIG_CONFIGDECORBASE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1BA27E30)
#define MOLEMOLE_CONFIG_CONFIGDECORBASE_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1BA28300)
#define MOLEMOLE_CONFIG_CONFIGDECORBASE_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1BA27E20)
#define MOLEMOLE_CONFIG_CONFIGDECORBASE_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1BA28450)
#define MOLEMOLE_CONFIG_CONFIGDECORBASE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1BA280B0)
#define MOLEMOLE_CONFIG_CONFIGDECORBASE_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1BA27D10)
#define MOLEMOLE_CONFIG_CONFIGDECORBASE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1BA27EB0)
#define MOLEMOLE_CONFIG_CONFIGDECORBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA282F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDecorBase_TypeDefinitionIndex = 70050;

	class ConfigDecorBase : public ::System::Object
	{
	public:
		::System::Boolean Export2Server; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDECORBASE__CTOR_OFFSET))(this);
		}

		::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDECORBASE_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
		}

		::MoleMole::Config::ConfigDecorBase* DGNAAPGKIPL()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDECORBASE_DGNAAPGKIPL_OFFSET))(this);
		}

		::System::Int32 GIJLLGEPMIA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDECORBASE_GIJLLGEPMIA_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDECORBASE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDECORBASE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean APMCKICIGDA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* HGDMBHDKFPK)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDECORBASE_APMCKICIGDA_OFFSET))(this, HGDMBHDKFPK);
		}

		static ::MoleMole::Config::ConfigDecorBase* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDECORBASE_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
		}

		static ::MoleMole::Config::ConfigDecorBase* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDECORBASE_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDECORBASE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDECORBASE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
