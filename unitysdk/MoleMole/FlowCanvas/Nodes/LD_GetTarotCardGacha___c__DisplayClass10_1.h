#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelCardOptionsDialogPopWindowController; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA___C__DISPLAYCLASS10_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14AE5DD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA___C__DISPLAYCLASS10_1___ONRECV_B__1_OFFSET UNITYSDK_OFFSET(0x14AE5DE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetTarotCardGacha___c__DisplayClass10_1_TypeDefinitionIndex = 50100;

	template <typename T>
	class LD_GetTarotCardGacha___c__DisplayClass10_1 : public ::System::Object
	{
	public:
		::MoleMole::UIInLevelCardOptionsDialogPopWindowController* ctrl; // 0x10
		::System::Object* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA___C__DISPLAYCLASS10_1__CTOR_OFFSET))(this);
		}

		::System::Void __OnRecv_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA___C__DISPLAYCLASS10_1___ONRECV_B__1_OFFSET))(this);
		}
	};
}
