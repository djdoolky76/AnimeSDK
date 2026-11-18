#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x19250890)
#define MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19250BF0)
#define MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x192509A0)
#define MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x19251030)
#define MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x19250990)
#define MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x19250ED0)
#define MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x19250C50)
#define MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x19250880)
#define MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x19250A20)
#define MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19250EC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTimeEventDecor_TypeDefinitionIndex = 74255;

	class ConfigTimeEventDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Int32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR__CTOR_OFFSET))(this);
		}

		::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
		}

		::MoleMole::Config::ConfigDecorBase* DGNAAPGKIPL()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_DGNAAPGKIPL_OFFSET))(this);
		}

		::System::Int32 GIJLLGEPMIA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_GIJLLGEPMIA_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		static ::MoleMole::Config::ConfigTimeEventDecor* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::MoleMole::Config::ConfigTimeEventDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		static ::MoleMole::Config::ConfigTimeEventDecor* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::MoleMole::Config::ConfigTimeEventDecor*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
