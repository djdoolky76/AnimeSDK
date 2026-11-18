#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOHEGDELNHI.h"
#include "unitysdk/MoleMole/Ability/InLevelAbilityTargetMask.h"
#include "unitysdk/MoleMole/Config/ConfigCommonLevelData.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_BKKHFLDANEN_OFFSET UNITYSDK_OFFSET(0x19B20310)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_CLNJNCCCDAP_OFFSET UNITYSDK_OFFSET(0x19B20670)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x19B1EA90)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_DJHALFDNGLC_OFFSET UNITYSDK_OFFSET(0x19B20910)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_EHPNMMENNLP_OFFSET UNITYSDK_OFFSET(0x19B20920)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_FAMKKNANKCE_OFFSET UNITYSDK_OFFSET(0x19B20030)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B1F980)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19B1EBA0)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x19B20C80)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_GEMFEILDCKJ_OFFSET UNITYSDK_OFFSET(0x19B209A0)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x19B1EB90)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_GMIOHIGPMPG_OFFSET UNITYSDK_OFFSET(0x19B20BD0)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x19B206F0)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_HPFGMEFNNPL_OFFSET UNITYSDK_OFFSET(0x19B20850)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x19B1F9E0)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_JMOGDBDDOAK_OFFSET UNITYSDK_OFFSET(0x19B20A50)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_KGEMKAFBOGB_OFFSET UNITYSDK_OFFSET(0x19B20440)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_KOHHENGJBHI_OFFSET UNITYSDK_OFFSET(0x19B20580)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x19B1E9C0)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_NMJFJBFNOJM_OFFSET UNITYSDK_OFFSET(0x19B20180)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x19B1EC20)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_PJMHMKFDFCH_OFFSET UNITYSDK_OFFSET(0x19B20380)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19B206E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTriggerFilter_TypeDefinitionIndex = 90731;

	class ConfigTriggerFilter : public ::MoleMole::Config::ConfigCommonLevelData
	{
	public:
		// static const ::System::String* ConfigTriggerFilterTypeName; // 0x0
		::HOHEGDELNHI TriggerFilterType; // 0x18
		::System::Boolean UseSubTrigger; // 0x1C
		::System::Boolean ExitOnDestroy; // 0x1D
		::System::Boolean UseContinuousCheck; // 0x1E
		::System::Byte _padding0[0x1];
		::MoleMole::Config::EntityType FilterEntityType; // 0x20
		::System::Byte _padding1[0x4];
		::System::String* FilterColliderTag; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* AbilityTarget; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* EntityTags; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* ExcludeEntityTags; // 0x40
		::System::Nullable_1<::MoleMole::Ability::InLevelAbilityTargetMask> AbilityTargets; // 0x48
		::System::Nullable_1<::System::Boolean> HasAnyValidEntityTagsCache; // 0x50
		::System::Nullable_1<::System::Boolean> HasAnyValidExcludeEntityTagsCache; // 0x52

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER__CTOR_OFFSET))(this);
		}

		::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
		}

		::MoleMole::Config::ConfigCommonLevelData* DGNAAPGKIPL()
		{
			return ((::MoleMole::Config::ConfigCommonLevelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_DGNAAPGKIPL_OFFSET))(this);
		}

		::System::Int32 GIJLLGEPMIA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_GIJLLGEPMIA_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean FAMKKNANKCE(::UnityEngine::Collider* EHHHMFKHNAI, ::MoleMole::EntityHandle& HPADNAEINPK)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_FAMKKNANKCE_OFFSET))(this, EHHHMFKHNAI, HPADNAEINPK);
		}

		::System::Boolean NMJFJBFNOJM(::MoleMole::EntityHandle KLEBDDDBKAC, ::UnityEngine::Collider* KGNOLKECDHJ)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_NMJFJBFNOJM_OFFSET))(this, KLEBDDDBKAC, KGNOLKECDHJ);
		}

		::System::Boolean KOHHENGJBHI(::MoleMole::EntityHandle KLEBDDDBKAC)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_KOHHENGJBHI_OFFSET))(this, KLEBDDDBKAC);
		}

		::System::String* CLNJNCCCDAP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_CLNJNCCCDAP_OFFSET))(this);
		}

		static ::MoleMole::Config::ConfigTriggerFilter* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::MoleMole::Config::ConfigTriggerFilter*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
		}

		::MoleMole::Ability::InLevelAbilityTargetMask HPFGMEFNNPL()
		{
			return ((::MoleMole::Ability::InLevelAbilityTargetMask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_HPFGMEFNNPL_OFFSET))(this);
		}

		::System::String* DJHALFDNGLC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_DJHALFDNGLC_OFFSET))(this);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		static ::System::Boolean EHPNMMENNLP(::System::String* MCOHLHMKLIP, ::MoleMole::Config::ConfigTriggerFilter*& IFGFHOIOHOP)
		{
			return ((::System::Boolean(*)(::System::String*, ::MoleMole::Config::ConfigTriggerFilter*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_EHPNMMENNLP_OFFSET))(MCOHLHMKLIP, IFGFHOIOHOP);
		}

		::System::Boolean GEMFEILDCKJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_GEMFEILDCKJ_OFFSET))(this);
		}

		::System::Boolean KGEMKAFBOGB(::MoleMole::EntityHandle HPADNAEINPK)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_KGEMKAFBOGB_OFFSET))(this, HPADNAEINPK);
		}

		::System::Boolean BKKHFLDANEN(::MoleMole::EntityHandle HPADNAEINPK)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_BKKHFLDANEN_OFFSET))(this, HPADNAEINPK);
		}

		static ::System::Boolean JMOGDBDDOAK(::System::Collections::Generic::List_1<::System::String*>* JMDOANHOEJG)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_JMOGDBDDOAK_OFFSET))(JMDOANHOEJG);
		}

		::System::Boolean PJMHMKFDFCH(::MoleMole::EntityHandle HPADNAEINPK)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_PJMHMKFDFCH_OFFSET))(this, HPADNAEINPK);
		}

		static ::MoleMole::Config::ConfigTriggerFilter* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::MoleMole::Config::ConfigTriggerFilter*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean GMIOHIGPMPG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_GMIOHIGPMPG_OFFSET))(this);
		}
	};
}
