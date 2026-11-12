#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetAdvEffectForceField; }
namespace RPG::GameCore { class TaskContext; }

#define PPEECIBDLLE_CTOR_OFFSET UNITYSDK_OFFSET(0xCCB29D0)
#define PPEECIBDLLE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCCB2A00)

inline static constexpr unsigned int PPEECIBDLLE_TypeDefinitionIndex = 56525;

	class PPEECIBDLLE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAdvEffectForceField* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAdvEffectForceField*))((::PBYTE)hIl2Cpp + PPEECIBDLLE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPEECIBDLLE_ONTASKBEGIN_OFFSET))(this);
		}

	};
