#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NNGFEKMBBHE;
namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_MEMTESTPAGECONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0x1E91F7B0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER_GETALLMONSTEREFFECTS_OFFSET UNITYSDK_OFFSET(0x1E91ED00)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER_GETALLPLAYEREFFECTS_OFFSET UNITYSDK_OFFSET(0x1E91F2F0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER_GETCURMONSTEREFFECTS_OFFSET UNITYSDK_OFFSET(0x1E91F260)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER_GETCURPLAYEREFFECTS_OFFSET UNITYSDK_OFFSET(0x1E91F720)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER_GETMONSTEREFFECTSOFSKILLTYPE_OFFSET UNITYSDK_OFFSET(0x1E91F020)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER_GETPLAYEREFFECTSOFSKILLTYPE_OFFSET UNITYSDK_OFFSET(0x1E91F590)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER_GET_VIEW_OFFSET UNITYSDK_OFFSET(0x1E920C90)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER_INITMONSTERDRAPDOWN_OFFSET UNITYSDK_OFFSET(0x1E921CF0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER_INITPLAYERDRAPDOWN_OFFSET UNITYSDK_OFFSET(0x1E921560)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER_ON_PINCHOUT_OFFSET UNITYSDK_OFFSET(0x1E927D80)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x1E91F840)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__INITCHAPTERDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1E922C20)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__INITSTAGEDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1E922410)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONBTNMOVEDOWN_OFFSET UNITYSDK_OFFSET(0x1E927B40)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONBTNMOVEUP_OFFSET UNITYSDK_OFFSET(0x1E927B90)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCHAPTERDROPDOWNVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x1E923420)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCLEARALLBTN_OFFSET UNITYSDK_OFFSET(0x1E923270)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCLEARAVATARBTN_OFFSET UNITYSDK_OFFSET(0x1E926B60)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCLEAREFFECTBTN_OFFSET UNITYSDK_OFFSET(0x1E926C70)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCLEARMODELBTN_OFFSET UNITYSDK_OFFSET(0x1E926EB0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCLEARSTAGEBTN_OFFSET UNITYSDK_OFFSET(0x1E926D70)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATEMODELBTN_OFFSET UNITYSDK_OFFSET(0x1E9269C0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATEMONSTERBTN_OFFSET UNITYSDK_OFFSET(0x1E926340)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATEMONSTEREFFECTBTN_OFFSET UNITYSDK_OFFSET(0x1E926680)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATEPLAYERBTN_OFFSET UNITYSDK_OFFSET(0x1E9261A0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATEPLAYEREFFECTBTN_OFFSET UNITYSDK_OFFSET(0x1E9264E0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATESTAGEBTN_OFFSET UNITYSDK_OFFSET(0x1E926820)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONEXITBTN_OFFSET UNITYSDK_OFFSET(0x1E9231A0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONMODELITEMDROPDOWNVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x1E924600)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONMODELTYPEDROPDOWNVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x1E923D10)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONMONSTERDROPDOWNVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x1E923370)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONMONSTEREFFECTDROPDOWNVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x1E925300)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONPINCHEND_OFFSET UNITYSDK_OFFSET(0x1E928070)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONPINCHIN_OFFSET UNITYSDK_OFFSET(0x1E927BE0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONPLAYERDROPDOWNVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x1E923310)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONPLAYEREFFECTDROPDOWNVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x1E925FB0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONRESETBTN_OFFSET UNITYSDK_OFFSET(0x1E926000)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONSCREENDRAGING_OFFSET UNITYSDK_OFFSET(0x1E926FB0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONSCROLL_OFFSET UNITYSDK_OFFSET(0x1E927860)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONSTAGEDROPDOWNVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x1E9233D0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1E920D20)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__UPDATEMODELITEMDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1E923D70)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__UPDATEMONSTEREFFECTDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1E924650)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__UPDATEPLAYEREFFECTDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1E925350)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__UPDATETYPEMODELDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1E923480)

namespace RPG::Client
{
	inline static constexpr unsigned int MemTestPageController_TypeDefinitionIndex = 74891;

