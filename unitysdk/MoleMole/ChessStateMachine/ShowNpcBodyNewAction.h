#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOKBMFNAOKC.h"

class BBPCINJAMAF;
class MJCOGNACMBO;
class PINBHKFHPAL;
namespace MoleMole { class BlendTextureSheetData; }
namespace System { class String; }

#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x19B02180)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_FINDBLENDTEXTURESHEETDATA_OFFSET UNITYSDK_OFFSET(0x19B02120)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_GETTEXTURESHEET_OFFSET UNITYSDK_OFFSET(0x19B00F40)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_HANDLENORMALVIEW_OFFSET UNITYSDK_OFFSET(0x19B01570)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_RUN_OFFSET UNITYSDK_OFFSET(0x19B00F80)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x19B022F0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19B02610)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION___BASE_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x19B02620)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION___BASE_RUN_OFFSET UNITYSDK_OFFSET(0x19B026B0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x19B026C0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ShowNpcBodyNewAction_TypeDefinitionIndex = 57356;

	class ShowNpcBodyNewAction
	{
	public:
		::MJCOGNACMBO* _actionContext; // 0x48
		::System::String* TextureSheet; // 0x50
		::System::String* RefTextureSheet; // 0x58
		::AOKBMFNAOKC entityType; // 0x60
		::System::Int32 ScreenIndex; // 0x64
		::System::Boolean useBehavior; // 0x68
		::System::Boolean UseAsset; // 0x69
		::System::Boolean NeedUseOffset; // 0x6A
		::System::Boolean ClearSwitchEffectIfAnim; // 0x6B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION__CTOR_OFFSET))(this);
		}

		::System::String* GetTextureSheet()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_GETTEXTURESHEET_OFFSET))(this);
		}

		::System::Void Run(::PINBHKFHPAL* context)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_RUN_OFFSET))(this, context);
		}

		::System::Void HandleNormalView(::BBPCINJAMAF* info)
		{
			return ((::System::Void(*)(::PVOID, ::BBPCINJAMAF*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_HANDLENORMALVIEW_OFFSET))(this, info);
		}

		::System::Void ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_ACTIONOVER_OFFSET))(this);
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_UPDATE_OFFSET))(this);
		}

		::MoleMole::BlendTextureSheetData* FindBlendTextureSheetData(::System::String* key)
		{
			return ((::MoleMole::BlendTextureSheetData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_FINDBLENDTEXTURESHEETDATA_OFFSET))(this, key);
		}

		::System::Void __base_ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION___BASE_ACTIONOVER_OFFSET))(this);
		}

		::System::Void __base_Run(::PINBHKFHPAL* P0)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION___BASE_RUN_OFFSET))(this, P0);
		}

		::System::Boolean __base_Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION___BASE_UPDATE_OFFSET))(this);
		}
	};
}
