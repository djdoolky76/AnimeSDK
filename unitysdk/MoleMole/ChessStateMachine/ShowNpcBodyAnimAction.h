#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/TextureSheetVEBase.h"

class ABJGKIHADDE;
class BBPCINJAMAF;
class PINBHKFHPAL;
namespace System { class String; }

#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x11A54470)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION_GET_GETSCREENINDEX_OFFSET UNITYSDK_OFFSET(0x11A54360)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION_HANDLENORMALVIEW_OFFSET UNITYSDK_OFFSET(0x11A54310)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION_RUN_OFFSET UNITYSDK_OFFSET(0x11A542A0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION_TEXTURECALLBACK_OFFSET UNITYSDK_OFFSET(0x11A543B0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x11A546C0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION___BASE_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x11A546D0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION___BASE_RUN_OFFSET UNITYSDK_OFFSET(0x11A54760)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ShowNpcBodyAnimAction_TypeDefinitionIndex = 58539;

	class ShowNpcBodyAnimAction : public ::MoleMole::ChessStateMachine::TextureSheetVEBase
	{
	public:
		::System::String* RefTextureSheet; // 0x28
		::ABJGKIHADDE* _actionContext; // 0x30
		::System::String* TextureSheet; // 0x38
		::System::Boolean NeedUseOffset; // 0x40
		::System::Boolean UseAsset; // 0x41
		::System::Boolean ClearSwitchEffectIfAnim; // 0x42
		::System::Byte _padding0[0x1];
		::System::Int32 ScreenIndex; // 0x44
		::System::Int32 npcid; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::PINBHKFHPAL* context)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION_RUN_OFFSET))(this, context);
		}

		::System::Void HandleNormalView(::BBPCINJAMAF* info)
		{
			return ((::System::Void(*)(::PVOID, ::BBPCINJAMAF*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION_HANDLENORMALVIEW_OFFSET))(this, info);
		}

		::System::Int32 get_GetScreenIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION_GET_GETSCREENINDEX_OFFSET))(this);
		}

		::System::Void TextureCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION_TEXTURECALLBACK_OFFSET))(this);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION_FORCESTOP_OFFSET))(this);
		}

		::System::Void __base_ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION___BASE_FORCESTOP_OFFSET))(this);
		}

		::System::Void __base_Run(::PINBHKFHPAL* P0)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION___BASE_RUN_OFFSET))(this, P0);
		}
	};
}
