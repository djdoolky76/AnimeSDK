#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetAdvEffectForceField; }
namespace RPG::GameCore { class TaskContext; }

#define PPEECIBDLLE_CTOR_OFFSET UNITYSDK_OFFSET(0xC375AE0)
#define PPEECIBDLLE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC375B10)

inline static constexpr unsigned int PPEECIBDLLE_TypeDefinitionIndex = 55342;

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
