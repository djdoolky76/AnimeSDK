#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HollowInteractEffectImpBase_EffectImpState.h"
#include "unitysdk/System/Object.h"

class PJGJHHPJEKD;
namespace MoleMole::Config { class ConfigHollowInteractCondition; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_HOLLOWINTERACTEFFECTIMPBASE_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x19B24270)
#define MOLEMOLE_CONFIG_HOLLOWINTERACTEFFECTIMPBASE_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x19B24280)
#define MOLEMOLE_CONFIG_HOLLOWINTERACTEFFECTIMPBASE_ONINTERACT_OFFSET UNITYSDK_OFFSET(0x19B24290)
#define MOLEMOLE_CONFIG_HOLLOWINTERACTEFFECTIMPBASE_RESET_OFFSET UNITYSDK_OFFSET(0x19B24470)
#define MOLEMOLE_CONFIG_HOLLOWINTERACTEFFECTIMPBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B244C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowInteractEffectImpBase_TypeDefinitionIndex = 58412;

	class HollowInteractEffectImpBase : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowInteractCondition*>* conditions; // 0x10
		::MoleMole::Config::HollowInteractEffectImpBase_EffectImpState State; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWINTERACTEFFECTIMPBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWINTERACTEFFECTIMPBASE_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWINTERACTEFFECTIMPBASE_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Void OnInteract(::PJGJHHPJEKD* context)
		{
			return ((::System::Void(*)(::PVOID, ::PJGJHHPJEKD*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWINTERACTEFFECTIMPBASE_ONINTERACT_OFFSET))(this, context);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWINTERACTEFFECTIMPBASE_RESET_OFFSET))(this);
		}
	};
}
