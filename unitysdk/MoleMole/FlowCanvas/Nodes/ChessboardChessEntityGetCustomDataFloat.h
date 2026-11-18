#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class ChessEntity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYGETCUSTOMDATAFLOAT_INVOKE_OFFSET UNITYSDK_OFFSET(0x12447440)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYGETCUSTOMDATAFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x124474B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardChessEntityGetCustomDataFloat_TypeDefinitionIndex = 93213;

	class ChessboardChessEntityGetCustomDataFloat
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYGETCUSTOMDATAFLOAT__CTOR_OFFSET))(this);
		}

		::System::Single Invoke(::MoleMole::ChessEntity* chessEntity, ::System::String* key)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::ChessEntity*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYGETCUSTOMDATAFLOAT_INVOKE_OFFSET))(this, chessEntity, key);
		}
	};
}
