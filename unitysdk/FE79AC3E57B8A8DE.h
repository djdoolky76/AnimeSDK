#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B10E8C24EEAD1805.h"
#include "unitysdk/UnityEngine/Vector2.h"

class ADF8713CB0CBAE91;
class F83A4119D9D8C3D8;
namespace ABC::UI { class MonoButton; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define FE79AC3E57B8A8DE_B5EED8C1132DF6E6_OFFSET UNITYSDK_OFFSET(0x17988E0)
#define FE79AC3E57B8A8DE_BA3949FB92CCB91C_OFFSET UNITYSDK_OFFSET(0x1798490)
#define FE79AC3E57B8A8DE_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x17981B0)
#define FE79AC3E57B8A8DE_F14BEFCB596EE4D7_OFFSET UNITYSDK_OFFSET(0x1797DD0)
#define FE79AC3E57B8A8DE_FFE59D93BEA6E2CA_OFFSET UNITYSDK_OFFSET(0x1797EB0)
#define FE79AC3E57B8A8DE__CTOR_OFFSET UNITYSDK_OFFSET(0x1699E30)

inline static constexpr unsigned int FE79AC3E57B8A8DE_TypeDefinitionIndex = 870;

class FE79AC3E57B8A8DE : public ::B10E8C24EEAD1805
{
public:
	::UnityEngine::Transform* AE9F1AB6118B6A39; // 0xC0
	::UnityEngine::RectTransform* F4002550DE27A10F; // 0xC8
	::UnityEngine::UI::Image* B5AE96FC2A425DE7; // 0xD0
	::ABC::UI::MonoButton* A534F54BBE4358D8; // 0xD8
	::UnityEngine::GameObject* B22F6ACF45B82710; // 0xE0
	::UnityEngine::GameObject* A0F6A17FBF94CA86; // 0xE8
	::UnityEngine::UI::Image* A4BB316C5FB6B348; // 0xF0
	::System::Boolean BB75C85AC6351E29; // 0xF8

	::System::Void F14BEFCB596EE4D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE79AC3E57B8A8DE_F14BEFCB596EE4D7_OFFSET))(this);
	}

	::System::Void BA3949FB92CCB91C(::UnityEngine::RectTransform* BD2E1253102DFF2E, ::UnityEngine::Vector2 E85F32FEE9448CF0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FE79AC3E57B8A8DE_BA3949FB92CCB91C_OFFSET))(this, BD2E1253102DFF2E, E85F32FEE9448CF0);
	}

	::System::Void FFE59D93BEA6E2CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE79AC3E57B8A8DE_FFE59D93BEA6E2CA_OFFSET))(this);
	}

	::System::Void B5EED8C1132DF6E6(::UnityEngine::RectTransform* BD2E1253102DFF2E, ::UnityEngine::Vector2 E85F32FEE9448CF0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FE79AC3E57B8A8DE_B5EED8C1132DF6E6_OFFSET))(this, BD2E1253102DFF2E, E85F32FEE9448CF0);
	}

	::System::Void EC3033C0485522FB(::F83A4119D9D8C3D8* B54E033D915EE9EE, ::System::Single A421E4784F245CBD, ::System::Single B69D898CDFDD8DF2, ::ADF8713CB0CBAE91* B8C73438FDE5F3F0, ::System::Boolean A18F5745AB604BB6)
	{
		return ((::System::Void(*)(::PVOID, ::F83A4119D9D8C3D8*, ::System::Single, ::System::Single, ::ADF8713CB0CBAE91*, ::System::Boolean))((::PBYTE)hIl2Cpp + FE79AC3E57B8A8DE_EC3033C0485522FB_OFFSET))(this, B54E033D915EE9EE, A421E4784F245CBD, B69D898CDFDD8DF2, B8C73438FDE5F3F0, A18F5745AB604BB6);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE79AC3E57B8A8DE__CTOR_OFFSET))(this);
	}
};
