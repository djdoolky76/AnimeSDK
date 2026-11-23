#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define A777EE4D7EC7A831_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1D2D010)
#define A777EE4D7EC7A831_E26E9A0AB176D3A0_OFFSET UNITYSDK_OFFSET(0x1D2D2B0)
#define A777EE4D7EC7A831_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1D2D190)
#define A777EE4D7EC7A831_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x1D2D1E0)
#define A777EE4D7EC7A831__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int A777EE4D7EC7A831_TypeDefinitionIndex = 9970;

class A777EE4D7EC7A831 : public ::EFC4AEA2121EC272
{
public:
	::System::UInt32 E581D1C14E58DD26; // 0x80
	::System::Boolean E6D4EC30D627133D; // 0x84
	::System::Byte _padding0[0x3];
	::System::Action_2<::System::UInt32, ::System::Boolean>* A651F03521332C06; // 0x88
	::ABC::UI::MonoButton* E381020BA62BF8C7; // 0x90
	::ABC::UI::MonoLocalizedTmp* FBFDE0EDDA91CA9A; // 0x98
	::ABC::UI::MonoLocalizedTmp* AFF15E1EE56A895C; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A777EE4D7EC7A831__CTOR_OFFSET))(this);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A777EE4D7EC7A831_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + A777EE4D7EC7A831_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A777EE4D7EC7A831_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void E26E9A0AB176D3A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A777EE4D7EC7A831_E26E9A0AB176D3A0_OFFSET))(this);
	}
};
