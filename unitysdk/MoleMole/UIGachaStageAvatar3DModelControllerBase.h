#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGachaStage3DModelControllerBase.h"

class GIOPLKCJHMP;
class IDEBDPICDJA;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_GETCHARACTERLIGHTSTLPATH_OFFSET UNITYSDK_OFFSET(0x173C6C30)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_GETLIGHTCUTSCENEATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x173C6C90)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_GETLIGHTIDS_OFFSET UNITYSDK_OFFSET(0x173C6BD0)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_GET_BLUEPRINT_NAME_OFFSET UNITYSDK_OFFSET(0x173C7010)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_GET_RARITY_TV_INDEX_OFFSET UNITYSDK_OFFSET(0x173C7050)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_GET_TOTAL_TV_NUM_OFFSET UNITYSDK_OFFSET(0x173C7000)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_HANDLEONOPEN_OFFSET UNITYSDK_OFFSET(0x173C4210)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_HANDLEUPDATE_OFFSET UNITYSDK_OFFSET(0x173C45E0)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_INITLIGHTS_OFFSET UNITYSDK_OFFSET(0x173C6990)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_ISVIDEOTVINDEX_OFFSET UNITYSDK_OFFSET(0x173C6940)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_NBKDLLJMLLO_OFFSET UNITYSDK_OFFSET(0x173C7470)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_ONREFRESHSTAGE_OFFSET UNITYSDK_OFFSET(0x173C48F0)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x173C4640)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x173C41B0)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_PRELOADSTAGEBEFOREPLAY_OFFSET UNITYSDK_OFFSET(0x173C4700)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_STOPSOUND_OFFSET UNITYSDK_OFFSET(0x173C6D90)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x173C7060)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE___BASE_GETLIGHTCUTSCENEATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x173C7210)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE___BASE_HANDLEONOPEN_OFFSET UNITYSDK_OFFSET(0x173C72A0)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE___BASE_HANDLEUPDATE_OFFSET UNITYSDK_OFFSET(0x173C72B0)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE___BASE_ISVIDEOTVINDEX_OFFSET UNITYSDK_OFFSET(0x173C7340)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x173C73D0)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x173C7180)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE___BASE_STOPSOUND_OFFSET UNITYSDK_OFFSET(0x173C73E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaStageAvatar3DModelControllerBase_TypeDefinitionIndex = 52471;

	class UIGachaStageAvatar3DModelControllerBase : public ::MoleMole::UIGachaStage3DModelControllerBase
	{
	public:
		::UnityEngine::Transform* _itemPosTrans; // 0x650
		::UnityEngine::GameObject* _flagGo1; // 0x658
		::UnityEngine::GameObject* _flagGo2; // 0x660
		::UnityEngine::Transform* _platform; // 0x668
		::UnityEngine::Transform* _leftUITextRoot; // 0x670
		::UnityEngine::Transform* _leftUITextParent; // 0x678
		::UnityEngine::Transform* _leftUITextRoot1; // 0x680
		::UnityEngine::Transform* _leftUITextParent1; // 0x688
		::UnityEngine::Transform* _leftUITextRoot2; // 0x690
		::UnityEngine::Transform* _leftUITextParent2; // 0x698
		::UnityEngine::Transform* _rightUITextRoot; // 0x6A0
		::UnityEngine::Transform* _rightUITextParent; // 0x6A8
		::UnityEngine::Transform* _rightUITextRoot1; // 0x6B0
		::UnityEngine::Transform* _rightUITextParent1; // 0x6B8
		::UnityEngine::Transform* _upUITextRoot; // 0x6C0
		::UnityEngine::Transform* _upUITextParent; // 0x6C8
		::UnityEngine::Transform* _topLight; // 0x6D0
		::UnityEngine::Transform* _faceLight; // 0x6D8
		::UnityEngine::Transform* _uiTextUp; // 0x6E0
		::UnityEngine::Transform* _uiTextLeft; // 0x6E8
		::UnityEngine::Transform* _uiTextRight; // 0x6F0
		::UnityEngine::GameObject* _monoCGCustomGlobalAnimationGo; // 0x6F8
		::System::String* FIOECALIIEL; // 0x700
		::System::String* OGMMKAAFLII; // 0x708
		::System::String* NGCAFLJHBEE; // 0x710
		::System::String* DLOJCGJGDHJ; // 0x718
		::System::String* GNCFEFGMGCH; // 0x720
		::System::String* CPBDIPOFMGL; // 0x728
		::System::String* NDHKJKNDHJP; // 0x730
		::System::String* OCKNHFGBIFD; // 0x738
		::System::String* ECGPJOJMMHP; // 0x740
		::System::String* OLEJMIBKDNG; // 0x748
		::System::String* GNMBAAHGDAJ; // 0x750
		::System::String* DJBJKCBHCJF; // 0x758
		::System::String* FJEGELFGALC; // 0x760
		::System::String* ABKNLOPDKLJ; // 0x768
		::System::String* KCFCHLAAJHA; // 0x770
		::System::String* HEJLGCNKPLP; // 0x778
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* CMABDBFMHLI; // 0x780
		::System::Collections::Generic::List_1<::System::Object*>* JEBGIFLCBLI; // 0x788
		::System::Collections::Generic::List_1<::System::Object*>* ICKKPLIEBLJ; // 0x790
		::IDEBDPICDJA* OPPLJFFHLAG; // 0x798
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture2D*>* NPFJILOHBOO; // 0x7A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void HandleOnOpen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_HANDLEONOPEN_OFFSET))(this);
		}

		::System::Void HandleUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_HANDLEUPDATE_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void PreloadStageBeforePlay(::GIOPLKCJHMP* template_, ::System::Action* preloadComplete)
		{
			return ((::System::Void(*)(::PVOID, ::GIOPLKCJHMP*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_PRELOADSTAGEBEFOREPLAY_OFFSET))(this, template_, preloadComplete);
		}

		::System::Void OnRefreshStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_ONREFRESHSTAGE_OFFSET))(this);
		}

		::System::Boolean IsVideoTvIndex(::System::Int32 tvIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_ISVIDEOTVINDEX_OFFSET))(this, tvIndex);
		}

		::System::Void InitLights()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_INITLIGHTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetLightIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_GETLIGHTIDS_OFFSET))(this);
		}

		::System::String* GetCharacterLightsTLPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_GETCHARACTERLIGHTSTLPATH_OFFSET))(this);
		}

		::UnityEngine::Transform* GetLightCutSceneAttachPoint()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_GETLIGHTCUTSCENEATTACHPOINT_OFFSET))(this);
		}

		::System::Void StopSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_STOPSOUND_OFFSET))(this);
		}

		::System::Int32 get_TOTAL_TV_NUM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_GET_TOTAL_TV_NUM_OFFSET))(this);
		}

		::System::String* get_BLUEPRINT_NAME()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_GET_BLUEPRINT_NAME_OFFSET))(this);
		}

		::System::Int32 get_RARITY_TV_INDEX()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_GET_RARITY_TV_INDEX_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE___BASE_ONUIINIT_OFFSET))(this);
		}

		::UnityEngine::Transform* __base_GetLightCutSceneAttachPoint()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE___BASE_GETLIGHTCUTSCENEATTACHPOINT_OFFSET))(this);
		}

		::System::Void __base_HandleOnOpen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE___BASE_HANDLEONOPEN_OFFSET))(this);
		}

		::System::Void __base_HandleUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE___BASE_HANDLEUPDATE_OFFSET))(this);
		}

		::System::Boolean __base_IsVideoTvIndex(::System::Int32 P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE___BASE_ISVIDEOTVINDEX_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_StopSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE___BASE_STOPSOUND_OFFSET))(this);
		}

		::System::Void NBKDLLJMLLO(::UnityEngine::GameObject* CDNHBAPJGDL)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_NBKDLLJMLLO_OFFSET))(this, CDNHBAPJGDL);
		}
	};
}
