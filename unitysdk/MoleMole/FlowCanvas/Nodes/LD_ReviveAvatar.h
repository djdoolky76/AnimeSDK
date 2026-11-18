#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_REVIVEAVATAR_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D1C820)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_REVIVEAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x10D1C8D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_ReviveAvatar_TypeDefinitionIndex = 65512;

	class LD_ReviveAvatar
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_REVIVEAVATAR__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::System::Int32>* TargetAvatarIndices, ::System::Single HPRatio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_REVIVEAVATAR_INVOKE_OFFSET))(this, TargetAvatarIndices, HPRatio);
		}
	};
}
