#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/TextureSheetVEBase.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"

class PINBHKFHPAL;

#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x1908AFE0)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION_RUN_OFFSET UNITYSDK_OFFSET(0x1908A610)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1908B190)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___BASE_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x1908B230)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___BASE_RUN_OFFSET UNITYSDK_OFFSET(0x1908B1A0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int TextureSheetConfigAction_TypeDefinitionIndex = 63239;

	class TextureSheetConfigAction : public ::MoleMole::ChessStateMachine::TextureSheetVEBase
	{
	public:
		::MoleMole::HollowPieceBlendMode BlendMode; // 0x28
		::System::Int32 BaseScreenIndex; // 0x2C
		::System::Boolean SendIconToServer; // 0x30
		::System::Boolean SpecialScreenBaseIndex; // 0x31
		::System::Boolean RandomPlay; // 0x32
		::System::Boolean DisableSync; // 0x33
		::System::Int32 ConfigID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::PINBHKFHPAL* context)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION_RUN_OFFSET))(this, context);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION_FORCESTOP_OFFSET))(this);
		}

		::System::Void __base_Run(::PINBHKFHPAL* P0)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___BASE_RUN_OFFSET))(this, P0);
		}

		::System::Void __base_ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___BASE_FORCESTOP_OFFSET))(this);
		}
	};
}
