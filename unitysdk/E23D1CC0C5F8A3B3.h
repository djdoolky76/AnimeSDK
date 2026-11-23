#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"
#include "unitysdk/AD61077CFCBEFAEA.h"

class A657777238355B73;
class E6350CA2988BAC74;
class F97A61CEC64381FA;
namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { class Action; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }

#define E23D1CC0C5F8A3B3_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x17386A0)
#define E23D1CC0C5F8A3B3_B950FF9810FC6646_OFFSET UNITYSDK_OFFSET(0x17385D0)
#define E23D1CC0C5F8A3B3_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1738B30)
#define E23D1CC0C5F8A3B3_F52E921108621A5A_OFFSET UNITYSDK_OFFSET(0x1738AA0)
#define E23D1CC0C5F8A3B3_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1738A40)
#define E23D1CC0C5F8A3B3__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int E23D1CC0C5F8A3B3_TypeDefinitionIndex = 730;

class E23D1CC0C5F8A3B3 : public ::EFC4AEA2121EC272
{
public:
	::System::Boolean A7141134EF50D0E2; // 0x80
	::System::Byte _padding0[0x7];
	::F97A61CEC64381FA* E3D9CB9CBE05CC2A; // 0x88
	::System::Action* A944C5D7F0AC88E7; // 0x90
	::ABC::UI::MonoButton* F3343F2199F9BED3; // 0x98
	::E6350CA2988BAC74* A4B1F0B6CB94EAD6; // 0xA0
	::UnityEngine::Animator* A0E6CFD7B3DE7F14; // 0xA8
	::UnityEngine::Canvas* A5C3F2CB449C245F; // 0xB0
	::ABC::UI::MonoPrefabLoader* E917C818ABC29236; // 0xB8
	::ABC::UI::MonoLocalizedTmp* ED55DDA4ADCD3702; // 0xC0
	::ABC::UI::MonoLocalizedTmp* B544C31DA5CE7E54; // 0xC8
	::ABC::UI::MonoButton* A534F54BBE4358D8; // 0xD0
	::UnityEngine::RectTransform* BE8B00C796036193; // 0xD8
	::UnityEngine::RectTransform* E6B0F1EE8F3233F8; // 0xE0

	::System::Void EC3033C0485522FB(::AD61077CFCBEFAEA E7F13465F7E064E1, ::System::Int32 F53DA63A1E4F0781, ::System::Int32 ED613CD6E7C32D6C, ::System::Boolean F13D2760A2F80EC6, ::A657777238355B73* F221EA8A5DAB1685, ::System::Action* E528421ADC6FB06B)
	{
		return ((::System::Void(*)(::PVOID, ::AD61077CFCBEFAEA, ::System::Int32, ::System::Int32, ::System::Boolean, ::A657777238355B73*, ::System::Action*))((::PBYTE)hIl2Cpp + E23D1CC0C5F8A3B3_EC3033C0485522FB_OFFSET))(this, E7F13465F7E064E1, F53DA63A1E4F0781, ED613CD6E7C32D6C, F13D2760A2F80EC6, F221EA8A5DAB1685, E528421ADC6FB06B);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E23D1CC0C5F8A3B3_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void B950FF9810FC6646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E23D1CC0C5F8A3B3_B950FF9810FC6646_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + E23D1CC0C5F8A3B3_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void F52E921108621A5A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E23D1CC0C5F8A3B3_F52E921108621A5A_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E23D1CC0C5F8A3B3__CTOR_OFFSET))(this);
	}
};
