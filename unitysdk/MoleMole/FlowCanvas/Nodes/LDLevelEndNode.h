#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"

class AGJFJGEMIPB;
class CCLBHPFHKCL;
class ENGKPGFGGLM;
class MBIAMKBFLMK;
namespace System { class Action; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE_CLEARLAZYINSTANCE_OFFSET UNITYSDK_OFFSET(0x130C8D00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x130C91F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x130C9140)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x130C8D40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x130C8F40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__CCTOR_OFFSET UNITYSDK_OFFSET(0x130CACC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x130CACA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__ENDPERFORMCALL_OFFSET UNITYSDK_OFFSET(0x130C99D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__GMEXECUTED_OFFSET UNITYSDK_OFFSET(0x130C91A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__JUMPTOLASTCURTAIN_OFFSET UNITYSDK_OFFSET(0x130CAAC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__PLAYCAMERASEQUENCEANDASCRIPT_OFFSET UNITYSDK_OFFSET(0x130CA6F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__TRYINTERRUPTTYPELEVELEND_OFFSET UNITYSDK_OFFSET(0x130C9850)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__TRYPLAYDYNAMICENDPERFORMS_OFFSET UNITYSDK_OFFSET(0x130CA3E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__TRYWAITCUTSCENEWHENLEVELEND_OFFSET UNITYSDK_OFFSET(0x130C9D40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x130CACD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x130CACE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelEndNode_TypeDefinitionIndex = 43823;

	class LDLevelEndNode
	{
	public:
		static ::System::Boolean* StaticGet__isGmInvoke()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LDLevelEndNode_TypeDefinitionIndex)->GetStaticField(0xB150);
		}
		// static const ::System::String* TAG; // 0x0
		// static const ::System::Single MAX_WAIT_CS_SECONDS; // 0x0
		::MBIAMKBFLMK* roleModel; // 0x40
		::AGJFJGEMIPB* _levelDataComponent; // 0x48
		::System::Boolean _isExecuted; // 0x50
		::System::Byte _padding0[0x3];
		::Foundation::Coroutine::CoroutineHandle _coroutineHandle; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__CCTOR_OFFSET))();
		}

		static ::System::Void ClearLazyInstance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE_CLEARLAZYINSTANCE_OFFSET))();
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Boolean OnEventFromAnyone(::ENGKPGFGGLM* evt)
		{
			return ((::System::Boolean(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void _GmExecuted(::CCLBHPFHKCL* levelGmEnd)
		{
			return ((::System::Void(*)(::PVOID, ::CCLBHPFHKCL*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__GMEXECUTED_OFFSET))(this, levelGmEnd);
		}

		::System::Boolean Invoke(::System::Boolean success, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType performType, ::System::Boolean enableDelayExit, ::System::Single overrideDelayExitTime, ::System::Boolean onlySendServer)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE_INVOKE_OFFSET))(this, success, performType, enableDelayExit, overrideDelayExitTime, onlySendServer);
		}

		::System::Boolean _TryInterruptTypeLevelEnd(::System::Boolean success, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType performType, ::System::Boolean enableDelayExit, ::System::Single overrideDelayExitTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__TRYINTERRUPTTYPELEVELEND_OFFSET))(this, success, performType, enableDelayExit, overrideDelayExitTime);
		}

		::System::Void _EndPerformCall(::System::Boolean success, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType performType, ::System::Boolean enableDelayExit, ::System::Single overrideDelayExitTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__ENDPERFORMCALL_OFFSET))(this, success, performType, enableDelayExit, overrideDelayExitTime);
		}

		::System::Boolean _TryWaitCutSceneWhenLevelEnd(::System::Action* callback)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__TRYWAITCUTSCENEWHENLEVELEND_OFFSET))(this, callback);
		}

		::System::Void _PlayCameraSequenceAndAScript(::System::Boolean handlePlayLevelEndCameraPerformElseWhere, ::System::Single overrideDelayExitTime, ::System::Boolean enableDelayExit, ::System::Boolean success, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType performType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Boolean, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__PLAYCAMERASEQUENCEANDASCRIPT_OFFSET))(this, handlePlayLevelEndCameraPerformElseWhere, overrideDelayExitTime, enableDelayExit, success, performType);
		}

		::System::Boolean _TryPlayDynamicEndPerforms(::System::Action* onFinish)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__TRYPLAYDYNAMICENDPERFORMS_OFFSET))(this, onFinish);
		}

		::System::Void _JumpToLastCurtain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__JUMPTOLASTCURTAIN_OFFSET))(this);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
