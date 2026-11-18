#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"
#include "unitysdk/MoleMole/ChessStateMachine/TextureSheetConfigActionNew___c__DisplayClass13_0.h"

class BOFJAODPMNI;
namespace System { class String; }

#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW_PLAYANIM_OFFSET UNITYSDK_OFFSET(0x1275A080)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW_RESETACTIONCACHE_OFFSET UNITYSDK_OFFSET(0x1275B420)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW_RUN_OFFSET UNITYSDK_OFFSET(0x12759F60)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW_UPDATE_OFFSET UNITYSDK_OFFSET(0x1275AFF0)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1275B4D0)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW__UPDATE_G__CHECKANIMEND_13_1_OFFSET UNITYSDK_OFFSET(0x1275B390)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW__UPDATE_G__CHECKINDEXCHANGED_13_0_OFFSET UNITYSDK_OFFSET(0x1275B140)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW___BASE_RESETACTIONCACHE_OFFSET UNITYSDK_OFFSET(0x1275B4E0)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1275B4F0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int TextureSheetConfigActionNew_TypeDefinitionIndex = 71997;

	class TextureSheetConfigActionNew
	{
	public:
		::System::String* UVkey; // 0x48
		::System::String* TextureKey; // 0x50
		::System::Int32 SpecialScreenLayerTransparent; // 0x58
		::System::Boolean DisableSync; // 0x5C
		::System::Boolean forbidEffect; // 0x5D
		::System::Boolean SpecialScreenBaseIndex; // 0x5E
		::System::Boolean RandomPlay; // 0x5F
		::MoleMole::HollowPieceBlendMode BlendMode; // 0x60
		::System::Int32 ConfigID; // 0x64
		::System::Int32 BaseScreenIndex; // 0x68
		::System::Int32 SpecialScreenLayerIndex; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW__CTOR_OFFSET))(this);
		}

		::System::Void Run(::BOFJAODPMNI* context)
		{
			return ((::System::Void(*)(::PVOID, ::BOFJAODPMNI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW_RUN_OFFSET))(this, context);
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW_UPDATE_OFFSET))(this);
		}

		::System::Void PlayAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW_PLAYANIM_OFFSET))(this);
		}

		::System::Void ResetActionCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW_RESETACTIONCACHE_OFFSET))(this);
		}

		::System::Boolean _Update_g__CheckIndexChanged_13_0(::MoleMole::ChessStateMachine::TextureSheetConfigActionNew___c__DisplayClass13_0& param_0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ChessStateMachine::TextureSheetConfigActionNew___c__DisplayClass13_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW__UPDATE_G__CHECKINDEXCHANGED_13_0_OFFSET))(this, param_0);
		}

		::System::Void _Update_g__CheckAnimEnd_13_1(::MoleMole::ChessStateMachine::TextureSheetConfigActionNew___c__DisplayClass13_0& param_0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessStateMachine::TextureSheetConfigActionNew___c__DisplayClass13_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW__UPDATE_G__CHECKANIMEND_13_1_OFFSET))(this, param_0);
		}

		::System::Void __base_ResetActionCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW___BASE_RESETACTIONCACHE_OFFSET))(this);
		}

		::System::Boolean __base_Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW___BASE_UPDATE_OFFSET))(this);
		}
	};
}
