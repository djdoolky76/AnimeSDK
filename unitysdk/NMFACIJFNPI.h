#pragma once
#include "unitysdk/unitysdk.h"
class NOEBJBDLNGN;
namespace RPG::GameCore { class ST_ByHasAbnormalState; }
namespace RPG::GameCore { class TaskContext; }

#define NMFACIJFNPI_CTOR_OFFSET UNITYSDK_OFFSET(0xBC7B990)
#define NMFACIJFNPI_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBC7BA50)

inline static constexpr unsigned int NMFACIJFNPI_TypeDefinitionIndex = 52193;

	class NMFACIJFNPI
	{
	public:
		::NOEBJBDLNGN* BBGDGPNAAJM; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByHasAbnormalState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByHasAbnormalState*))((::PBYTE)hIl2Cpp + NMFACIJFNPI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMFACIJFNPI_EVALUATE_OFFSET))(this);
		}

	};
