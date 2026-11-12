#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropResetGachaMachine; }
namespace RPG::GameCore { class TaskContext; }

#define KLJNMOLABGO_CTOR_OFFSET UNITYSDK_OFFSET(0xBD767F0)
#define KLJNMOLABGO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD76820)

inline static constexpr unsigned int KLJNMOLABGO_TypeDefinitionIndex = 59598;

	class KLJNMOLABGO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropResetGachaMachine* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropResetGachaMachine*))((::PBYTE)hIl2Cpp + KLJNMOLABGO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJNMOLABGO_ONTASKBEGIN_OFFSET))(this);
		}

	};
