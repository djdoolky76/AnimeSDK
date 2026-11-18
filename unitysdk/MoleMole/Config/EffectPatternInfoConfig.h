#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_EFFECTPATTERNINFOCONFIG_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1641FF90)
#define MOLEMOLE_CONFIG_EFFECTPATTERNINFOCONFIG_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x164202E0)
#define MOLEMOLE_CONFIG_EFFECTPATTERNINFOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x164204D0)
#define MOLEMOLE_CONFIG_EFFECTPATTERNINFOCONFIG___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16420680)
#define MOLEMOLE_CONFIG_EFFECTPATTERNINFOCONFIG___BASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16420690)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EffectPatternInfoConfig_TypeDefinitionIndex = 64158;

	class EffectPatternInfoConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* patternMap; // 0x58
		::System::Collections::Generic::List_1<::System::String*>* patternMap_Keys; // 0x60
		::System::Collections::Generic::List_1<::System::Object*>* patternMap_Values; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTPATTERNINFOCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTPATTERNINFOCONFIG_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTPATTERNINFOCONFIG_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTPATTERNINFOCONFIG___BASE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTPATTERNINFOCONFIG___BASE_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
