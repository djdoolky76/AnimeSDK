#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x131E1360)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x131E1870)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x131E1470)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x131E1CA0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x131E1460)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x131E1E50)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x131E18D0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x131E12F0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x131E14F0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x131E1C90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDungeonEndRuleDecor_TypeDefinitionIndex = 44421;

	class ConfigDungeonEndRuleDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* GroupIDList; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* GamePlayTagList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR__CTOR_OFFSET))(this);
		}

		::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
		}

		::MoleMole::Config::ConfigDecorBase* DGNAAPGKIPL()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_DGNAAPGKIPL_OFFSET))(this);
		}

		::System::Int32 GIJLLGEPMIA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_GIJLLGEPMIA_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		static ::MoleMole::Config::ConfigDungeonEndRuleDecor* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::MoleMole::Config::ConfigDungeonEndRuleDecor*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		static ::MoleMole::Config::ConfigDungeonEndRuleDecor* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::MoleMole::Config::ConfigDungeonEndRuleDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
