#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREARANDOMNOWITHJUMPANDRANGE_INVOKE_OFFSET UNITYSDK_OFFSET(0x10418EE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREARANDOMNOWITHJUMPANDRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x10419360)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetAreaRandomNoWithJumpAndRange_TypeDefinitionIndex = 63955;

	class LD_AbyssS2_GetAreaRandomNoWithJumpAndRange
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREARANDOMNOWITHJUMPANDRANGE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Boolean isShared, ::System::Int32 jumpCount, ::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREARANDOMNOWITHJUMPANDRANGE_INVOKE_OFFSET))(this, isShared, jumpCount, min, max);
		}
	};
}
