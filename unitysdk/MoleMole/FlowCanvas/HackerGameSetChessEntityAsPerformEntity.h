#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class ChessEntity; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMESETCHESSENTITYASPERFORMENTITY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1465A4A0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMESETCHESSENTITYASPERFORMENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1465A520)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameSetChessEntityAsPerformEntity_TypeDefinitionIndex = 83844;

	class HackerGameSetChessEntityAsPerformEntity
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMESETCHESSENTITYASPERFORMENTITY__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::ChessEntity* chessEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMESETCHESSENTITYASPERFORMENTITY_INVOKE_OFFSET))(this, chessEntity);
		}
	};
}
