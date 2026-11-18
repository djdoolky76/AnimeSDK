#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSETGLOBALRTPC_INVOKE_OFFSET UNITYSDK_OFFSET(0x139D20F0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSETGLOBALRTPC_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x139D22A0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSETGLOBALRTPC__CTOR_OFFSET UNITYSDK_OFFSET(0x139D23C0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSETGLOBALRTPC___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x139D2450)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardSetGlobalRTPC_TypeDefinitionIndex = 47204;

	class ChessboardSetGlobalRTPC
	{
	public:
		::System::String* _rtpcName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSETGLOBALRTPC__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* rtpcName, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSETGLOBALRTPC_INVOKE_OFFSET))(this, rtpcName, value);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSETGLOBALRTPC_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSETGLOBALRTPC___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
