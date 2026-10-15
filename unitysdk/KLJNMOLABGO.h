#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropResetGachaMachine; }
namespace RPG::GameCore { class TaskContext; }

#define KLJNMOLABGO_CTOR_OFFSET UNITYSDK_OFFSET(0xB524ED0)
#define KLJNMOLABGO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB524F00)

inline static constexpr unsigned int KLJNMOLABGO_TypeDefinitionIndex = 58342;

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
