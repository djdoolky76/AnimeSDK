#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CAFPCPPDJOJ;
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS537_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18E45FA0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS537_1__PLAYNPCFADEOUT_B__1_OFFSET UNITYSDK_OFFSET(0x18E45FB0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS537_1__PLAYNPCFADEOUT_B__2_OFFSET UNITYSDK_OFFSET(0x18E45FF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass537_1_TypeDefinitionIndex = 44740;

	template <typename T>
	class UIGalgamePageController___c__DisplayClass537_1 : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* stageNodeRoot; // 0x10
		::System::Object* CS___8__locals1; // 0x18
		::CAFPCPPDJOJ* avatarSetting; // 0x20
		::UnityEngine::RectTransform* whiteBGRoot; // 0x28
		::System::Int32 location; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS537_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeOut_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS537_1__PLAYNPCFADEOUT_B__1_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeOut_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS537_1__PLAYNPCFADEOUT_B__2_OFFSET))(this);
		}
	};
}
