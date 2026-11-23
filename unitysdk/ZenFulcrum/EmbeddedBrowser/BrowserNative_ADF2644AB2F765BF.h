#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_ADAB82FDEDF2011E; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_ADF2644AB2F765BF_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_ADF2644AB2F765BF__CTOR_OFFSET UNITYSDK_OFFSET(0x2284E60)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_ADF2644AB2F765BF_TypeDefinitionIndex = 19550;

	class BrowserNative_ADF2644AB2F765BF : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_ADF2644AB2F765BF__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 F5AEFA05C9F71B82, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ADAB82FDEDF2011E* ABCBCC5B21FA7C82)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ADAB82FDEDF2011E*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_ADF2644AB2F765BF_INVOKE_OFFSET))(this, F5AEFA05C9F71B82, ABCBCC5B21FA7C82);
		}
	};
}
