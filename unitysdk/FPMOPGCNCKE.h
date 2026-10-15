#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareProjectileLifetime; }
namespace RPG::GameCore { class TaskContext; }

#define FPMOPGCNCKE_CTOR_OFFSET UNITYSDK_OFFSET(0x159205D0)
#define FPMOPGCNCKE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15920600)

inline static constexpr unsigned int FPMOPGCNCKE_TypeDefinitionIndex = 54556;

	class FPMOPGCNCKE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareProjectileLifetime* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareProjectileLifetime*))((::PBYTE)hIl2Cpp + FPMOPGCNCKE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMOPGCNCKE_EVALUATE_OFFSET))(this);
		}

	};
