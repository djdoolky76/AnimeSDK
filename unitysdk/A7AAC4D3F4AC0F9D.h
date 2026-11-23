#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI { class Image; }

#define A7AAC4D3F4AC0F9D_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x181EA60)
#define A7AAC4D3F4AC0F9D_BCFB96ADF1BDBB2E_OFFSET UNITYSDK_OFFSET(0x181EC70)
#define A7AAC4D3F4AC0F9D_EC22F59F2C588175_OFFSET UNITYSDK_OFFSET(0x181F150)
#define A7AAC4D3F4AC0F9D_EF751ABE3C449E3F_OFFSET UNITYSDK_OFFSET(0x181EE00)
#define A7AAC4D3F4AC0F9D_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x181EC20)
#define A7AAC4D3F4AC0F9D_FAC98672FB533FA7_OFFSET UNITYSDK_OFFSET(0x181F2B0)
#define A7AAC4D3F4AC0F9D_FFE59D93BEA6E2CA_OFFSET UNITYSDK_OFFSET(0x181EF20)
#define A7AAC4D3F4AC0F9D__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int A7AAC4D3F4AC0F9D_TypeDefinitionIndex = 1089;

class A7AAC4D3F4AC0F9D : public ::EFC4AEA2121EC272
{
public:
	static ::System::Single* StaticGet_E32A22D60CBDB732()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(A7AAC4D3F4AC0F9D_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::UInt32 E971E24AD73D201C; // 0x80
	::System::Byte _padding0[0x4];
	::System::Action_1<::System::Boolean>* A077EF3C5C4AC22B; // 0x88
	::System::Boolean A9192640EE530BF1; // 0x90
	::System::Byte _padding1[0x3];
	::System::Single B47A6B5C0967DDFA; // 0x94
	::ABC::UI::MonoButton* BF1C7556EB693074; // 0x98
	::UnityEngine::UI::Image* F6E3E0D71841DDF0; // 0xA0
	::UnityEngine::UI::Image* A288C6EF90A27882; // 0xA8
	::ABC::UI::MonoLocalizedTmp* FC25C9B4B3889C6B; // 0xB0

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + A7AAC4D3F4AC0F9D_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void FFE59D93BEA6E2CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7AAC4D3F4AC0F9D_FFE59D93BEA6E2CA_OFFSET))(this);
	}

	::System::Void FAC98672FB533FA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7AAC4D3F4AC0F9D_FAC98672FB533FA7_OFFSET))(this);
	}

	::System::Void EF751ABE3C449E3F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7AAC4D3F4AC0F9D_EF751ABE3C449E3F_OFFSET))(this);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7AAC4D3F4AC0F9D_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void EC22F59F2C588175(::System::Single EB5670302F34D4B7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + A7AAC4D3F4AC0F9D_EC22F59F2C588175_OFFSET))(this, EB5670302F34D4B7);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7AAC4D3F4AC0F9D__CTOR_OFFSET))(this);
	}

	::System::Void BCFB96ADF1BDBB2E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7AAC4D3F4AC0F9D_BCFB96ADF1BDBB2E_OFFSET))(this);
	}
};
