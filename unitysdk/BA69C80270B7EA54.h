#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A916C3A9658A83A2.h"
#include "unitysdk/E68AA4EB51923C98/EB9070A1F821DCFB.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace ABC::UI { class MonoLocalizedTmp; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define BA69C80270B7EA54_BC627BFA937AF175_OFFSET UNITYSDK_OFFSET(0x18F3DC0)
#define BA69C80270B7EA54_E48C476B2FB0C26F_OFFSET UNITYSDK_OFFSET(0x18F3D30)
#define BA69C80270B7EA54_F76F54D7ED19D7C1_OFFSET UNITYSDK_OFFSET(0x18F3C20)
#define BA69C80270B7EA54_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x18F3B70)
#define BA69C80270B7EA54__CTOR_OFFSET UNITYSDK_OFFSET(0x18F3E70)

inline static constexpr unsigned int BA69C80270B7EA54_TypeDefinitionIndex = 1454;

class BA69C80270B7EA54 : public ::A916C3A9658A83A2
{
public:
	::System::Void BC627BFA937AF175(::UnityEngine::Vector2 BFDC0BA71944D9AA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BA69C80270B7EA54_BC627BFA937AF175_OFFSET))(this, BFDC0BA71944D9AA);
	}

	::System::Void E48C476B2FB0C26F(::UnityEngine::Transform* EFE497ABF6BF98D8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + BA69C80270B7EA54_E48C476B2FB0C26F_OFFSET))(this, EFE497ABF6BF98D8);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BA69C80270B7EA54_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void F76F54D7ED19D7C1(::E68AA4EB51923C98::EB9070A1F821DCFB FD499F2ABAA4019F, ::UnityEngine::UI::Image* F49848274A97D1B6, ::ABC::UI::MonoLocalizedTmp* FA8DF855665F97B4, ::ABC::UI::MonoLocalizedTmp* FB10B3C1B689ECC9)
	{
		return ((::System::Void(*)(::PVOID, ::E68AA4EB51923C98::EB9070A1F821DCFB, ::UnityEngine::UI::Image*, ::ABC::UI::MonoLocalizedTmp*, ::ABC::UI::MonoLocalizedTmp*))((::PBYTE)hIl2Cpp + BA69C80270B7EA54_F76F54D7ED19D7C1_OFFSET))(this, FD499F2ABAA4019F, F49848274A97D1B6, FA8DF855665F97B4, FB10B3C1B689ECC9);
	}

	::System::Void _ctor(::UnityEngine::GameObject* A6BEFB09A5DF1AF7, ::UnityEngine::RectTransform* F9E6A5ABE3F78299)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + BA69C80270B7EA54__CTOR_OFFSET))(this, A6BEFB09A5DF1AF7, F9E6A5ABE3F78299);
	}
};
