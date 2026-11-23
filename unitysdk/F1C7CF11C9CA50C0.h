#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

class E6350CA2988BAC74;
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }

#define F1C7CF11C9CA50C0_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1B2A250)
#define F1C7CF11C9CA50C0_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1B2A520)
#define F1C7CF11C9CA50C0_FFE59D93BEA6E2CA_OFFSET UNITYSDK_OFFSET(0x1B2A580)
#define F1C7CF11C9CA50C0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2A750)

inline static constexpr unsigned int F1C7CF11C9CA50C0_TypeDefinitionIndex = 2103;

class F1C7CF11C9CA50C0 : public ::EFC4AEA2121EC272
{
public:
	::System::Single EED0DFDA8B4E5D8D; // 0x80
	::System::Single FDBCE6ABA05832C8; // 0x84
	::System::Single F698938F5AF80C82; // 0x88
	::System::Single F436BFE16B6DAF90; // 0x8C
	::System::Single E30B0537D6268869; // 0x90
	::System::Single A42E162AC2227F7A; // 0x94
	::System::Single A6F75362A56B26CD; // 0x98
	::System::Single A16D77F6B9ECC3DF; // 0x9C
	::System::Single A6322F5EAB24C603; // 0xA0
	::System::Single B2BB6EFE0E88DAB6; // 0xA4
	::System::Single FE59C9A65E7E885F; // 0xA8
	::System::Single A6766809A2D062C0; // 0xAC
	::UnityEngine::Canvas* FFBF0D1E4AF184F1; // 0xB0
	::UnityEngine::RectTransform* A8D4D3661747B217; // 0xB8
	::E6350CA2988BAC74* ABE139054DC43E63; // 0xC0
	::ABC::UI::MonoLocalizedTmp* E4CB4ED03A1E851A; // 0xC8
	::ABC::UI::MonoLocalizedTmp* AFF15E1EE56A895C; // 0xD0
	::ABC::UI::MonoLocalizedTmp* A49AFE6431DE496E; // 0xD8
	::ABC::UI::MonoLocalizedTmp* BADB39DA128D464D; // 0xE0

	::System::Void FFE59D93BEA6E2CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F1C7CF11C9CA50C0_FFE59D93BEA6E2CA_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + F1C7CF11C9CA50C0_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F1C7CF11C9CA50C0_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F1C7CF11C9CA50C0__CTOR_OFFSET))(this);
	}
};
