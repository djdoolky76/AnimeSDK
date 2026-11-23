#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EE33D561C3CAF198.h"

class B916BB7AD5B79707;
class F59B688F7CEDC9BA;
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define AF6BE53BA1015CF2_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1880CD0)
#define AF6BE53BA1015CF2_BFCEE111278C4278_OFFSET UNITYSDK_OFFSET(0x1880FA0)
#define AF6BE53BA1015CF2_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1880F50)
#define AF6BE53BA1015CF2__CTOR_OFFSET UNITYSDK_OFFSET(0x1881330)

inline static constexpr unsigned int AF6BE53BA1015CF2_TypeDefinitionIndex = 157;

class AF6BE53BA1015CF2 : public ::EE33D561C3CAF198
{
public:
	::System::Collections::Generic::List_1<::B916BB7AD5B79707*>* FAFB7481D1B5DF21; // 0x88
	::ABC::UI::MonoPrefabLoader* FE91145832D1C8C9; // 0x90
	::UnityEngine::RectTransform* A5CB6E7E6054F9AE; // 0x98
	::UnityEngine::RectTransform* A4D9F93199BC3B99; // 0xA0
	::UnityEngine::RectTransform* AFC362772B093525; // 0xA8
	::UnityEngine::RectTransform* B0F3A9BE5DD9A7C8; // 0xB0
	::UnityEngine::RectTransform* FFEE139B411DDEC5; // 0xB8
	::ABC::UI::MonoLocalizedTmp* F2787C31B1D3683F; // 0xC0

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AF6BE53BA1015CF2_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + AF6BE53BA1015CF2_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void BFCEE111278C4278(::F59B688F7CEDC9BA* B29880F033C1F232)
	{
		return ((::System::Void(*)(::PVOID, ::F59B688F7CEDC9BA*))((::PBYTE)hIl2Cpp + AF6BE53BA1015CF2_BFCEE111278C4278_OFFSET))(this, B29880F033C1F232);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AF6BE53BA1015CF2__CTOR_OFFSET))(this);
	}
};
