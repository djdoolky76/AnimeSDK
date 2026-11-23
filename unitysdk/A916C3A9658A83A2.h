#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/B958571647EA6D1E.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace ABC::UI { class MonoTipHightController; }
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define A916C3A9658A83A2_A16C8ED92C989C9B_OFFSET UNITYSDK_OFFSET(0x1E96F30)
#define A916C3A9658A83A2_A229EF802AB183ED_OFFSET UNITYSDK_OFFSET(0x1E96E10)
#define A916C3A9658A83A2_AD98C5DB8B48FA09_OFFSET UNITYSDK_OFFSET(0x1E96ED0)
#define A916C3A9658A83A2_BF4EEFA752089CA2_OFFSET UNITYSDK_OFFSET(0x1E969F0)
#define A916C3A9658A83A2_EE74B3A8FC4A940E_OFFSET UNITYSDK_OFFSET(0x1E96990)
#define A916C3A9658A83A2_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x1E968D0)
#define A916C3A9658A83A2__CTOR_OFFSET UNITYSDK_OFFSET(0x1E96FD0)

inline static constexpr unsigned int A916C3A9658A83A2_TypeDefinitionIndex = 6717;

class A916C3A9658A83A2 : public ::System::Object
{
public:
	::UnityEngine::GameObject* AD0A743005102449; // 0x10
	::ABC::UI::MonoUIAutoView* AE442F7D881522D8; // 0x18
	::UnityEngine::RectTransform* E2AF587283A183ED; // 0x20
	::ABC::UI::MonoTipHightController* AAAF3D5A28865036; // 0x28
	::UnityEngine::RectTransform* E37C591F45E5A5B8; // 0x30
	::UnityEngine::Animation* EBECCB6DC301ED9B; // 0x38
	::E68AA4EB51923C98::B958571647EA6D1E F2F545E4F3C587D4; // 0x40

	::System::Void _ctor(::UnityEngine::GameObject* A6BEFB09A5DF1AF7, ::UnityEngine::RectTransform* F9E6A5ABE3F78299)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + A916C3A9658A83A2__CTOR_OFFSET))(this, A6BEFB09A5DF1AF7, F9E6A5ABE3F78299);
	}

	::System::Void AD98C5DB8B48FA09(::E68AA4EB51923C98::B958571647EA6D1E AC0416C63E289832)
	{
		return ((::System::Void(*)(::PVOID, ::E68AA4EB51923C98::B958571647EA6D1E))((::PBYTE)hIl2Cpp + A916C3A9658A83A2_AD98C5DB8B48FA09_OFFSET))(this, AC0416C63E289832);
	}

	::System::Void BF4EEFA752089CA2(::UnityEngine::Vector3 A7D010719A57D5B4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + A916C3A9658A83A2_BF4EEFA752089CA2_OFFSET))(this, A7D010719A57D5B4);
	}

	::System::Boolean EE74B3A8FC4A940E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + A916C3A9658A83A2_EE74B3A8FC4A940E_OFFSET))(this);
	}

	::System::Void A229EF802AB183ED(::System::Boolean EDFDFC658E8C1129)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + A916C3A9658A83A2_A229EF802AB183ED_OFFSET))(this, EDFDFC658E8C1129);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A916C3A9658A83A2_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void A16C8ED92C989C9B(::System::Boolean A450CAA3C0C5E2B4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + A916C3A9658A83A2_A16C8ED92C989C9B_OFFSET))(this, A450CAA3C0C5E2B4);
	}
};
