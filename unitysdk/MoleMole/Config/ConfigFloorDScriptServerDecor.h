#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigBlackboardParam.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x121BEAD0)
#define MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x121BF180)
#define MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x121BEBE0)
#define MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x121BF6B0)
#define MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x121BEBD0)
#define MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x121BF550)
#define MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x121BF1E0)
#define MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x121BEA60)
#define MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x121BEC60)
#define MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x121BF540)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFloorDScriptServerDecor_TypeDefinitionIndex = 74609;

	class ConfigFloorDScriptServerDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Int32 ID; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* DFScriptName; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* InitParam; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR__CTOR_OFFSET))(this);
		}

		::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
		}

		::MoleMole::Config::ConfigDecorBase* DGNAAPGKIPL()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_DGNAAPGKIPL_OFFSET))(this);
		}

		::System::Int32 GIJLLGEPMIA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_GIJLLGEPMIA_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		static ::MoleMole::Config::ConfigFloorDScriptServerDecor* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::MoleMole::Config::ConfigFloorDScriptServerDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		static ::MoleMole::Config::ConfigFloorDScriptServerDecor* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::MoleMole::Config::ConfigFloorDScriptServerDecor*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
