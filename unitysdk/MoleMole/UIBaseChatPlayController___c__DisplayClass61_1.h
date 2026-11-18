#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::GalGame { class BranchItem; }

#define MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS61_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18D351C0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS61_1__PROCESSCONDITION_B__1_OFFSET UNITYSDK_OFFSET(0x18D351D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseChatPlayController___c__DisplayClass61_1_TypeDefinitionIndex = 85910;

	template <typename T>
	class UIBaseChatPlayController___c__DisplayClass61_1 : public ::System::Object
	{
	public:
		::System::UInt32 partnerLevel; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS61_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _ProcessCondition_b__1(::MoleMole::GalGame::BranchItem* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::BranchItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS61_1__PROCESSCONDITION_B__1_OFFSET))(this, item);
		}
	};
}
