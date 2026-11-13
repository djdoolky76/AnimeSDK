#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelMainPuzzleMonoStateBase.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelMainPuzzleStateType.h"
namespace RPG::Client::Prop { class ChimeraDuelMainPuzzleMonoStateView; }
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_ADD_ONENTERED_OFFSET UNITYSDK_OFFSET(0x1BFFAFA0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BFFBD50)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFFBD40)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_GETCHIMERADUELGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1BFFB860)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_GETVIEW_OFFSET UNITYSDK_OFFSET(0x1BFFB060)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_GET__STATETYPE_OFFSET UNITYSDK_OFFSET(0x1BFFAF50)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_LOADLINEUP_1_OFFSET UNITYSDK_OFFSET(0x1BFFB320)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_LOADLINEUP_OFFSET UNITYSDK_OFFSET(0x1BFFB0E0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0x1BFFB9C0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_ONEXIT_OFFSET UNITYSDK_OFFSET(0x1BFFBBD0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_PREPAREENTERBYUI_OFFSET UNITYSDK_OFFSET(0x1BFFB0A0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_REMOVE_ONENTERED_OFFSET UNITYSDK_OFFSET(0x1BFFB000)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE__SHOWUI_OFFSET UNITYSDK_OFFSET(0x1BFFBA30)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMainPuzzleEntranceState_TypeDefinitionIndex = 81110;

	class ChimeraDuelMainPuzzleEntranceState : public ::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateBase
	{
	public:
		::System::Action* OnEntered; // 0x28
		::System::Boolean _WouldEnterByUI; // 0x30
		static ::System::String** StaticGet__UIName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "ChimeraDuelMainPuzzleEntranceState")->GetStaticField(0x57240);
		}

		static ::System::String** StaticGet__UIPath()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "ChimeraDuelMainPuzzleEntranceState")->GetStaticField(0x57248);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_CCTOR_OFFSET))();
		}

		::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType get__StateType()
		{
			return ((::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_GET__STATETYPE_OFFSET))(this);
		}

		::System::Void add_OnEntered(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_ADD_ONENTERED_OFFSET))(this, a1);
		}

		::System::Void remove_OnEntered(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_REMOVE_ONENTERED_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateView* GetView()
		{
			return ((::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_GETVIEW_OFFSET))(this);
		}

		::System::Void PrepareEnterByUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_PREPAREENTERBYUI_OFFSET))(this);
		}

		::System::Void LoadLineup(::System::UInt32 a1, ::Il2CppArray<::RPG::GameCore::DynamicValue*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::DynamicValue*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_LOADLINEUP_OFFSET))(this, a1, a2);
		}

		::System::Void LoadLineup_1(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_LOADLINEUP_1_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::GameObject* GetChimeraDuelGameObject(::System::Int32 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_GETCHIMERADUELGAMEOBJECT_OFFSET))(this, a1);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_ONENTER_OFFSET))(this);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_ONEXIT_OFFSET))(this);
		}

		::System::Void _ShowUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE__SHOWUI_OFFSET))(this);
		}

	};
}
