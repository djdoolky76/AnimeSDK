#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/LDWhiteBox/PolishItemKind.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class KHDKLIANAKD;
namespace System { class String; }

#define RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xE8A07F0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xE8A0510)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM_GET_KIND_OFFSET UNITYSDK_OFFSET(0xE8A04F0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM_READITEM_OFFSET UNITYSDK_OFFSET(0xE8A0630)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xE8A0520)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM_SET_KIND_OFFSET UNITYSDK_OFFSET(0xE8A0500)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM_STOREITEM_OFFSET UNITYSDK_OFFSET(0xE8A0530)

namespace RPGTools::LDWhiteBox
{
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
