#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_ByInAttackAngle; }
namespace RPG::GameCore { class TaskContext; }

#define KIMOBGCPCDC_CTOR_OFFSET UNITYSDK_OFFSET(0xB42F1F0)
#define KIMOBGCPCDC_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB42F2E0)

inline static constexpr unsigned int KIMOBGCPCDC_TypeDefinitionIndex = 52199;

	class KIMOBGCPCDC
	{
	public:
		::System::Single HGPLBEPDFEI; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByInAttackAngle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByInAttackAngle*))((::PBYTE)hIl2Cpp + KIMOBGCPCDC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIMOBGCPCDC_EVALUATE_OFFSET))(this);
		}

	};
