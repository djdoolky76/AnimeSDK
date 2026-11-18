#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/TextureSheetVEBase.h"

class PINBHKFHPAL;
namespace System { class String; }

#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVE_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x174E8AA0)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVE_RUN_OFFSET UNITYSDK_OFFSET(0x174E8470)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVE_TEXTURECALLBACK_OFFSET UNITYSDK_OFFSET(0x174E8A50)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVE__CTOR_OFFSET UNITYSDK_OFFSET(0x174E8C50)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVE___BASE_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x174E8C70)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVE___BASE_RUN_OFFSET UNITYSDK_OFFSET(0x174E8CB0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int TextureSheetVE_TypeDefinitionIndex = 81588;

	class TextureSheetVE : public ::MoleMole::ChessStateMachine::TextureSheetVEBase
	{
	public:
		::System::String* blendTextureKey; // 0x28
		::System::Boolean DisableSync; // 0x30
		::System::Boolean SkipWait; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVE__CTOR_OFFSET))(this);
		}

		::System::Void Run(::PINBHKFHPAL* context)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVE_RUN_OFFSET))(this, context);
		}

		::System::Void TextureCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVE_TEXTURECALLBACK_OFFSET))(this);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVE_FORCESTOP_OFFSET))(this);
		}

		::System::Void __base_ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVE___BASE_FORCESTOP_OFFSET))(this);
		}

		::System::Void __base_Run(::PINBHKFHPAL* P0)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVE___BASE_RUN_OFFSET))(this, P0);
		}
	};
}
