#pragma once
#include "unitysdk/unitysdk.h"

namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define BFB7DAA37233F23A_A002DD0849D03599_OFFSET UNITYSDK_OFFSET(0x1808180)
#define BFB7DAA37233F23A_A48BBCC9E86F3094_OFFSET UNITYSDK_OFFSET(0x1807F30)
#define BFB7DAA37233F23A_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1807FB0)
#define BFB7DAA37233F23A_F401F2C100C04D3F_OFFSET UNITYSDK_OFFSET(0x18082E0)
#define BFB7DAA37233F23A_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1808130)
#define BFB7DAA37233F23A__CTOR_OFFSET UNITYSDK_OFFSET(0x1808420)

inline static constexpr unsigned int BFB7DAA37233F23A_TypeDefinitionIndex = 1051;

class BFB7DAA37233F23A
{
public:
	::System::String* B489F91003BF8BC5; // 0x90
	::UnityEngine::RectTransform* A15CB919363CA9BF; // 0x98
	::UnityEngine::RectTransform* E2286D131782C365; // 0xA0
	::ABC::UI::MonoLocalizedTmp* E627CD29EF0377E4; // 0xA8

	::System::Void F401F2C100C04D3F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFB7DAA37233F23A_F401F2C100C04D3F_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + BFB7DAA37233F23A_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void A002DD0849D03599(::System::UInt32 F5AEFA05C9F71B82)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BFB7DAA37233F23A_A002DD0849D03599_OFFSET))(this, F5AEFA05C9F71B82);
	}

	::System::Void A48BBCC9E86F3094(::System::String* B59A3BA750060A27)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BFB7DAA37233F23A_A48BBCC9E86F3094_OFFSET))(this, B59A3BA750060A27);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFB7DAA37233F23A_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFB7DAA37233F23A__CTOR_OFFSET))(this);
	}
};
