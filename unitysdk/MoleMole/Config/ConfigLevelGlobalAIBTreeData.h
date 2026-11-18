#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAIBTREEDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x131E6F60)
#define MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAIBTREEDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x131E6800)
#define MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAIBTREEDATA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x131E6FC0)
#define MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAIBTREEDATA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x131E6880)
#define MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAIBTREEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x131E75A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLevelGlobalAIBTreeData_TypeDefinitionIndex = 56894;

	class ConfigLevelGlobalAIBTreeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* IntItems; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* FloatItems; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* BoolItems; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* StringItems; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAIBTREEDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAIBTREEDATA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAIBTREEDATA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAIBTREEDATA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAIBTREEDATA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}
	};
}
