#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDungeonRegisterRuleBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x190A46D0)
#define MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190A4A30)
#define MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x190A47E0)
#define MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x190A4E60)
#define MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x190A47D0)
#define MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x190A4D00)
#define MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x190A4A90)
#define MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x190A4680)
#define MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x190A4860)
#define MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE__CTOR_OFFSET UNITYSDK_OFFSET(0x190A4CF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPityFillingGroupRegisterRule_TypeDefinitionIndex = 84529;

	class ConfigPityFillingGroupRegisterRule : public ::MoleMole::Config::ConfigDungeonRegisterRuleBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* ExceptGameplayTagList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE__CTOR_OFFSET))(this);
		}

		::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
		}

		::MoleMole::Config::ConfigDungeonRegisterRuleBase* DGNAAPGKIPL()
		{
			return ((::MoleMole::Config::ConfigDungeonRegisterRuleBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_DGNAAPGKIPL_OFFSET))(this);
		}

		::System::Int32 GIJLLGEPMIA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_GIJLLGEPMIA_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		static ::MoleMole::Config::ConfigPityFillingGroupRegisterRule* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::MoleMole::Config::ConfigPityFillingGroupRegisterRule*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		static ::MoleMole::Config::ConfigPityFillingGroupRegisterRule* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::MoleMole::Config::ConfigPityFillingGroupRegisterRule*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
