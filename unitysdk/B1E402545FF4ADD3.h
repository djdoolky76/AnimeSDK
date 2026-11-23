#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EE33D561C3CAF198.h"

namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define B1E402545FF4ADD3_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1729810)
#define B1E402545FF4ADD3_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1729A10)
#define B1E402545FF4ADD3_F8FC9ADF746B7795_OFFSET UNITYSDK_OFFSET(0x1729A60)
#define B1E402545FF4ADD3__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int B1E402545FF4ADD3_TypeDefinitionIndex = 757;

class B1E402545FF4ADD3 : public ::EE33D561C3CAF198
{
public:
	::UnityEngine::RectTransform* AE79E04C8FC730C0; // 0x88
	::UnityEngine::RectTransform* A6004FF860E91AE5; // 0x90
	::ABC::UI::MonoLocalizedTmp* F54F6EA41DE781EC; // 0x98
	::ABC::UI::MonoLocalizedTmp* E7682EEB8226CE19; // 0xA0
	::UnityEngine::CanvasGroup* ED0D8655E59BD129; // 0xA8

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + B1E402545FF4ADD3_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B1E402545FF4ADD3_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void F8FC9ADF746B7795()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B1E402545FF4ADD3_F8FC9ADF746B7795_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B1E402545FF4ADD3__CTOR_OFFSET))(this);
	}
};
