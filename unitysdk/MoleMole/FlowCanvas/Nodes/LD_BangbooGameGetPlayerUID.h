#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_BANGBOOGAMEGETPLAYERUID_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B3EFD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_BANGBOOGAMEGETPLAYERUID__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3F010)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_BangbooGameGetPlayerUID_TypeDefinitionIndex = 88212;

	class LD_BangbooGameGetPlayerUID
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_BANGBOOGAMEGETPLAYERUID__CTOR_OFFSET))(this);
		}

		::System::UInt32 Invoke()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_BANGBOOGAMEGETPLAYERUID_INVOKE_OFFSET))(this);
		}
	};
}
