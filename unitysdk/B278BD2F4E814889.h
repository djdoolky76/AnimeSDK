#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

class E6350CA2988BAC74;
namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoScrollRect; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { class Action; }

#define B278BD2F4E814889_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x21BB8F0)
#define B278BD2F4E814889_BF977B1AB5A7D485_OFFSET UNITYSDK_OFFSET(0x21BBD80)
#define B278BD2F4E814889_E33EEF5071D35A8E_OFFSET UNITYSDK_OFFSET(0x21BBD20)
#define B278BD2F4E814889_E7C708D1AD734A2A_OFFSET UNITYSDK_OFFSET(0x21BBF40)
#define B278BD2F4E814889_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x21BBCC0)
#define B278BD2F4E814889_FFE59D93BEA6E2CA_OFFSET UNITYSDK_OFFSET(0x21BBDF0)
#define B278BD2F4E814889__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int B278BD2F4E814889_TypeDefinitionIndex = 8901;

class B278BD2F4E814889 : public ::EFC4AEA2121EC272
{
public:
	::System::Action* E7CB567A44E965AF; // 0x80
	::ABC::UI::MonoButton* F9FEF071718D417A; // 0x88
	::ABC::UI::MonoUIAutoView* E7EA1B9E45797D50; // 0x90
	::ABC::UI::MonoButton* AF53BCD55454FCB2; // 0x98
	::ABC::UI::MonoButton* A1EE77D70244792B; // 0xA0
	::ABC::UI::MonoUIAutoView* E79BC72F8360855E; // 0xA8
	::ABC::UI::MonoPrefabLoader* FD047A4484A13BDC; // 0xB0
	::E6350CA2988BAC74* BDAC7C9FB85579F4; // 0xB8
	::ABC::UI::MonoScrollRect* EA9E8334953A3AEC; // 0xC0
	::ABC::UI::MonoLocalizedTmp* AD45979F9BE1F591; // 0xC8
	::ABC::UI::MonoPrefabLoader* E888E36CDB6F1930; // 0xD0
	::ABC::UI::MonoPrefabLoader* A17D34D829CFB532; // 0xD8

	::System::Void FFE59D93BEA6E2CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B278BD2F4E814889_FFE59D93BEA6E2CA_OFFSET))(this);
	}

	::System::Void E7C708D1AD734A2A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B278BD2F4E814889_E7C708D1AD734A2A_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + B278BD2F4E814889_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B278BD2F4E814889_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void E33EEF5071D35A8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B278BD2F4E814889_E33EEF5071D35A8E_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B278BD2F4E814889__CTOR_OFFSET))(this);
	}

	::System::Void BF977B1AB5A7D485()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B278BD2F4E814889_BF977B1AB5A7D485_OFFSET))(this);
	}
};
