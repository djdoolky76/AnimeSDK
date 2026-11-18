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

#define MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_APMCKICIGDA_OFFSET UNITYSDK_OFFSET(0x18B924D0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x18B91F10)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B92290)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18B92020)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x18B92770)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x18B92010)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x18B92580)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_HIPFCJHIIBO_OFFSET UNITYSDK_OFFSET(0x18B926E0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x18B922F0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x18B91EC0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x18B920A0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18B92570)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDungeonGuideStrategyDecor_TypeDefinitionIndex = 70270;

	class ConfigDungeonGuideStrategyDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::String* GuideStrategyKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR__CTOR_OFFSET))(this);
		}

		::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
		}

		::MoleMole::Config::ConfigDecorBase* DGNAAPGKIPL()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_DGNAAPGKIPL_OFFSET))(this);
		}

		::System::Int32 GIJLLGEPMIA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_GIJLLGEPMIA_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean APMCKICIGDA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* HGDMBHDKFPK)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_APMCKICIGDA_OFFSET))(this, HGDMBHDKFPK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		static ::MoleMole::Config::ConfigDungeonGuideStrategyDecor* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::MoleMole::Config::ConfigDungeonGuideStrategyDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
		}

		::System::Boolean HIPFCJHIIBO(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* MIALFKCCCPI)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_HIPFCJHIIBO_OFFSET))(this, MIALFKCCCPI);
		}

		static ::MoleMole::Config::ConfigDungeonGuideStrategyDecor* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::MoleMole::Config::ConfigDungeonGuideStrategyDecor*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
