#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CAFPCPPDJOJ;
namespace MoleMole::GalGame { class GalSwitchPoseRelatedParam; }
namespace System { class String; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS41_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19C26FA0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS41_1__PLAYARGUEHEALTHCHANGENODE_B__2_OFFSET UNITYSDK_OFFSET(0x19C26FB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass41_1_TypeDefinitionIndex = 44817;

	template <typename T>
	class UIGalgamePageController___c__DisplayClass41_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::String* poseKey; // 0x18
		::System::String* facialKey; // 0x20
		::MoleMole::GalGame::GalSwitchPoseRelatedParam* switchPoseRelatedParam; // 0x28
		::CAFPCPPDJOJ* capturedSetting; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS41_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayArgueHealthChangeNode_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS41_1__PLAYARGUEHEALTHCHANGENODE_B__2_OFFSET))(this);
		}
	};
}
