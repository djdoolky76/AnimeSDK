#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Color.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOUICOLORSWITCHER_CTOR_OFFSET UNITYSDK_OFFSET(0xD87B450)
#define RPG_CLIENT_MONOUICOLORSWITCHER_GETCOLORBYSTATE_OFFSET UNITYSDK_OFFSET(0xD87AE40)
#define RPG_CLIENT_MONOUICOLORSWITCHER_SWITCHCOLORSTATE_OFFSET UNITYSDK_OFFSET(0xD87B000)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUIColorSwitcher_TypeDefinitionIndex = 68974;

	class MonoUIColorSwitcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* NodeRecords; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUICOLORSWITCHER_CTOR_OFFSET))(this);
		}

		::UnityEngine::Color GetColorByState(::System::String* a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUICOLORSWITCHER_GETCOLORBYSTATE_OFFSET))(this, a1);
		}

		::System::Void SwitchColorState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUICOLORSWITCHER_SWITCHCOLORSTATE_OFFSET))(this, a1);
		}

	};
}
