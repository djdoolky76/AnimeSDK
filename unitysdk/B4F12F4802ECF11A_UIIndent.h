#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define B4F12F4802ECF11A_UIINDENT_APPLYTO_OFFSET UNITYSDK_OFFSET(0x1FF8890)
#define B4F12F4802ECF11A_UIINDENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FF8A80)
#define B4F12F4802ECF11A_UIINDENT_GET_BOTTOM_OFFSET UNITYSDK_OFFSET(0x1FF92F0)
#define B4F12F4802ECF11A_UIINDENT_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1FF9350)
#define B4F12F4802ECF11A_UIINDENT_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1FF93B0)
#define B4F12F4802ECF11A_UIINDENT_GET_TOP_OFFSET UNITYSDK_OFFSET(0x1FF9410)
#define B4F12F4802ECF11A_UIINDENT_REVERTBG_OFFSET UNITYSDK_OFFSET(0x1FF8D50)
#define B4F12F4802ECF11A_UIINDENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FF8F60)

inline static constexpr unsigned int B4F12F4802ECF11A_UIIndent_TypeDefinitionIndex = 8172;

struct alignas(4) B4F12F4802ECF11A_UIIndent
{
	::System::Single SafeAreaLeft; // 0x10
	::System::Single SafeAreaRight; // 0x14
	::System::Single SafeAreaTop; // 0x18
	::System::Single SafeAreaBottom; // 0x1C
	::System::Single BlackBarLeft; // 0x20
	::System::Single BlackBarRight; // 0x24
	::System::Single BlackBarTop; // 0x28
	::System::Single BlackBarBottom; // 0x2C

	::System::Single get_Left()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + B4F12F4802ECF11A_UIINDENT_GET_LEFT_OFFSET))(this);
	}

	::System::Single get_Right()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + B4F12F4802ECF11A_UIINDENT_GET_RIGHT_OFFSET))(this);
	}

	::System::Single get_Top()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + B4F12F4802ECF11A_UIINDENT_GET_TOP_OFFSET))(this);
	}

	::System::Single get_Bottom()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + B4F12F4802ECF11A_UIINDENT_GET_BOTTOM_OFFSET))(this);
	}

	::System::Void ApplyTo(::UnityEngine::Transform* AAFDD1623DD3772F, ::System::Boolean BDE01AC7D7F83545)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + B4F12F4802ECF11A_UIINDENT_APPLYTO_OFFSET))(this, AAFDD1623DD3772F, BDE01AC7D7F83545);
	}

	::System::Void RevertBg(::UnityEngine::Transform* AAFDD1623DD3772F)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + B4F12F4802ECF11A_UIINDENT_REVERTBG_OFFSET))(this, AAFDD1623DD3772F);
	}

	/*
	::System::Boolean Equals(::B4F12F4802ECF11A_UIIndent F39A366D3A677E8E)
	{
		return ((::System::Boolean(*)(::PVOID, ::B4F12F4802ECF11A_UIIndent))((::PBYTE)hIl2Cpp + B4F12F4802ECF11A_UIINDENT_EQUALS_OFFSET))(this, F39A366D3A677E8E);
	}
	*/

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + B4F12F4802ECF11A_UIINDENT_TOSTRING_OFFSET))(this);
	}
};