	class MemTestPageController : public ::RPG::Client::UIController
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _PlayerDropDownList; // 0x190
		::System::Collections::Generic::List_1<::System::Object*>* _ModelItemDropDownList; // 0x198
		::System::Collections::Generic::List_1<::System::String*>* _ModelItemDropDownNameList; // 0x1A0
		::System::Collections::Generic::List_1<::System::String*>* _StageDropDownNameList; // 0x1A8
		::System::Collections::Generic::List_1<::System::Object*>* _PlayerEffectDropDownList; // 0x1B0
		::System::Collections::Generic::List_1<::System::String*>* _ChapterDropDownNameList; // 0x1B8
		::System::Collections::Generic::List_1<::System::Object*>* _MonsterEffectDropDownList; // 0x1C0
		::System::Collections::Generic::List_1<::System::String*>* _MonsterEffectDropDownNameList; // 0x1C8
		::System::Collections::Generic::List_1<::System::String*>* _PlayerEffectDropDownNameList; // 0x1D0
		::System::Collections::Generic::List_1<::System::String*>* _PlayerDropDownNameList; // 0x1D8
		::System::Collections::Generic::List_1<::System::Object*>* _StageDropDownList; // 0x1E0
		::System::Collections::Generic::List_1<::System::String*>* _MonsterDropDownNameList; // 0x1E8
		::System::Collections::Generic::List_1<::System::Object*>* _ModelTypeDropDownList; // 0x1F0
		::System::Collections::Generic::List_1<::System::Object*>* _MonsterDropDownList; // 0x1F8
		::System::Collections::Generic::List_1<::System::String*>* _ModelTypeDropDownNameList; // 0x200
		::System::Single _MinimumDistanc_MinDistance; // 0x208
		::UnityEngine::Vector2 _DragBeginPosition; // 0x20C
		::System::Int32 _SelectModelItemDropDownIndex; // 0x214
		::System::Int32 _SelectPlayerEffectDropDownIndex; // 0x218
		::UnityEngine::Vector3 _InitLookAtPos; // 0x21C
		::System::Int32 _SelectChapterDropDownIndex; // 0x228
		::System::Int32 _SelectMonsterDropDownIndex; // 0x22C
		::System::Int32 _SelectMonsterEffectDropDownIndex; // 0x230
		::System::Int32 _SelectStageDropDownIndex; // 0x234
		::System::Int32 _SelectModelTypeDropDownIndex; // 0x238
		::System::Int32 _SelectPlayerDropDownIndex; // 0x23C
		::UnityEngine::Vector3 _Offset; // 0x240
		::System::Boolean _IsPressMove; // 0x24C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER_CTOR_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* GetAllMonsterEffects(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER_GETALLMONSTEREFFECTS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* GetMonsterEffectsOfSkillType(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER_GETMONSTEREFFECTSOFSKILLTYPE_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetCurMonsterEffects()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER_GETCURMONSTEREFFECTS_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* GetAllPlayerEffects(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER_GETALLPLAYEREFFECTS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* GetPlayerEffectsOfSkillType(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER_GETPLAYEREFFECTSOFSKILLTYPE_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetCurPlayerEffects()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER_GETCURPLAYEREFFECTS_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnExitBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONEXITBTN_OFFSET))(this);
		}

		::System::Void InitPlayerDrapDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER_INITPLAYERDRAPDOWN_OFFSET))(this);
		}

		::System::Void InitMonsterDrapDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER_INITMONSTERDRAPDOWN_OFFSET))(this);
		}

		::System::Void _InitStageDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__INITSTAGEDROPDOWN_OFFSET))(this);
		}

		::System::Void _InitChapterDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__INITCHAPTERDROPDOWN_OFFSET))(this);
		}

		::System::Void _UpdateTypeModelDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__UPDATETYPEMODELDROPDOWN_OFFSET))(this);
		}

		::System::Void _UpdateModelItemDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__UPDATEMODELITEMDROPDOWN_OFFSET))(this);
		}

		::System::Void _UpdateMonsterEffectDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__UPDATEMONSTEREFFECTDROPDOWN_OFFSET))(this);
		}

		::System::Void _UpdatePlayerEffectDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__UPDATEPLAYEREFFECTDROPDOWN_OFFSET))(this);
		}

		::System::Void _OnResetBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONRESETBTN_OFFSET))(this);
		}

		::System::Void _OnCreatePlayerBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATEPLAYERBTN_OFFSET))(this);
		}

		::System::Void _OnCreateMonsterBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATEMONSTERBTN_OFFSET))(this);
		}

		::System::Void _OnCreatePlayerEffectBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATEPLAYEREFFECTBTN_OFFSET))(this);
		}

		::System::Void _OnCreateMonsterEffectBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATEMONSTEREFFECTBTN_OFFSET))(this);
		}

		::System::Void _OnCreateStageBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATESTAGEBTN_OFFSET))(this);
		}

		::System::Void _OnCreateModelBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATEMODELBTN_OFFSET))(this);
		}

		::System::Void _OnClearAvatarBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCLEARAVATARBTN_OFFSET))(this);
		}

		::System::Void _OnClearEffectBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCLEAREFFECTBTN_OFFSET))(this);
		}

		::System::Void _OnClearStageBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCLEARSTAGEBTN_OFFSET))(this);
		}

		::System::Void _OnClearModelBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCLEARMODELBTN_OFFSET))(this);
		}

		::System::Void _OnClearAllBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCLEARALLBTN_OFFSET))(this);
		}

		::System::Void _OnPlayerDropDownValueChange(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONPLAYERDROPDOWNVALUECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnMonsterDropDownValueChange(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONMONSTERDROPDOWNVALUECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnPlayerEffectDropDownValueChange(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONPLAYEREFFECTDROPDOWNVALUECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnMonsterEffectDropDownValueChange(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONMONSTEREFFECTDROPDOWNVALUECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnStageDropDownValueChange(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONSTAGEDROPDOWNVALUECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnChapterDropDownValueChange(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCHAPTERDROPDOWNVALUECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnModelTypeDropDownValueChange(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONMODELTYPEDROPDOWNVALUECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnModelItemDropDownValueChange(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONMODELITEMDROPDOWNVALUECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnScreenDraging(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONSCREENDRAGING_OFFSET))(this, a1);
		}

		::System::Void _OnScroll(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONSCROLL_OFFSET))(this, a1);
		}

		::System::Void _OnBtnMoveDown(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONBTNMOVEDOWN_OFFSET))(this, a1);
		}

		::System::Void _OnBtnMoveUp(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONBTNMOVEUP_OFFSET))(this, a1);
		}

		::System::Void _OnPinchIn(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONPINCHIN_OFFSET))(this, a1);
		}

		::System::Void On_PinchOut(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER_ON_PINCHOUT_OFFSET))(this, a1);
		}

		::System::Void _OnPinchEnd(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONPINCHEND_OFFSET))(this, a1);
		}

		::NNGFEKMBBHE* get_View()
		{
			return ((::NNGFEKMBBHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER_GET_VIEW_OFFSET))(this);
		}

	};
}
