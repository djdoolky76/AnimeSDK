#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/IndicatorLightPresetType.h"

namespace MoleMole::Config { class IndicatorLightsPreset; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDINDICATORLIGHT__CCTOR_OFFSET UNITYSDK_OFFSET(0x131E6390)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDINDICATORLIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x131E62B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboardIndicatorLight_TypeDefinitionIndex = 92284;

	class ConfigHollowChessboardIndicatorLight : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		static ::System::String** StaticGet_BattleEventPreIconRes()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardIndicatorLight_TypeDefinitionIndex)->GetStaticField(0x47D50);
		}
		::System::Boolean Enable; // 0x58
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::IndicatorLightPresetType, ::MoleMole::Config::IndicatorLightsPreset*>* Presets; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDINDICATORLIGHT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDINDICATORLIGHT__CCTOR_OFFSET))();
		}
	};
}
