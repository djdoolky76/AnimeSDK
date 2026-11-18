#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJEKNGFCHAA.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_OPERATELEVELTIMER_INVOKE_OFFSET UNITYSDK_OFFSET(0x14AE6D50)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_OPERATELEVELTIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x14AE6DD0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_OperateLevelTimer_TypeDefinitionIndex = 70372;

	class LD_OperateLevelTimer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_OPERATELEVELTIMER__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* timerKey, ::GJEKNGFCHAA opCode, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::GJEKNGFCHAA, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_OPERATELEVELTIMER_INVOKE_OFFSET))(this, timerKey, opCode, value);
		}
	};
}
