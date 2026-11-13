#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/InteractPuzzleBoardBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BIDDFDEAEGB;
class EKFMIDBJDIA;
class KLKMCNOECAL;
class NEOCEOCDEAF;
namespace RPG::Client { class Effect_OracleOutlineMonoPlugin; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client { class OraclePuzzleCommonConfig; }
namespace RPG::Client::Prop { class InteractPuzzleItemBase; }
namespace RPG::Client::Prop { class OraclePuzzleBoard; }
namespace RPG::Client::Prop { class OraclePuzzleItem; }
namespace RPG::Client::Prop { class OraclePuzzlePanel; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_CANCELCURRENTPUZZLEHELPER_OFFSET UNITYSDK_OFFSET(0x171FDC10)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0x171F8B00)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_CCTOR_OFFSET UNITYSDK_OFFSET(0x171FE380)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_CLEAROUTLINE_OFFSET UNITYSDK_OFFSET(0x171F91B0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0x171FE300)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x171F8B90)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_EXECUTECURRENTPUZZLEHELPER_OFFSET UNITYSDK_OFFSET(0x171FDB40)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_FINISHPUZZLE_OFFSET UNITYSDK_OFFSET(0x171FD2F0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETBOARDCENTERSCREENPOSITION_OFFSET UNITYSDK_OFFSET(0x171F52F0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETBOARDORIGIN_OFFSET UNITYSDK_OFFSET(0x171FE290)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETBOARDSCREENRADIUS_OFFSET UNITYSDK_OFFSET(0x171F5430)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETCELLSIZE_OFFSET UNITYSDK_OFFSET(0x171FE1D0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETCURRENTPANELINDEX_OFFSET UNITYSDK_OFFSET(0x171FDAA0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETDYNAMICRADTIO_OFFSET UNITYSDK_OFFSET(0x171FE230)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETPERFORMCELLSIZE_OFFSET UNITYSDK_OFFSET(0x171FD290)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETPUZZLEPANELSCOUNT_OFFSET UNITYSDK_OFFSET(0x171FDAF0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETSELECTITEMCENTERSCREENPOSITION_OFFSET UNITYSDK_OFFSET(0x171F57D0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GET_ISHELPERAVAILABLE_OFFSET UNITYSDK_OFFSET(0x171FE170)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GRIDPOS2LOCALPOS_OFFSET UNITYSDK_OFFSET(0x171FD1A0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_HASHOVERITEM_OFFSET UNITYSDK_OFFSET(0x171F5230)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_HASSELECTITEM_OFFSET UNITYSDK_OFFSET(0x171F5290)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x171F6CF0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x171F8B40)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_LATEUPDATEPUZZLE_OFFSET UNITYSDK_OFFSET(0x171F8710)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_LOADORACLECONFIGIFNOT_OFFSET UNITYSDK_OFFSET(0x171F98F0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_LOCALPOS2GRIDPOS_OFFSET UNITYSDK_OFFSET(0x171FCC50)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCLICKEMPTY_OFFSET UNITYSDK_OFFSET(0x171FC0C0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERJOYSTICKINPUT_OFFSET UNITYSDK_OFFSET(0x171FB030)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERJOYSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0x171FB0A0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERPRESSMENUCANCEL_OFFSET UNITYSDK_OFFSET(0x171FB140)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERPRESSMENUCONFIRM_OFFSET UNITYSDK_OFFSET(0x171FB100)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERPRESSMENU_OFFSET UNITYSDK_OFFSET(0x171FB180)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONDRAGGINGITEMBEGIN_OFFSET UNITYSDK_OFFSET(0x171F6A90)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONDRAGGINGITEMEND_OFFSET UNITYSDK_OFFSET(0x171F6370)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONDRAGGINGITEM_OFFSET UNITYSDK_OFFSET(0x171F6BC0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONFINISH_OFFSET UNITYSDK_OFFSET(0x171F86C0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONHOVERITEM_OFFSET UNITYSDK_OFFSET(0x171F60D0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONNOTIFYCLICKEXIT_OFFSET UNITYSDK_OFFSET(0x171FDE60)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONNOTIFYCLICKRESET_OFFSET UNITYSDK_OFFSET(0x171FDC70)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONQUIT_OFFSET UNITYSDK_OFFSET(0x171F85B0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONSELECTITEMUP_OFFSET UNITYSDK_OFFSET(0x171F6650)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0x171FB910)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_RUNTIMEINIT_OFFSET UNITYSDK_OFFSET(0x171F6DB0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_RUNTIMERESET_OFFSET UNITYSDK_OFFSET(0x171F8370)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_SETTARGETONHOVER_OFFSET UNITYSDK_OFFSET(0x171FB1C0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_SETTARGETONSELECT_OFFSET UNITYSDK_OFFSET(0x171FBB00)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0x171F7E80)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_SWITCHPUZZLEPANEL_OFFSET UNITYSDK_OFFSET(0x171FD6B0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_TRYDRAGITEMBYVIRTUALCURSOR_OFFSET UNITYSDK_OFFSET(0x171F6710)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_TRYHOVERITEMBYVIRTUALCURSOR_OFFSET UNITYSDK_OFFSET(0x171F5CF0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_TRYSELECTITEMBYVIRTUALCURSOR_OFFSET UNITYSDK_OFFSET(0x171F6250)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_TRYUNSELECTITEMBYVIRTUALCURSOR_OFFSET UNITYSDK_OFFSET(0x171F62C0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ADDIGNOREATTACHEDERAENTITY_OFFSET UNITYSDK_OFFSET(0x171FA2A0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__CLEARCURRENTINTERACTSTATE_OFFSET UNITYSDK_OFFSET(0x171FAF70)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__GETCLIPPEDPOSINBOARDV2_OFFSET UNITYSDK_OFFSET(0x171FC250)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__GETCLIPPEDPOSINBOARD_OFFSET UNITYSDK_OFFSET(0x171FC9A0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONBACKBTNCLICK_OFFSET UNITYSDK_OFFSET(0x171FE030)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONCHECKFINISH_OFFSET UNITYSDK_OFFSET(0x171FC810)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONENDINTERACTION_OFFSET UNITYSDK_OFFSET(0x171F8600)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONEVENT_OFFSET UNITYSDK_OFFSET(0x171FAC70)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONFINISHPUZZLE_OFFSET UNITYSDK_OFFSET(0x171FC920)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONGPCHANGE_OFFSET UNITYSDK_OFFSET(0x171FAE10)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONNOTIFYSWITCHTOJOYSTICK_OFFSET UNITYSDK_OFFSET(0x171FAF20)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONOWNERENTITYVISIBLECHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x171FACF0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONSTARTINTERACTION_OFFSET UNITYSDK_OFFSET(0x171F82B0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ORACLEPUZZLEBEGINDATAREPORT_OFFSET UNITYSDK_OFFSET(0x171F8080)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ORACLEPUZZLEENDDATAREPORT_OFFSET UNITYSDK_OFFSET(0x171F95C0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__REFRESHMOVEITEMSCOLLIDERORDER_OFFSET UNITYSDK_OFFSET(0x171FB6D0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__REMOVEIGNOREATTACHEDERAENTITY_OFFSET UNITYSDK_OFFSET(0x171F9060)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__RUNTIMEINIT_B__22_0_OFFSET UNITYSDK_OFFSET(0x171FE5A0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETATTACHEDERAENTITYVISIBLE_OFFSET UNITYSDK_OFFSET(0x171FA3F0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETBOARDROOTHINTPICACTIVE_OFFSET UNITYSDK_OFFSET(0x171FA8E0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETFINISHPERFORM_OFFSET UNITYSDK_OFFSET(0x171FD330)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETMOVEABLEITEMORDER2TOP_OFFSET UNITYSDK_OFFSET(0x171FB590)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETPROPFLOATVALUE_OFFSET UNITYSDK_OFFSET(0x171FD890)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__STARTFADEINPERFORM_OFFSET UNITYSDK_OFFSET(0x171FA730)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__STARTFADEOUTPERFORM_OFFSET UNITYSDK_OFFSET(0x171FA940)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__STARTPUZZLEPANELTRANSITION_OFFSET UNITYSDK_OFFSET(0x171FD7A0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__TRANSITIONBOARDROOT_OFFSET UNITYSDK_OFFSET(0x171F89D0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__TRANSITITEMTOTOP_OFFSET UNITYSDK_OFFSET(0x171FB3E0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__TRIGGERGROUPEVENT_OFFSET UNITYSDK_OFFSET(0x171FE0C0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__UPDATEBOARDROOTHINTPICACTIVE_OFFSET UNITYSDK_OFFSET(0x171FA0D0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___STARTFADEINPERFORM_B__24_0_OFFSET UNITYSDK_OFFSET(0x171FE5E0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___STARTFADEINPERFORM_B__24_1_OFFSET UNITYSDK_OFFSET(0x171FE7E0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___STARTFADEOUTPERFORM_B__26_0_OFFSET UNITYSDK_OFFSET(0x171FE7F0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OraclePuzzleBoard_TypeDefinitionIndex = 81457;

	class OraclePuzzleBoard : public ::RPG::Client::Prop::InteractPuzzleBoardBase
	{
	public:
		::System::Boolean _IsInInteraction; // 0xB0
		::System::Boolean _IsGameStart; // 0xB1
		::System::Boolean _IsReportStart; // 0xB2
		::System::Byte _padding0[0x1];
		::System::UInt32 _SerializeNumber; // 0xB4
		::System::Single _ContinueTime; // 0xB8
		::System::Int32 _ResetCount; // 0xBC
		::System::Int32 _HelperCount; // 0xC0
		::System::Byte _padding1[0x4];
		::UnityEngine::Transform* PuzzleRoot; // 0xC8
		::System::Single PreviewScale; // 0xD0
		::System::Single BoardScale; // 0xD4
		::UnityEngine::GameObject* ItemPrefab; // 0xD8
		::UnityEngine::Vector2 ValidRegionCenter; // 0xE0
		::System::Single PreviewValidRegionRadius; // 0xE8
		::System::Single ValidRegionRadius; // 0xEC
		::Il2CppArray<::RPG::Client::Prop::OraclePuzzlePanel*>* OraclePanels; // 0xF0
		::System::Single FadeDuration; // 0xF8
		::System::Boolean IsHelperSelectMode; // 0xFC
		::System::Byte _padding2[0x3];
		::System::UInt32 _GroupID; // 0x100
		::System::UInt32 _InstacneID; // 0x104
		::RPG::GameCore::GameEntity* _OwnerRef; // 0x108
		::RPG::GameCore::PropComponent* _PropCompt; // 0x110
		::RPG::GameCore::GameEntity* _GroupEntityRef; // 0x118
		::BIDDFDEAEGB* _MapGroupDef; // 0x120
		::RPG::GameCore::EventManager* _EventManagerRef; // 0x128
		::RPG::Client::MonoEffectManager* _MonoEffectManagerRef; // 0x130
		::RPG::Client::Prop::OraclePuzzlePanel* _CurActivePanel; // 0x138
		::System::Int32 _CurPanelIndex; // 0x140
		::System::Byte _padding3[0x4];
		::RPG::Client::Prop::OraclePuzzleItem* _CurHoverItem; // 0x148
		::RPG::Client::Prop::OraclePuzzleItem* _CurDragItem; // 0x150
		::RPG::Client::Prop::OraclePuzzleItem* _CurSelectItem; // 0x158
		::KLKMCNOECAL* _ItemOutlinePrefab; // 0x160
		::RPG::Client::Effect_OracleOutlineMonoPlugin* _OutlinePlugin; // 0x168
		::UnityEngine::Animator* _OutlineAnimator; // 0x170
		::NEOCEOCDEAF* _TransmitFade; // 0x178
		::UnityEngine::Transform* _BoardRootHintPic; // 0x180
		::System::Boolean _IsPuzzleUnlock; // 0x188
		::System::Byte _padding4[0x3];
		::UnityEngine::Color _HintInitColor; // 0x18C
		::System::Boolean _IsGameFinish; // 0x19C
		static ::System::String** StaticGet__GroupEventStartLinePerform()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "OraclePuzzleBoard")->GetStaticField(0x44AC0);
		}

		static ::Il2CppArray<::System::UInt32>** StaticGet__AttachedPropIDs()
		{
			return (::Il2CppArray<::System::UInt32>**)UnitySDK::FromName("RPG.Client.Prop", "OraclePuzzleBoard")->GetStaticField(0x44AC8);
		}

		static ::System::String** StaticGet_Oracle_Event_Pick()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "OraclePuzzleBoard")->GetStaticField(0x44AD0);
		}

		static ::System::String** StaticGet__OraclePuzzleInitGroupEvent()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "OraclePuzzleBoard")->GetStaticField(0x44AD8);
		}

		static ::System::String** StaticGet_Oracle_StateGroup_Name()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "OraclePuzzleBoard")->GetStaticField(0x44AE0);
		}

		static ::System::String** StaticGet_Oracle_Event_Drop()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "OraclePuzzleBoard")->GetStaticField(0x44AE8);
		}

		static ::System::String** StaticGet_ORACLE_CONFIG_PATH()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "OraclePuzzleBoard")->GetStaticField(0x44AF0);
		}

		static ::RPG::Client::OraclePuzzleCommonConfig** StaticGet_OracleConfig()
		{
			return (::RPG::Client::OraclePuzzleCommonConfig**)UnitySDK::FromName("RPG.Client.Prop", "OraclePuzzleBoard")->GetStaticField(0x44AF8);
		}

		static ::System::String** StaticGet_Oracle_StateEnter_Name()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "OraclePuzzleBoard")->GetStaticField(0x44B00);
		}

		static ::System::String** StaticGet_Oracle_Event_Finish()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "OraclePuzzleBoard")->GetStaticField(0x44B08);
		}

		static ::RPG::Client::Prop::OraclePuzzleBoard** StaticGet_CurrentActivePuzzleBoard()
		{
			return (::RPG::Client::Prop::OraclePuzzleBoard**)UnitySDK::FromName("RPG.Client.Prop", "OraclePuzzleBoard")->GetStaticField(0x44B10);
		}

		static ::System::String** StaticGet_Oracle_StateExit_Name()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "OraclePuzzleBoard")->GetStaticField(0x44B18);
		}

		static ::System::String** StaticGet__CurrentPuzzleIndexDynamicValue()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "OraclePuzzleBoard")->GetStaticField(0x44B20);
		}

		static ::System::String** StaticGet__Gamekey()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "OraclePuzzleBoard")->GetStaticField(0x44B28);
		}

		static ::System::String** StaticGet__GroupEventEndLinePerform()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "OraclePuzzleBoard")->GetStaticField(0x44B30);
		}

		static ::System::String** StaticGet_Oracle_GroupProperty_PuzzleStateName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "OraclePuzzleBoard")->GetStaticField(0x44B38);
		}

		static ::System::Int32* StaticGet_MainColorPropertID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "OraclePuzzleBoard")->GetStaticField(0xDAA0);
		}

		static ::System::Int32* StaticGet__Complete()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "OraclePuzzleBoard")->GetStaticField(0xDAA4);
		}

		static ::System::Int32* StaticGet__IsHover()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "OraclePuzzleBoard")->GetStaticField(0xDAA8);
		}

		static ::System::Int32* StaticGet_PerformGridSize()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "OraclePuzzleBoard")->GetStaticField(0xDAAC);
		}

		static ::System::Single* StaticGet_PinZGap()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client.Prop", "OraclePuzzleBoard")->GetStaticField(0xDAB0);
		}

		static ::System::Int32* StaticGet_DitherOnpRropertyID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "OraclePuzzleBoard")->GetStaticField(0xDAB4);
		}

		static ::System::Single* StaticGet_GridRange()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client.Prop", "OraclePuzzleBoard")->GetStaticField(0xDAB8);
		}

		static ::System::Int32* StaticGet_GridSize()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "OraclePuzzleBoard")->GetStaticField(0xDABC);
		}

		static ::System::Single* StaticGet_HoverZGap()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client.Prop", "OraclePuzzleBoard")->GetStaticField(0xDAC0);
		}

		static ::System::Int32* StaticGet__ItemState()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "OraclePuzzleBoard")->GetStaticField(0xDAC4);
		}

		static ::System::Int32* StaticGet_DitherAlphaPropertyID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "OraclePuzzleBoard")->GetStaticField(0xDAC8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_CCTOR_OFFSET))();
		}

		::System::Boolean HasHoverItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_HASHOVERITEM_OFFSET))(this);
		}

		::System::Boolean HasSelectItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_HASSELECTITEM_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetBoardCenterScreenPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETBOARDCENTERSCREENPOSITION_OFFSET))(this);
		}

		::System::Single GetBoardScreenRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETBOARDSCREENRADIUS_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetSelectItemCenterScreenPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETSELECTITEMCENTERSCREENPOSITION_OFFSET))(this);
		}

		::System::Void TryHoverItemByVirtualCursor(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_TRYHOVERITEMBYVIRTUALCURSOR_OFFSET))(this, a1);
		}

		::System::Void TrySelectItemByVirtualCursor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_TRYSELECTITEMBYVIRTUALCURSOR_OFFSET))(this);
		}

		::System::Void TryUnselectItemByVirtualCursor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_TRYUNSELECTITEMBYVIRTUALCURSOR_OFFSET))(this);
		}

		::System::Void TryDragItemByVirtualCursor(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_TRYDRAGITEMBYVIRTUALCURSOR_OFFSET))(this, a1);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void OnQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONQUIT_OFFSET))(this);
		}

		::System::Void OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONFINISH_OFFSET))(this);
		}

		::System::Void _OnStartInteraction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONSTARTINTERACTION_OFFSET))(this);
		}

		::System::Void _OnEndInteraction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONENDINTERACTION_OFFSET))(this);
		}

		::System::Void LateUpdatePuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_LATEUPDATEPUZZLE_OFFSET))(this, a1);
		}

		::System::Boolean CanPuzzleUnload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void RuntimeInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_RUNTIMEINIT_OFFSET))(this);
		}

		::System::Void RuntimeReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_RUNTIMERESET_OFFSET))(this);
		}

		::System::Void _StartFadeinPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__STARTFADEINPERFORM_OFFSET))(this);
		}

		::System::Void _TransitionBoardRoot(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__TRANSITIONBOARDROOT_OFFSET))(this, a1);
		}

		::System::Void _StartFadeoutPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__STARTFADEOUTPERFORM_OFFSET))(this);
		}

		::System::Void _SetBoardRootHintPicActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETBOARDROOTHINTPICACTIVE_OFFSET))(this, a1);
		}

		::System::Void _UpdateBoardRootHintPicActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__UPDATEBOARDROOTHINTPICACTIVE_OFFSET))(this);
		}

		::System::Void _OnEvent(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnOwnerEntityVisibleChangeEvent(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONOWNERENTITYVISIBLECHANGEEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnGPChange(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONGPCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void _OnNotifySwitchToJoyStick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONNOTIFYSWITCHTOJOYSTICK_OFFSET))(this, a1);
		}

		::System::Void OnControllerJoystickInput(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERJOYSTICKINPUT_OFFSET))(this, a1, a2);
		}

		::System::Void OnControllerJoystickRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERJOYSTICKRELEASE_OFFSET))(this);
		}

		::System::Void OnControllerPressMenuConfirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERPRESSMENUCONFIRM_OFFSET))(this);
		}

		::System::Void OnControllerPressMenuCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERPRESSMENUCANCEL_OFFSET))(this);
		}

		::System::Void OnControllerPressMenu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERPRESSMENU_OFFSET))(this);
		}

		::System::Void OnHoverItem(::RPG::Client::Prop::InteractPuzzleItemBase* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONHOVERITEM_OFFSET))(this, a1, a2);
		}

		::System::Void _TransitItemToTop(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__TRANSITITEMTOTOP_OFFSET))(this, a1);
		}

		::System::Void _SetMoveableItemOrder2Top(::RPG::Client::Prop::OraclePuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OraclePuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETMOVEABLEITEMORDER2TOP_OFFSET))(this, a1);
		}

		::System::Void _RefreshMoveItemsColliderOrder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__REFRESHMOVEITEMSCOLLIDERORDER_OFFSET))(this);
		}

		::System::Void OnSelectItem(::RPG::Client::Prop::InteractPuzzleItemBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONSELECTITEM_OFFSET))(this, a1);
		}

		::System::Void OnSelectItemUp(::RPG::Client::Prop::InteractPuzzleItemBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONSELECTITEMUP_OFFSET))(this, a1);
		}

		::System::Void OnClickEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCLICKEMPTY_OFFSET))(this);
		}

		::System::Void OnDraggingItemBegin(::RPG::Client::Prop::InteractPuzzleItemBase* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONDRAGGINGITEMBEGIN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnDraggingItemEnd(::RPG::Client::Prop::InteractPuzzleItemBase* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONDRAGGINGITEMEND_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnCheckFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONCHECKFINISH_OFFSET))(this);
		}

		::UnityEngine::Vector3 _GetClippedPosInBoard(::RPG::Client::Prop::OraclePuzzleItem* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::Prop::OraclePuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__GETCLIPPEDPOSINBOARD_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 _GetClippedPosInBoardV2(::RPG::Client::Prop::OraclePuzzleItem* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::Prop::OraclePuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__GETCLIPPEDPOSINBOARDV2_OFFSET))(this, a1);
		}

		::System::Void OnDraggingItem(::RPG::Client::Prop::InteractPuzzleItemBase* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONDRAGGINGITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FinishPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_FINISHPUZZLE_OFFSET))(this);
		}

		::System::Void _OnFinishPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONFINISHPUZZLE_OFFSET))(this);
		}

		::System::Void _SetFinishPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETFINISHPERFORM_OFFSET))(this);
		}

		::System::Void SwitchPuzzlePanel(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_SWITCHPUZZLEPANEL_OFFSET))(this, a1);
		}

		::System::Int32 GetCurrentPanelIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETCURRENTPANELINDEX_OFFSET))(this);
		}

		::System::Int32 GetPuzzlePanelsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETPUZZLEPANELSCOUNT_OFFSET))(this);
		}

		::System::Void ExecuteCurrentPuzzleHelper()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_EXECUTECURRENTPUZZLEHELPER_OFFSET))(this);
		}

		::System::Void CancelCurrentPuzzleHelper()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_CANCELCURRENTPUZZLEHELPER_OFFSET))(this);
		}

		::System::Void SetTargetOnHover(::RPG::Client::Prop::OraclePuzzleItem* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OraclePuzzleItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_SETTARGETONHOVER_OFFSET))(this, a1, a2);
		}

		::System::Void SetTargetOnSelect(::RPG::Client::Prop::OraclePuzzleItem* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OraclePuzzleItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_SETTARGETONSELECT_OFFSET))(this, a1, a2);
		}

		::System::Void ClearOutline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_CLEAROUTLINE_OFFSET))(this);
		}

		::System::Void OnNotifyClickReset(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONNOTIFYCLICKRESET_OFFSET))(this, a1);
		}

		::System::Void OnNotifyClickExit(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONNOTIFYCLICKEXIT_OFFSET))(this, a1);
		}

		::System::Void _OnBackBtnClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONBACKBTNCLICK_OFFSET))(this, a1);
		}

		::System::Void _ClearCurrentInteractState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__CLEARCURRENTINTERACTSTATE_OFFSET))(this);
		}

		::System::Void _TriggerGroupEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__TRIGGERGROUPEVENT_OFFSET))(this, a1);
		}

		::System::Void _SetPropFloatValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETPROPFLOATVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void _StartPuzzlePanelTransition(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__STARTPUZZLEPANELTRANSITION_OFFSET))(this, a1);
		}

		::System::Void _OraclePuzzleBeginDataReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ORACLEPUZZLEBEGINDATAREPORT_OFFSET))(this);
		}

		::System::Void _OraclePuzzleEndDataReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ORACLEPUZZLEENDDATAREPORT_OFFSET))(this);
		}

		::System::Void _AddIgnoreAttachedEraEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ADDIGNOREATTACHEDERAENTITY_OFFSET))(this);
		}

		::System::Void _RemoveIgnoreAttachedEraEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__REMOVEIGNOREATTACHEDERAENTITY_OFFSET))(this);
		}

		::System::Void _SetAttachedEraEntityVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETATTACHEDERAENTITYVISIBLE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsHelperAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GET_ISHELPERAVAILABLE_OFFSET))(this);
		}

		static ::System::Void LoadOracleConfigIfNot()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_LOADORACLECONFIGIFNOT_OFFSET))();
		}

		static ::System::Single GetPerformCellSize()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETPERFORMCELLSIZE_OFFSET))();
		}

		static ::System::Single GetCellSize()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETCELLSIZE_OFFSET))();
		}

		static ::System::Single GetDynamicRadtio()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETDYNAMICRADTIO_OFFSET))();
		}

		static ::UnityEngine::Vector2 GetBoardOrigin()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETBOARDORIGIN_OFFSET))();
		}

		static ::UnityEngine::Vector2Int LocalPos2GridPos(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_LOCALPOS2GRIDPOS_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2 GridPos2LocalPos(::UnityEngine::Vector2Int a1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GRIDPOS2LOCALPOS_OFFSET))(a1);
		}

		::System::Void _RuntimeInit_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__RUNTIMEINIT_B__22_0_OFFSET))(this);
		}

		::System::Void __StartFadeinPerform_b__24_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___STARTFADEINPERFORM_B__24_0_OFFSET))(this);
		}

		::System::Void __StartFadeinPerform_b__24_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___STARTFADEINPERFORM_B__24_1_OFFSET))(this);
		}

		::System::Void __StartFadeoutPerform_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___STARTFADEOUTPERFORM_B__26_0_OFFSET))(this);
		}

	};
}
