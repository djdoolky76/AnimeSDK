#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class ST_ByOnHit; }
namespace RPG::GameCore { class TaskContext; }

#define ODPIOCLJMIA_CTOR_OFFSET UNITYSDK_OFFSET(0xBDF2510)
#define ODPIOCLJMIA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBDF25D0)

inline static constexpr unsigned int ODPIOCLJMIA_TypeDefinitionIndex = 52201;

	class ODPIOCLJMIA
	{
	public:
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByOnHit* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByOnHit*))((::PBYTE)hIl2Cpp + ODPIOCLJMIA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODPIOCLJMIA_EVALUATE_OFFSET))(this);
		}

	};
