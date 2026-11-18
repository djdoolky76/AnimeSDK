#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNIMEBJJNNP.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWindowController; }

#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_BIGTVUIHELPER_OPENUI_OFFSET UNITYSDK_OFFSET(0x187CA590)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessboard3DModelController_BigTvUIHelper_TypeDefinitionIndex = 43485;

	class UIHollowChessboard3DModelController_BigTvUIHelper : public ::System::Object
	{
	public:
		static ::MoleMole::UIWindowController* OpenUI(::LNIMEBJJNNP type)
		{
			return ((::MoleMole::UIWindowController*(*)(::LNIMEBJJNNP))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_BIGTVUIHELPER_OPENUI_OFFSET))(type);
		}
	};
}
