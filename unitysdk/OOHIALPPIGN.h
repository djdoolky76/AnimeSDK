#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvPlayerRide; }
namespace RPG::GameCore { class TaskContext; }

#define OOHIALPPIGN_CTOR_OFFSET UNITYSDK_OFFSET(0xC884D50)
#define OOHIALPPIGN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC884D80)

inline static constexpr unsigned int OOHIALPPIGN_TypeDefinitionIndex = 53580;

	class OOHIALPPIGN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvPlayerRide* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvPlayerRide*))((::PBYTE)hIl2Cpp + OOHIALPPIGN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHIALPPIGN_ONTASKBEGIN_OFFSET))(this);
		}

	};
