#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/ValueType.h"

class BOFJAODPMNI;
namespace System { class String; }

#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW_RUNTIMEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x784FF0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int TextureSheetConfigActionNew_RuntimeData_TypeDefinitionIndex = 71998;

	struct alignas(8) TextureSheetConfigActionNew_RuntimeData
	{
		::MoleMole::HollowChessboard::RenderDataHandle animHandle; // 0x10
		::BOFJAODPMNI* _actionContext; // 0x20
		::System::String* finalTextureSheetKey; // 0x28

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW_RUNTIMEDATA_RESET_OFFSET))(this);
		}
	};
}
