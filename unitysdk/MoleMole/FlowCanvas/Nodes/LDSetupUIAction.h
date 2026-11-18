#pragma once
#include "unitysdk/unitysdk.h"

class GOAJFEFIODL;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETUPUIACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x14307470)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETUPUIACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x143075D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetupUIAction_TypeDefinitionIndex = 57303;

	class LDSetupUIAction
	{
	public:
		::GOAJFEFIODL* _cacheActionConfig; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETUPUIACTION__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::System::String*>* HideUITags, ::System::Collections::Generic::List_1<::System::String*>* ShowUITags, ::System::Boolean IgnoreFadeAnimation, ::System::Int32 Priority, ::System::String* SetupTag, ::System::Collections::Generic::List_1<::System::String*>* HighLightTags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean, ::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETUPUIACTION_INVOKE_OFFSET))(this, HideUITags, ShowUITags, IgnoreFadeAnimation, Priority, SetupTag, HighLightTags);
		}
	};
}
