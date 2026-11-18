#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ICCAAOAHBOO;
namespace MoleMole { class UIGalgamePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS142_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1803CFE0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS142_0__PLAYSHOW3DMODELNODE_B__0_OFFSET UNITYSDK_OFFSET(0x1803CFF0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS142_0__PLAYSHOW3DMODELNODE_B__1_OFFSET UNITYSDK_OFFSET(0x1803D4A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass142_0_TypeDefinitionIndex = 44760;

	class UIGalgamePageController___c__DisplayClass142_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::ICCAAOAHBOO* show3DModelNode; // 0x18
		::MoleMole::UIGalgamePageController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS142_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayShow3DModelNode_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS142_0__PLAYSHOW3DMODELNODE_B__0_OFFSET))(this);
		}

		::System::Void _PlayShow3DModelNode_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS142_0__PLAYSHOW3DMODELNODE_B__1_OFFSET))(this);
		}
	};
}
