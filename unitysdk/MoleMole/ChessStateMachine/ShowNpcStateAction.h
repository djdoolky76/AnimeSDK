#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineBaseAction.h"

class IDEBFOKEPPI;
class MHKEICOJMHG;
class PINBHKFHPAL;
namespace MoleMole { class TextureSheetData; }
namespace System { class String; }

#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCSTATEACTION_CHECK_OFFSET UNITYSDK_OFFSET(0x192785C0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCSTATEACTION_FINDTEXTURESHEETDATABYKEY_OFFSET UNITYSDK_OFFSET(0x19278880)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCSTATEACTION_FINISH_OFFSET UNITYSDK_OFFSET(0x192788F0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCSTATEACTION_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x19278610)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCSTATEACTION_GET_ISINSTANT_OFFSET UNITYSDK_OFFSET(0x192785B0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCSTATEACTION_RUN_OFFSET UNITYSDK_OFFSET(0x19278830)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCSTATEACTION_STOP_OFFSET UNITYSDK_OFFSET(0x19278940)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCSTATEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19278980)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ShowNpcStateAction_TypeDefinitionIndex = 42072;

	class ShowNpcStateAction : public ::MoleMole::ChessStateMachine::StateMachineBaseAction
	{
	public:
		::System::String* Tag; // 0x20
		::MHKEICOJMHG* _context; // 0x28
		::System::String* TextureSheet; // 0x30
		::System::Int32 ScreenIndex; // 0x38
		::System::Boolean NeedUseOffset; // 0x3C
		::System::Byte _padding0[0x3];
		::System::Int32 Priority; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCSTATEACTION__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isInstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCSTATEACTION_GET_ISINSTANT_OFFSET))(this);
		}

		::System::Void Check(::IDEBFOKEPPI* npc)
		{
			return ((::System::Void(*)(::PVOID, ::IDEBFOKEPPI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCSTATEACTION_CHECK_OFFSET))(this, npc);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCSTATEACTION_FORCESTOP_OFFSET))(this);
		}

		::System::Void Run(::PINBHKFHPAL* context)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCSTATEACTION_RUN_OFFSET))(this, context);
		}

		::MoleMole::TextureSheetData* FindTextureSheetDataByKey(::System::String* key, ::System::Boolean enableLog)
		{
			return ((::MoleMole::TextureSheetData*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCSTATEACTION_FINDTEXTURESHEETDATABYKEY_OFFSET))(this, key, enableLog);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCSTATEACTION_FINISH_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCSTATEACTION_STOP_OFFSET))(this);
		}
	};
}
