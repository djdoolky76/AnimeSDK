#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObjectBuildContext; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_APMCKICIGDA_OFFSET UNITYSDK_OFFSET(0x19B2C100)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x19B2C220)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B2C580)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19B2C330)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x19B2CA10)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x19B2C320)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_HAMDFIGPIEC_OFFSET UNITYSDK_OFFSET(0x19B2C1A0)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x19B2C820)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_HIPFCJHIIBO_OFFSET UNITYSDK_OFFSET(0x19B2C980)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x19B2C5E0)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x19B2C210)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x19B2C3B0)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19B2C810)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZiplineSubsystemDecor_TypeDefinitionIndex = 89502;

	class ZiplineSubsystemDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Boolean EnableSceneAreaOptimization; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR__CTOR_OFFSET))(this);
		}

		::System::Boolean APMCKICIGDA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* HGDMBHDKFPK)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_APMCKICIGDA_OFFSET))(this, HGDMBHDKFPK);
		}

		::System::Void HAMDFIGPIEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_HAMDFIGPIEC_OFFSET))(this);
		}

		::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
		}

		::MoleMole::Config::ConfigDecorBase* DGNAAPGKIPL()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_DGNAAPGKIPL_OFFSET))(this);
		}

		::System::Int32 GIJLLGEPMIA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_GIJLLGEPMIA_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		static ::MoleMole::Config::ZiplineSubsystemDecor* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::MoleMole::Config::ZiplineSubsystemDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean HIPFCJHIIBO(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* MIALFKCCCPI)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_HIPFCJHIIBO_OFFSET))(this, MIALFKCCCPI);
		}

		static ::MoleMole::Config::ZiplineSubsystemDecor* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::MoleMole::Config::ZiplineSubsystemDecor*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
