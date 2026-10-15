#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System { class String; }

#define BJIAFAFAFNE___C__DISPLAYCLASS23_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB79F3E0)
#define BJIAFAFAFNE___C__DISPLAYCLASS23_0___ASYNCSHOWUI_B__0_OFFSET UNITYSDK_OFFSET(0xB7A07A0)

	class BJIAFAFAFNE___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::String* uiName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIAFAFAFNE___C__DISPLAYCLASS23_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __AsyncShowUI_b__0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + BJIAFAFAFNE___C__DISPLAYCLASS23_0___ASYNCSHOWUI_B__0_OFFSET))(this, a1);
		}

	};
