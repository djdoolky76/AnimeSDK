#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelMainPuzzleStateType.h"
#include "unitysdk/System/Object.h"
class JLJCPILKAEG;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Prop { class ChimeraDuelMainPuzzleMonoStateView; }
namespace RPG::Client::Prop { class IChimeraDuelMainPuzzleStateMachine; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFF4CC0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BFFF140)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_EXIT_OFFSET UNITYSDK_OFFSET(0x1BFFF4A0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_GET_STATETYPE_OFFSET UNITYSDK_OFFSET(0x1BFFEC00)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_GET__PREFAB_OFFSET UNITYSDK_OFFSET(0x1BFFEAE0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_GET__VIEW_OFFSET UNITYSDK_OFFSET(0x1BFFEBF0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_INIT_OFFSET UNITYSDK_OFFSET(0x1BFFEC80)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_ONENTER_OFFSET UNITYSDK_OFFSET(0x1BFF3650)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_ONEXIT_OFFSET UNITYSDK_OFFSET(0x1BFF44C0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_PREPAREONSTARTPUZZLE_OFFSET UNITYSDK_OFFSET(0x1BFFECE0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_SET__VIEW_OFFSET UNITYSDK_OFFSET(0x1BFFEBE0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_SWITCHTO_OFFSET UNITYSDK_OFFSET(0x1BFFF190)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE__CACHEVIRTUALCAMERAOBJECT_OFFSET UNITYSDK_OFFSET(0x1BFFF020)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE__CLEARVIEWONEXIT_OFFSET UNITYSDK_OFFSET(0x1BFFEF30)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE__ONUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x1BFFF590)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE__PREPAREVIEWONENTER_OFFSET UNITYSDK_OFFSET(0x1BFFED60)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMainPuzzleMonoStateBase_TypeDefinitionIndex = 81117;

	class ChimeraDuelMainPuzzleMonoStateBase : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateView* __View_k__BackingField; // 0x10
		::RPG::Client::Prop::IChimeraDuelMainPuzzleStateMachine* _StateMachine; // 0x18
		::JLJCPILKAEG* _SharedContext; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get__Prefab()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_GET__PREFAB_OFFSET))(this);
		}

		::System::Void set__View(::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_SET__VIEW_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateView* get__View()
		{
			return ((::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_GET__VIEW_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType get_StateType()
		{
			return ((::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_GET_STATETYPE_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::Prop::IChimeraDuelMainPuzzleStateMachine* a1, ::JLJCPILKAEG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::IChimeraDuelMainPuzzleStateMachine*, ::JLJCPILKAEG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_INIT_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* PrepareOnStartPuzzle()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_PREPAREONSTARTPUZZLE_OFFSET))(this);
		}

		::System::Void _PrepareViewOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE__PREPAREVIEWONENTER_OFFSET))(this);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_ONENTER_OFFSET))(this);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_ONEXIT_OFFSET))(this);
		}

		::System::Void _ClearViewOnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE__CLEARVIEWONEXIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_DISPOSE_OFFSET))(this);
		}

		::System::Void SwitchTo(::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_SWITCHTO_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_EXIT_OFFSET))(this);
		}

		::System::Void _OnUIScreenSizeChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE__ONUISCREENSIZECHANGED_OFFSET))(this, a1);
		}

		::System::Void _CacheVirtualCameraObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE__CACHEVIRTUALCAMERAOBJECT_OFFSET))(this);
		}

	};
}
