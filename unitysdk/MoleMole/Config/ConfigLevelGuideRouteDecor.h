#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"
#include "unitysdk/MoleMole/Config/ConfigLevelGuideRouteEntry.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObjectBuildContext; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGLEVELGUIDEROUTEDECOR_APMCKICIGDA_OFFSET UNITYSDK_OFFSET(0x1B923FE0)
#define MOLEMOLE_CONFIG_CONFIGLEVELGUIDEROUTEDECOR_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1B923980)
#define MOLEMOLE_CONFIG_CONFIGLEVELGUIDEROUTEDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B923D90)
#define MOLEMOLE_CONFIG_CONFIGLEVELGUIDEROUTEDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B923A90)
#define MOLEMOLE_CONFIG_CONFIGLEVELGUIDEROUTEDECOR_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1B924120)
#define MOLEMOLE_CONFIG_CONFIGLEVELGUIDEROUTEDECOR_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1B923A80)
#define MOLEMOLE_CONFIG_CONFIGLEVELGUIDEROUTEDECOR_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1B9242D0)
#define MOLEMOLE_CONFIG_CONFIGLEVELGUIDEROUTEDECOR_HIPFCJHIIBO_OFFSET UNITYSDK_OFFSET(0x1B924090)
#define MOLEMOLE_CONFIG_CONFIGLEVELGUIDEROUTEDECOR_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1B923DF0)
#define MOLEMOLE_CONFIG_CONFIGLEVELGUIDEROUTEDECOR_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1B923930)
#define MOLEMOLE_CONFIG_CONFIGLEVELGUIDEROUTEDECOR_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1B923B10)
#define MOLEMOLE_CONFIG_CONFIGLEVELGUIDEROUTEDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B924080)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLevelGuideRouteDecor_TypeDefinitionIndex = 70831;

	class ConfigLevelGuideRouteDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLevelGuideRouteEntry>* RouteEntries; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGUIDEROUTEDECOR__CTOR_OFFSET))(this);
		}

		::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGUIDEROUTEDECOR_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
		}

		::MoleMole::Config::ConfigDecorBase* DGNAAPGKIPL()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGUIDEROUTEDECOR_DGNAAPGKIPL_OFFSET))(this);
		}

		::System::Int32 GIJLLGEPMIA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGUIDEROUTEDECOR_GIJLLGEPMIA_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGUIDEROUTEDECOR_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGUIDEROUTEDECOR_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean APMCKICIGDA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* HGDMBHDKFPK)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGUIDEROUTEDECOR_APMCKICIGDA_OFFSET))(this, HGDMBHDKFPK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGUIDEROUTEDECOR_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean HIPFCJHIIBO(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* MIALFKCCCPI)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGUIDEROUTEDECOR_HIPFCJHIIBO_OFFSET))(this, MIALFKCCCPI);
		}

		static ::MoleMole::Config::ConfigLevelGuideRouteDecor* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::MoleMole::Config::ConfigLevelGuideRouteDecor*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGUIDEROUTEDECOR_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
		}

		static ::MoleMole::Config::ConfigLevelGuideRouteDecor* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::MoleMole::Config::ConfigLevelGuideRouteDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGUIDEROUTEDECOR_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGUIDEROUTEDECOR_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}
	};
}
