#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvByIsEliteMonster; }
namespace RPG::GameCore { class TaskContext; }

#define LKPLJKHGOHI_CTOR_OFFSET UNITYSDK_OFFSET(0xB755AA0)
#define LKPLJKHGOHI_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB755AD0)

inline static constexpr unsigned int LKPLJKHGOHI_TypeDefinitionIndex = 54454;

	class LKPLJKHGOHI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByIsEliteMonster* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByIsEliteMonster*))((::PBYTE)hIl2Cpp + LKPLJKHGOHI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPLJKHGOHI_EVALUATE_OFFSET))(this);
		}

	};
