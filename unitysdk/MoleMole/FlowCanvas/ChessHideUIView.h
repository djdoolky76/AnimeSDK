#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_CHESSHIDEUIVIEW_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B4A6B40)
#define MOLEMOLE_FLOWCANVAS_CHESSHIDEUIVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4A6C50)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessHideUIView_TypeDefinitionIndex = 83766;

	class ChessHideUIView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSHIDEUIVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 pieceIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSHIDEUIVIEW_INVOKE_OFFSET))(this, pieceIndex);
		}
	};
}
