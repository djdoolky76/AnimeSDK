#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CAFPCPPDJOJ;
namespace MoleMole::GalGame { class GalSwitchPoseRelatedParam; }
namespace System { class String; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS33_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1893CC00)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS33_1__PLAYARGUESTARTNODE_B__6_OFFSET UNITYSDK_OFFSET(0x1893CC10)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass33_1_TypeDefinitionIndex = 44794;

	template <typename T>
	class UIGalgamePageController___c__DisplayClass33_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::MoleMole::GalGame::GalSwitchPoseRelatedParam* switchPoseRelatedParam; // 0x18
		::CAFPCPPDJOJ* capturedSetting; // 0x20
		::System::String* facialKey; // 0x28
		::System::String* poseKey; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS33_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayArgueStartNode_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS33_1__PLAYARGUESTARTNODE_B__6_OFFSET))(this);
		}
	};
}
