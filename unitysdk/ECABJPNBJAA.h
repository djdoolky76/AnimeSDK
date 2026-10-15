#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCheckFloorCustomBool; }
namespace RPG::GameCore { class TaskContext; }

#define ECABJPNBJAA_CTOR_OFFSET UNITYSDK_OFFSET(0x12D05040)
#define ECABJPNBJAA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x12D05070)

	class ECABJPNBJAA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckFloorCustomBool* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckFloorCustomBool*))((::PBYTE)hIl2Cpp + ECABJPNBJAA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECABJPNBJAA_EVALUATE_OFFSET))(this);
		}

	};
