#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDREQUIREATMOSPHERE_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B30650)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDREQUIREATMOSPHERE__CTOR_OFFSET UNITYSDK_OFFSET(0x12B30770)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardRequireAtmosphere_TypeDefinitionIndex = 81376;

	class ChessboardRequireAtmosphere
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDREQUIREATMOSPHERE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* atmosphereKey, ::System::Boolean changeVideo, ::System::Boolean skipIdenticalKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDREQUIREATMOSPHERE_INVOKE_OFFSET))(this, atmosphereKey, changeVideo, skipIdenticalKey);
		}
	};
}
