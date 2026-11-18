#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSHOWHOLLOWSKILLBUTTON_INVOKE_OFFSET UNITYSDK_OFFSET(0x139D2460)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSHOWHOLLOWSKILLBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x139D2690)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardShowHollowSkillButton_TypeDefinitionIndex = 44704;

	class ChessboardShowHollowSkillButton
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSHOWHOLLOWSKILLBUTTON__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean a)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSHOWHOLLOWSKILLBUTTON_INVOKE_OFFSET))(this, a);
		}
	};
}
