#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class ByIsPlanetFesBusinessDayFinished; }
namespace RPG::GameCore { class TaskContext; }

#define FHAENILMBAB_CTOR_OFFSET UNITYSDK_OFFSET(0x15770C40)
#define FHAENILMBAB_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15770C70)

inline static constexpr unsigned int FHAENILMBAB_TypeDefinitionIndex = 57982;

	class FHAENILMBAB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ByIsPlanetFesBusinessDayFinished* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ByIsPlanetFesBusinessDayFinished*))((::PBYTE)hIl2Cpp + FHAENILMBAB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHAENILMBAB_EVALUATE_OFFSET))(this);
		}

	};
