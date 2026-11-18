#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CAFPCPPDJOJ;
namespace MoleMole::GalGame { class GalSwitchPoseRelatedParam; }
namespace System { class String; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS42_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19C276C0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS42_1__PLAYARGUESETTLENODE_B__8_OFFSET UNITYSDK_OFFSET(0x19C276D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass42_1_TypeDefinitionIndex = 44754;

	template <typename T>
	class UIGalgamePageController___c__DisplayClass42_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::CAFPCPPDJOJ* capturedSetting; // 0x18
		::System::String* facialKey; // 0x20
		::System::String* poseKey; // 0x28
		::MoleMole::GalGame::GalSwitchPoseRelatedParam* switchPoseRelatedParam; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS42_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayArgueSettleNode_b__8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS42_1__PLAYARGUESETTLENODE_B__8_OFFSET))(this);
		}
	};
}
