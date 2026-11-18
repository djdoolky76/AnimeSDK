#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMNHAODNNAL.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELTIMER_INVOKE_OFFSET UNITYSDK_OFFSET(0x14AE5CC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELTIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x14AE5D50)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_CreateLevelTimer_TypeDefinitionIndex = 63762;

	class LD_CreateLevelTimer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELTIMER__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* timerKey, ::GMNHAODNNAL timerType, ::System::Single timerDuration, ::System::Boolean autoDestroy)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::GMNHAODNNAL, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELTIMER_INVOKE_OFFSET))(this, timerKey, timerType, timerDuration, autoDestroy);
		}
	};
}
