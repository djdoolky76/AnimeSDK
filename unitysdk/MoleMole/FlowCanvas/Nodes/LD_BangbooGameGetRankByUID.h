#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_BANGBOOGAMEGETRANKBYUID_INVOKE_OFFSET UNITYSDK_OFFSET(0x13EDC3E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_BANGBOOGAMEGETRANKBYUID__CTOR_OFFSET UNITYSDK_OFFSET(0x13EDC430)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_BangbooGameGetRankByUID_TypeDefinitionIndex = 58980;

	class LD_BangbooGameGetRankByUID
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_BANGBOOGAMEGETRANKBYUID__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::UInt32 uid)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_BANGBOOGAMEGETRANKBYUID_INVOKE_OFFSET))(this, uid);
		}
	};
}
