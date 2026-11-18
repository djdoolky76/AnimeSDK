#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMUIVISIABLENODE_CHECKHAVEPERFORM_OFFSET UNITYSDK_OFFSET(0x180DF600)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMUIVISIABLENODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x180DF460)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMUIVISIABLENODE__CCTOR_OFFSET UNITYSDK_OFFSET(0x180DF6B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMUIVISIABLENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x180DF690)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDScenePerformUIVisiableNode_TypeDefinitionIndex = 45105;

	class LDScenePerformUIVisiableNode
	{
	public:
		static ::System::String** StaticGet_setupTag()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LDScenePerformUIVisiableNode_TypeDefinitionIndex)->GetStaticField(0x49FD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMUIVISIABLENODE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMUIVISIABLENODE__CCTOR_OFFSET))();
		}

		::System::Boolean Invoke(::System::String* StageName, ::Il2CppArray<::System::String*>* UIViews, ::System::Boolean PerformVisibleState)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMUIVISIABLENODE_INVOKE_OFFSET))(this, StageName, UIViews, PerformVisibleState);
		}

		::System::Boolean CheckHavePerform(::System::String* stageName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMUIVISIABLENODE_CHECKHAVEPERFORM_OFFSET))(this, stageName);
		}
	};
}
