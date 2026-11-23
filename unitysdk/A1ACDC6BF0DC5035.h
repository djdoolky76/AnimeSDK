#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

class ED18AA8BF009DBD1;
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define A1ACDC6BF0DC5035_FFE59D93BEA6E2CA_OFFSET UNITYSDK_OFFSET(0x1BC9440)
#define A1ACDC6BF0DC5035__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int A1ACDC6BF0DC5035_TypeDefinitionIndex = 269;

class A1ACDC6BF0DC5035 : public ::EFC4AEA2121EC272
{
public:
	::ABC::UI::MonoUIAutoView* AE442F7D881522D8; // 0x80
	::UnityEngine::UI::Image* B5AE96FC2A425DE7; // 0x88
	::ED18AA8BF009DBD1* F08EF9544FFB84E0; // 0x90
	::UnityEngine::RectTransform* B9CFB7AB550012AB; // 0x98
	::UnityEngine::Canvas* EE99E6AE036E1461; // 0xA0
	::UnityEngine::Transform* A73409F1FD56937A; // 0xA8
	::System::Single F698938F5AF80C82; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A1ACDC6BF0DC5035__CTOR_OFFSET))(this);
	}

	::System::Void FFE59D93BEA6E2CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A1ACDC6BF0DC5035_FFE59D93BEA6E2CA_OFFSET))(this);
	}
};
