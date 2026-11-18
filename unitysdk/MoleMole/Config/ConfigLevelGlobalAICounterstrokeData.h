#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAICOUNTERSTROKEDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFAC79E0)
#define MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAICOUNTERSTROKEDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFAC74F0)
#define MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAICOUNTERSTROKEDATA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xFAC7A40)
#define MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAICOUNTERSTROKEDATA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xFAC7570)
#define MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAICOUNTERSTROKEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xFAC7C20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLevelGlobalAICounterstrokeData_TypeDefinitionIndex = 76479;

	class ConfigLevelGlobalAICounterstrokeData : public ::System::Object
	{
	public:
		::System::Single AICounterstrokeCD; // 0x10
		::System::Single MinBeHitCountDown; // 0x14
		::System::Single MaxBeHitCountDown; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAICOUNTERSTROKEDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAICOUNTERSTROKEDATA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAICOUNTERSTROKEDATA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAICOUNTERSTROKEDATA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAICOUNTERSTROKEDATA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}
	};
}
