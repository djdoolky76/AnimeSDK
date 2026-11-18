#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ELFDOCCOFLJ_2.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_CLNJNCCCDAP_OFFSET UNITYSDK_OFFSET(0x19297870)
#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x19297320)
#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19297680)
#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19297430)
#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x19297900)
#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x19297420)
#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x19297A50)
#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x192976E0)
#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x192972D0)
#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x192974B0)
#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_PFODELOEFDP_OFFSET UNITYSDK_OFFSET(0x19297B20)
#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x192978F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCommonLevelData_TypeDefinitionIndex = 44194;

	class ConfigCommonLevelData : public ::System::Object
	{
	public:
		::System::String* Identifier; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA__CTOR_OFFSET))(this);
		}

		::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
		}

		::MoleMole::Config::ConfigCommonLevelData* DGNAAPGKIPL()
		{
			return ((::MoleMole::Config::ConfigCommonLevelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_DGNAAPGKIPL_OFFSET))(this);
		}

		::System::Int32 GIJLLGEPMIA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_GIJLLGEPMIA_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::String* CLNJNCCCDAP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_CLNJNCCCDAP_OFFSET))(this);
		}

		static ::MoleMole::Config::ConfigCommonLevelData* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::MoleMole::Config::ConfigCommonLevelData*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
		}

		static ::MoleMole::Config::ConfigCommonLevelData* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::MoleMole::Config::ConfigCommonLevelData*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
		}

		::System::Void PFODELOEFDP(::System::Collections::Generic::Dictionary_2<::ELFDOCCOFLJ_2<::System::String*, ::System::String*>, ::MoleMole::Config::ConfigCommonLevelData*>* AAOCANGHBDG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::ELFDOCCOFLJ_2<::System::String*, ::System::String*>, ::MoleMole::Config::ConfigCommonLevelData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_PFODELOEFDP_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
