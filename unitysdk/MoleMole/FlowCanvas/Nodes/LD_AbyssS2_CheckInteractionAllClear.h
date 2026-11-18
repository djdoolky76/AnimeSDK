#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameplayTag.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CHECKINTERACTIONALLCLEAR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1623F3D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CHECKINTERACTIONALLCLEAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1623F480)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_CheckInteractionAllClear_TypeDefinitionIndex = 55269;

	class LD_AbyssS2_CheckInteractionAllClear
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CHECKINTERACTIONALLCLEAR__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* tag)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CHECKINTERACTIONALLCLEAR_INVOKE_OFFSET))(this, tag);
		}
	};
}
