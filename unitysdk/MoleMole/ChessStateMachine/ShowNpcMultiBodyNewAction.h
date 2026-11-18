#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class BBPCINJAMAF;
class FALCFLKDHJB;
class MJCOGNACMBO;
class PINBHKFHPAL;
namespace MoleMole { class BlendTextureSheetData; }
namespace MoleMole::Config { class ShowNpcMultiBodyParam; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x19276EB0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_FINDBLENDTEXTURESHEETDATA_OFFSET UNITYSDK_OFFSET(0x19278400)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_GETTEXTURESHEETID_OFFSET UNITYSDK_OFFSET(0x192770A0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_HANDLENORMALVIEW_OFFSET UNITYSDK_OFFSET(0x19277680)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_PLAYADDITIVETEXTURE_OFFSET UNITYSDK_OFFSET(0x19276520)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_RUNINTERNAL_OFFSET UNITYSDK_OFFSET(0x192760A0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_RUN_OFFSET UNITYSDK_OFFSET(0x192768F0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_UPDATECACHEDATA_OFFSET UNITYSDK_OFFSET(0x19276B70)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x192769B0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19278460)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION__RUN_OFFSET UNITYSDK_OFFSET(0x19276490)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION___BASE_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x19278480)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION___BASE_RUN_OFFSET UNITYSDK_OFFSET(0x19278510)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x19278520)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ShowNpcMultiBodyNewAction_TypeDefinitionIndex = 60106;

	class ShowNpcMultiBodyNewAction
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ShowNpcMultiBodyParam*>* param; // 0x40
		::MJCOGNACMBO* _actionContext; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION__CTOR_OFFSET))(this);
		}

		::System::Void RunInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_RUNINTERNAL_OFFSET))(this);
		}

		::System::Void PlayAdditiveTexture(::BBPCINJAMAF* info, ::MoleMole::HollowChessboard::HollowCell index, ::FALCFLKDHJB* additiveTextureConfig, ::System::Int32 targetRenderPriority)
		{
			return ((::System::Void(*)(::PVOID, ::BBPCINJAMAF*, ::MoleMole::HollowChessboard::HollowCell, ::FALCFLKDHJB*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_PLAYADDITIVETEXTURE_OFFSET))(this, info, index, additiveTextureConfig, targetRenderPriority);
		}

		::System::Void Run(::PINBHKFHPAL* context)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_RUN_OFFSET))(this, context);
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateCacheData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_UPDATECACHEDATA_OFFSET))(this);
		}

		::System::Void ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_ACTIONOVER_OFFSET))(this);
		}

		::System::Void _Run(::MoleMole::HollowChessboard::HollowCell index, ::MoleMole::Config::ShowNpcMultiBodyParam* param)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::Config::ShowNpcMultiBodyParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION__RUN_OFFSET))(this, index, param);
		}

		::BBPCINJAMAF* GetTextureSheetID(::MJCOGNACMBO* context, ::MoleMole::Config::ShowNpcMultiBodyParam* param)
		{
			return ((::BBPCINJAMAF*(*)(::PVOID, ::MJCOGNACMBO*, ::MoleMole::Config::ShowNpcMultiBodyParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_GETTEXTURESHEETID_OFFSET))(this, context, param);
		}

		::System::Void HandleNormalView(::BBPCINJAMAF* info, ::MoleMole::HollowChessboard::HollowCell index, ::MoleMole::Config::ShowNpcMultiBodyParam* param)
		{
			return ((::System::Void(*)(::PVOID, ::BBPCINJAMAF*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::Config::ShowNpcMultiBodyParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_HANDLENORMALVIEW_OFFSET))(this, info, index, param);
		}

		::MoleMole::BlendTextureSheetData* FindBlendTextureSheetData(::System::String* key)
		{
			return ((::MoleMole::BlendTextureSheetData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_FINDBLENDTEXTURESHEETDATA_OFFSET))(this, key);
		}

		::System::Void __base_ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION___BASE_ACTIONOVER_OFFSET))(this);
		}

		::System::Void __base_Run(::PINBHKFHPAL* P0)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION___BASE_RUN_OFFSET))(this, P0);
		}

		::System::Boolean __base_Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION___BASE_UPDATE_OFFSET))(this);
		}
	};
}
