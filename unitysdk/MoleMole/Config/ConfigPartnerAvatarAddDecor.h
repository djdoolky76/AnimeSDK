#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObjectBuildContext; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_APMCKICIGDA_OFFSET UNITYSDK_OFFSET(0x19249E60)
#define MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x192495C0)
#define MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19249AA0)
#define MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x192496D0)
#define MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1924A120)
#define MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x192496C0)
#define MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x19249FC0)
#define MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_HIPFCJHIIBO_OFFSET UNITYSDK_OFFSET(0x19249F30)
#define MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x19249B00)
#define MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x19249570)
#define MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x19249750)
#define MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19249F20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPartnerAvatarAddDecor_TypeDefinitionIndex = 80224;

	class ConfigPartnerAvatarAddDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* PartnerRobotIds; // 0x18
		::System::Boolean ExcludeMainTeam; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR__CTOR_OFFSET))(this);
		}

		::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
		}

		::MoleMole::Config::ConfigDecorBase* DGNAAPGKIPL()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_DGNAAPGKIPL_OFFSET))(this);
		}

		::System::Int32 GIJLLGEPMIA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_GIJLLGEPMIA_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean APMCKICIGDA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* HGDMBHDKFPK)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_APMCKICIGDA_OFFSET))(this, HGDMBHDKFPK);
		}

		::System::Boolean HIPFCJHIIBO(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* MIALFKCCCPI)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_HIPFCJHIIBO_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		static ::MoleMole::Config::ConfigPartnerAvatarAddDecor* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::MoleMole::Config::ConfigPartnerAvatarAddDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
		}

		static ::MoleMole::Config::ConfigPartnerAvatarAddDecor* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::MoleMole::Config::ConfigPartnerAvatarAddDecor*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
