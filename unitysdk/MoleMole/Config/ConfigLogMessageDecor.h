#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObjectBuildContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_APMCKICIGDA_OFFSET UNITYSDK_OFFSET(0x11E99010)
#define MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x11E98A50)
#define MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11E98DD0)
#define MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11E98B60)
#define MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x11E992B0)
#define MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x11E98B50)
#define MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x11E990C0)
#define MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_HIPFCJHIIBO_OFFSET UNITYSDK_OFFSET(0x11E99220)
#define MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11E98E30)
#define MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x11E98A00)
#define MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11E98BE0)
#define MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x11E990B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLogMessageDecor_TypeDefinitionIndex = 73773;

	class ConfigLogMessageDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::String* Message; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR__CTOR_OFFSET))(this);
		}

		::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
		}

		::MoleMole::Config::ConfigDecorBase* DGNAAPGKIPL()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_DGNAAPGKIPL_OFFSET))(this);
		}

		::System::Int32 GIJLLGEPMIA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_GIJLLGEPMIA_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean APMCKICIGDA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* HGDMBHDKFPK)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_APMCKICIGDA_OFFSET))(this, HGDMBHDKFPK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		static ::MoleMole::Config::ConfigLogMessageDecor* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::MoleMole::Config::ConfigLogMessageDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean HIPFCJHIIBO(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* MIALFKCCCPI)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_HIPFCJHIIBO_OFFSET))(this, MIALFKCCCPI);
		}

		static ::MoleMole::Config::ConfigLogMessageDecor* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::MoleMole::Config::ConfigLogMessageDecor*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
