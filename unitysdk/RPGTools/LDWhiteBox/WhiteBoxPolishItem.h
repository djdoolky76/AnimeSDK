#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/LDWhiteBox/PolishItemKind.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class KHDKLIANAKD;
namespace System { class String; }

#define RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xE8961C0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xE895EE0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM_GET_KIND_OFFSET UNITYSDK_OFFSET(0xE895EC0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM_READITEM_OFFSET UNITYSDK_OFFSET(0xE896000)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xE895EF0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM_SET_KIND_OFFSET UNITYSDK_OFFSET(0xE895ED0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM_STOREITEM_OFFSET UNITYSDK_OFFSET(0xE895F00)

namespace RPGTools::LDWhiteBox
{
	inline static constexpr unsigned int WhiteBoxPolishItem_TypeDefinitionIndex = 48956;

	class WhiteBoxPolishItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPGTools::LDWhiteBox::PolishItemKind _kind; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* _displayName; // 0x20
		::System::String* _serializedItem; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM_CTOR_OFFSET))(this);
		}

		::RPGTools::LDWhiteBox::PolishItemKind get_Kind()
		{
			return ((::RPGTools::LDWhiteBox::PolishItemKind(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM_GET_KIND_OFFSET))(this);
		}

		::System::Void set_Kind(::RPGTools::LDWhiteBox::PolishItemKind a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::LDWhiteBox::PolishItemKind))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM_SET_KIND_OFFSET))(this, a1);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_DisplayName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM_SET_DISPLAYNAME_OFFSET))(this, a1);
		}

		::System::Void StoreItem(::KHDKLIANAKD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHDKLIANAKD*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM_STOREITEM_OFFSET))(this, a1);
		}

		::KHDKLIANAKD* ReadItem()
		{
			return ((::KHDKLIANAKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM_READITEM_OFFSET))(this);
		}

	};
}
