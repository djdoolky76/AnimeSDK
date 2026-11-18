#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBOFFDLOOND_DLFFACOPGFF.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/LightbarCurveEntry.h"
#include "unitysdk/MoleMole/LightbarPresetEntry.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGLIGHTBARPRESET_GETPRESETKEYS_OFFSET UNITYSDK_OFFSET(0x127A02E0)
#define MOLEMOLE_CONFIGLIGHTBARPRESET_TRYGETCURVEENTRY_OFFSET UNITYSDK_OFFSET(0x127A0070)
#define MOLEMOLE_CONFIGLIGHTBARPRESET_TRYGETPRESET_OFFSET UNITYSDK_OFFSET(0x127A01B0)
#define MOLEMOLE_CONFIGLIGHTBARPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x127A0370)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigLightbarPreset_TypeDefinitionIndex = 41822;

	class ConfigLightbarPreset : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LightbarPresetEntry>* presets; // 0x58
		::FBOFFDLOOND_DLFFACOPGFF defaultPlaymixFlags; // 0x60
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LightbarCurveEntry>* curveMap; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLIGHTBARPRESET__CTOR_OFFSET))(this);
		}

		::System::Boolean TryGetCurveEntry(::System::String* eventName, ::MoleMole::LightbarCurveEntry& entry)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::LightbarCurveEntry&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLIGHTBARPRESET_TRYGETCURVEENTRY_OFFSET))(this, eventName, entry);
		}

		::System::Boolean TryGetPreset(::System::String* key, ::MoleMole::LightbarPresetEntry& entry)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::LightbarPresetEntry&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLIGHTBARPRESET_TRYGETPRESET_OFFSET))(this, key, entry);
		}

		::Il2CppArray<::System::String*>* GetPresetKeys()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLIGHTBARPRESET_GETPRESETKEYS_OFFSET))(this);
		}
	};
}
