#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPLAYANIM_INVOKE_OFFSET UNITYSDK_OFFSET(0x162300B0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPLAYANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x16230200)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardPlayAnim_TypeDefinitionIndex = 84790;

	class ChessboardPlayAnim
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPLAYANIM__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* performID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPLAYANIM_INVOKE_OFFSET))(this, performID);
		}
	};
}
