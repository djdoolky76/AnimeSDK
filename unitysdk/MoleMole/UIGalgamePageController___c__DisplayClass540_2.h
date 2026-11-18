#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CAFPCPPDJOJ;
class GCIMMDDIFBJ;
namespace UnityEngine { class RectTransform; }
namespace miHoYoEmotion { class EmoSync; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS540_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1803E250)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS540_2__PLAYNPCFADEACTIONS_B__1_OFFSET UNITYSDK_OFFSET(0x1803E260)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS540_2__PLAYNPCFADEACTIONS_B__2_OFFSET UNITYSDK_OFFSET(0x1803E2D0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS540_2__PLAYNPCFADEACTIONS_B__3_OFFSET UNITYSDK_OFFSET(0x1803E450)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass540_2_TypeDefinitionIndex = 44790;

	template <typename T1, typename T2>
	class UIGalgamePageController___c__DisplayClass540_2 : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* stageNodeRoot; // 0x10
		::UnityEngine::RectTransform* whiteBGRoot; // 0x18
		::System::Object* CS___8__locals2; // 0x20
		::CAFPCPPDJOJ* avatarSetting; // 0x28
		::miHoYoEmotion::EmoSync* emoSync; // 0x30
		::GCIMMDDIFBJ* moveOutStageAnim; // 0x38
		::System::Int32 location; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS540_2__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS540_2__PLAYNPCFADEACTIONS_B__1_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS540_2__PLAYNPCFADEACTIONS_B__2_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS540_2__PLAYNPCFADEACTIONS_B__3_OFFSET))(this);
		}
	};
}
