#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREARANDOMNOWITHJUMP_INVOKE_OFFSET UNITYSDK_OFFSET(0x14AE4160)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREARANDOMNOWITHJUMP__CTOR_OFFSET UNITYSDK_OFFSET(0x14AE4510)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetAreaRandomNoWithJump_TypeDefinitionIndex = 77894;

	class LD_AbyssS2_GetAreaRandomNoWithJump
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREARANDOMNOWITHJUMP__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Boolean isShared, ::System::Int32 jumpCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREARANDOMNOWITHJUMP_INVOKE_OFFSET))(this, isShared, jumpCount);
		}
	};
}
