#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

class E6350CA2988BAC74;
namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }

#define A335796A39A57418_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x218CBD0)
#define A335796A39A57418_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x218CDA0)
#define A335796A39A57418__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int A335796A39A57418_TypeDefinitionIndex = 8793;

class A335796A39A57418 : public ::EFC4AEA2121EC272
{
public:
	::ABC::UI::MonoButton* E6B32FFE003212BC; // 0x80
	::E6350CA2988BAC74* FB16980EE0454AC6; // 0x88
	::ABC::UI::MonoLocalizedTmp* AFF15E1EE56A895C; // 0x90

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A335796A39A57418_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + A335796A39A57418_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A335796A39A57418__CTOR_OFFSET))(this);
	}
};
