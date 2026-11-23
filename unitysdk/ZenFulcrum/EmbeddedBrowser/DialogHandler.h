#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_F06B0A1E7343B846.h"

namespace System { class String; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
namespace ZenFulcrum::EmbeddedBrowser { class DialogHandler_BB9EF4E83D590FEC; }
namespace ZenFulcrum::EmbeddedBrowser { class DialogHandler_E758FCEA47C8F0F3; }

#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_AF34DAD280BF69B6_OFFSET UNITYSDK_OFFSET(0x43F4880)
#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x43F5300)
#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x43F5230)
#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_F058C57E2E0D2D56_OFFSET UNITYSDK_OFFSET(0x43F4460)
#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_FE89AC7560823764_OFFSET UNITYSDK_OFFSET(0x43F4BA0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int DialogHandler_TypeDefinitionIndex = 19412;

	class DialogHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_E8456D2242E6B84A()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DialogHandler_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::ZenFulcrum::EmbeddedBrowser::Browser* BE164354F76C7BC4; // 0x20
		::ZenFulcrum::EmbeddedBrowser::Browser* BC04BD4B77932CDD; // 0x28
		::ZenFulcrum::EmbeddedBrowser::DialogHandler_E758FCEA47C8F0F3* E3CCE9A37C42B159; // 0x30
		::ZenFulcrum::EmbeddedBrowser::DialogHandler_BB9EF4E83D590FEC* AC32BA423D8EA93C; // 0x38

		::System::Void AF34DAD280BF69B6(::System::String* EAFCF51C17536668, ::System::Int32 BB8C609F76620E45, ::System::Int32 A0A0D02932F12CFD)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_AF34DAD280BF69B6_OFFSET))(this, EAFCF51C17536668, BB8C609F76620E45, A0A0D02932F12CFD);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void BFA7961FF2AC380B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_BFA7961FF2AC380B_OFFSET))(this);
		}

		static ::ZenFulcrum::EmbeddedBrowser::DialogHandler* F058C57E2E0D2D56(::ZenFulcrum::EmbeddedBrowser::Browser* EFE497ABF6BF98D8, ::ZenFulcrum::EmbeddedBrowser::DialogHandler_E758FCEA47C8F0F3* F7ACC2C2D03B6970, ::ZenFulcrum::EmbeddedBrowser::DialogHandler_BB9EF4E83D590FEC* E3F6D5F1498C4C8F)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::DialogHandler*(*)(::ZenFulcrum::EmbeddedBrowser::Browser*, ::ZenFulcrum::EmbeddedBrowser::DialogHandler_E758FCEA47C8F0F3*, ::ZenFulcrum::EmbeddedBrowser::DialogHandler_BB9EF4E83D590FEC*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_F058C57E2E0D2D56_OFFSET))(EFE497ABF6BF98D8, F7ACC2C2D03B6970, E3F6D5F1498C4C8F);
		}

		::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_E85D1C741D5386D7_OFFSET))(this);
		}

		::System::Void FE89AC7560823764(::ZenFulcrum::EmbeddedBrowser::BrowserNative_F06B0A1E7343B846 A288CB28FC2A6DA3, ::System::String* E97E8D008427A296, ::System::String* A99C7B9BCC09D5D4)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_F06B0A1E7343B846, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_FE89AC7560823764_OFFSET))(this, A288CB28FC2A6DA3, E97E8D008427A296, A99C7B9BCC09D5D4);
		}
	};
}
