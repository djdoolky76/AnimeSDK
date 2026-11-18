#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS180_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17595DC0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS180_1__GENERATEWHITESCREENSHAKEPLAYITEM_B__1_OFFSET UNITYSDK_OFFSET(0x17595DD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass180_1_TypeDefinitionIndex = 44755;

	template <typename T>
	class UIGalgamePageController___c__DisplayClass180_1 : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* whiteBGRoot; // 0x10
		::System::Object* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS180_1__CTOR_OFFSET))(this);
		}

		::System::Void _GenerateWhiteScreenShakePlayItem_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS180_1__GENERATEWHITESCREENSHAKEPLAYITEM_B__1_OFFSET))(this);
		}
	};
}
