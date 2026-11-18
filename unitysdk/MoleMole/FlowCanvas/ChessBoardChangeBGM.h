#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCHANGEBGM_INVOKE_OFFSET UNITYSDK_OFFSET(0x180D14B0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCHANGEBGM__CTOR_OFFSET UNITYSDK_OFFSET(0x180D16E0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoardChangeBGM_TypeDefinitionIndex = 39987;

	class ChessBoardChangeBGM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCHANGEBGM__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* eventName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCHANGEBGM_INVOKE_OFFSET))(this, eventName);
		}
	};
}
