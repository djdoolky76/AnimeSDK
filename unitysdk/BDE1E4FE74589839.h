#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

class B916BB7AD5B79707;
class F9780C2983C25814;
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define BDE1E4FE74589839_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x18FFD90)
#define BDE1E4FE74589839_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1900020)
#define BDE1E4FE74589839_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x18FFFD0)
#define BDE1E4FE74589839__CTOR_OFFSET UNITYSDK_OFFSET(0x1900390)

inline static constexpr unsigned int BDE1E4FE74589839_TypeDefinitionIndex = 1468;

class BDE1E4FE74589839 : public ::EFC4AEA2121EC272
{
public:
	::System::Collections::Generic::List_1<::B916BB7AD5B79707*>* FAFB7481D1B5DF21; // 0x80
	::UnityEngine::RectTransform* B9666016F6C1E9CE; // 0x88
	::UnityEngine::RectTransform* EF8E8DE0E4822BE6; // 0x90
	::UnityEngine::RectTransform* B0F3A9BE5DD9A7C8; // 0x98
	::ABC::UI::MonoPrefabLoader* F7E033B639D5845B; // 0xA0
	::ABC::UI::MonoLocalizedTmp* F2787C31B1D3683F; // 0xA8
	::ABC::UI::MonoLocalizedTmp* FAAECA8A12583F90; // 0xB0

	::System::Void EC3033C0485522FB(::F9780C2983C25814* F220A2D27F7C6B6C)
	{
		return ((::System::Void(*)(::PVOID, ::F9780C2983C25814*))((::PBYTE)hIl2Cpp + BDE1E4FE74589839_EC3033C0485522FB_OFFSET))(this, F220A2D27F7C6B6C);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + BDE1E4FE74589839_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDE1E4FE74589839__CTOR_OFFSET))(this);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDE1E4FE74589839_F6A675B119E39F53_OFFSET))(this);
	}
};
