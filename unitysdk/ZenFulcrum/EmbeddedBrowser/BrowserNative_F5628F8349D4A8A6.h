#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E8C1635F85E9BC30;
namespace System { class Action; }
namespace System { class E686BBB9641A5875; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F5628F8349D4A8A6_BD539E0B7E7F74B3_OFFSET UNITYSDK_OFFSET(0x440D8C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F5628F8349D4A8A6_F9B39777B68F9801_OFFSET UNITYSDK_OFFSET(0x440DA60)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x440ECE0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_F5628F8349D4A8A6_TypeDefinitionIndex = 19554;

	class BrowserNative_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action** StaticGet_EDE6ED0C41892CB6()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::E686BBB9641A5875** StaticGet_E3AA54A6337D2FEB()
		{
			return (::System::E686BBB9641A5875**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void BD539E0B7E7F74B3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F5628F8349D4A8A6_BD539E0B7E7F74B3_OFFSET))(this);
		}

		::System::Void F9B39777B68F9801(::System::Object* AD0CAFBAFB8B01EA, ::E8C1635F85E9BC30* F0D3F87128A7C4CA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::E8C1635F85E9BC30*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F5628F8349D4A8A6_F9B39777B68F9801_OFFSET))(this, AD0CAFBAFB8B01EA, F0D3F87128A7C4CA);
		}
	};
}
