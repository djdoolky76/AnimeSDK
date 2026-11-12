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

#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_CTOR_OFFSET UNITYSDK_OFFSET(0xE6FF140)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE7095F0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_EXIT_OFFSET UNITYSDK_OFFSET(0xE709950)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_GET_STATETYPE_OFFSET UNITYSDK_OFFSET(0xE7090B0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_GET__PREFAB_OFFSET UNITYSDK_OFFSET(0xE708F90)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_GET__VIEW_OFFSET UNITYSDK_OFFSET(0xE7090A0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_INIT_OFFSET UNITYSDK_OFFSET(0xE709130)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_ONENTER_OFFSET UNITYSDK_OFFSET(0xE6FDAC0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_ONEXIT_OFFSET UNITYSDK_OFFSET(0xE6FE940)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_PREPAREONSTARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xE709190)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_SET__VIEW_OFFSET UNITYSDK_OFFSET(0xE709090)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_SWITCHTO_OFFSET UNITYSDK_OFFSET(0xE709640)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE__CACHEVIRTUALCAMERAOBJECT_OFFSET UNITYSDK_OFFSET(0xE7094D0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE__CLEARVIEWONEXIT_OFFSET UNITYSDK_OFFSET(0xE7093E0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE__ONUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xE709A40)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE__PREPAREVIEWONENTER_OFFSET UNITYSDK_OFFSET(0xE709210)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMainPuzzleMonoStateBase_TypeDefinitionIndex = 81118;

	class ChimeraDuelMainPuzzleMonoStateBase : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateView* __View_k__BackingField; // 0x10
		::JLJCPILKAEG* _SharedContext; // 0x18
		::RPG::Client::Prop::IChimeraDuelMainPuzzleStateMachine* _StateMachine; // 0x20
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
