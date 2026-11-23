#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }

#define ZENFULCRUM_EMBEDDEDBROWSER_STANDALONESHUTDOWN_B8BC14E355EF5009_OFFSET UNITYSDK_OFFSET(0x440D050)
#define ZENFULCRUM_EMBEDDEDBROWSER_STANDALONESHUTDOWN_F058C57E2E0D2D56_OFFSET UNITYSDK_OFFSET(0x440CFA0)
#define ZENFULCRUM_EMBEDDEDBROWSER_STANDALONESHUTDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int StandaloneShutdown_TypeDefinitionIndex = 19561;

	class StandaloneShutdown : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Action** StaticGet_B11C19F10EC7360D()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(StandaloneShutdown_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		::System::Void B8BC14E355EF5009()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_STANDALONESHUTDOWN_B8BC14E355EF5009_OFFSET))(this);
		}

		static ::System::Void F058C57E2E0D2D56()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_STANDALONESHUTDOWN_F058C57E2E0D2D56_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_STANDALONESHUTDOWN__CTOR_OFFSET))(this);
		}
	};
}
