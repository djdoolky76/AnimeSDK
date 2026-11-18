#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x164272E0)
#define MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x164274A0)
#define MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x164273F0)
#define MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16427700)
#define MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x164273E0)
#define MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x164275A0)
#define MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16427530)
#define MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x164272D0)
#define MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16427470)
#define MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x16427590)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HackSubsystemDecor_TypeDefinitionIndex = 79514;

	class HackSubsystemDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR__CTOR_OFFSET))(this);
		}

		::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
		}

		::MoleMole::Config::ConfigDecorBase* DGNAAPGKIPL()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_DGNAAPGKIPL_OFFSET))(this);
		}

		::System::Int32 GIJLLGEPMIA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_GIJLLGEPMIA_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		static ::MoleMole::Config::HackSubsystemDecor* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::MoleMole::Config::HackSubsystemDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		static ::MoleMole::Config::HackSubsystemDecor* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::MoleMole::Config::HackSubsystemDecor*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
