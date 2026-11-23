#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"
#include "unitysdk/AD61077CFCBEFAEA.h"

class E6350CA2988BAC74;
namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine::UI { class Image; }

#define A2738431DF20EF34_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1A76FC0)
#define A2738431DF20EF34_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1A775D0)
#define A2738431DF20EF34_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1A772A0)
#define A2738431DF20EF34_F712181A6BF84A1C_OFFSET UNITYSDK_OFFSET(0x1A774A0)
#define A2738431DF20EF34_F8F7FA0400E1D9FA_OFFSET UNITYSDK_OFFSET(0x1A77440)
#define A2738431DF20EF34_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x1A77300)
#define A2738431DF20EF34_FE7E324B085FECC6_OFFSET UNITYSDK_OFFSET(0x1A773D0)
#define A2738431DF20EF34_FFE59D93BEA6E2CA_OFFSET UNITYSDK_OFFSET(0x1A77500)
#define A2738431DF20EF34__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int A2738431DF20EF34_TypeDefinitionIndex = 1818;

class A2738431DF20EF34 : public ::EFC4AEA2121EC272
{
public:
	::System::Int32 A02AF894637B3DAE; // 0x80
	::System::Byte _padding0[0x4];
	::System::Action_1<::System::Int32>* FCCD2716B1B4CDF5; // 0x88
	::ABC::UI::MonoButton* F1A82384650FFB6C; // 0x90
	::E6350CA2988BAC74* FB16980EE0454AC6; // 0x98
	::ABC::UI::MonoPrefabLoader* B89D48E474D8AD4E; // 0xA0
	::UnityEngine::Canvas* A5C3F2CB449C245F; // 0xA8
	::UnityEngine::UI::Image* A288C6EF90A27882; // 0xB0
	::ABC::UI::MonoLocalizedTmp* AD9B2687D5672FE1; // 0xB8
	::ABC::UI::MonoLocalizedTmp* F8A1364C7521DA0B; // 0xC0

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + A2738431DF20EF34_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void F712181A6BF84A1C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A2738431DF20EF34_F712181A6BF84A1C_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A2738431DF20EF34__CTOR_OFFSET))(this);
	}

	::System::Void FE7E324B085FECC6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A2738431DF20EF34_FE7E324B085FECC6_OFFSET))(this);
	}

	::System::Void FFE59D93BEA6E2CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A2738431DF20EF34_FFE59D93BEA6E2CA_OFFSET))(this);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A2738431DF20EF34_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A2738431DF20EF34_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void EC3033C0485522FB(::System::Int32 B48C66E5FB2449C6, ::AD61077CFCBEFAEA B383F0530E7FBDBD, ::System::Boolean E9AC3977D356A1A7, ::System::Action_1<::System::Int32>* FABBF4F55603A392)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::AD61077CFCBEFAEA, ::System::Boolean, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + A2738431DF20EF34_EC3033C0485522FB_OFFSET))(this, B48C66E5FB2449C6, B383F0530E7FBDBD, E9AC3977D356A1A7, FABBF4F55603A392);
	}

	::System::Void F8F7FA0400E1D9FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A2738431DF20EF34_F8F7FA0400E1D9FA_OFFSET))(this);
	}
};
