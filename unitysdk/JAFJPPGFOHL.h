#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByPlayerGravityOppositeToCurrentSurface; }
namespace RPG::GameCore { class TaskContext; }

#define JAFJPPGFOHL_CTOR_OFFSET UNITYSDK_OFFSET(0x16544740)
#define JAFJPPGFOHL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16544770)

	class JAFJPPGFOHL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface*))((::PBYTE)hIl2Cpp + JAFJPPGFOHL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAFJPPGFOHL_EVALUATE_OFFSET))(this);
		}

	};
