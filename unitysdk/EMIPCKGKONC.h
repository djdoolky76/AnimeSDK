#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareIsWolfBroBulletActivated; }
namespace RPG::GameCore { class TaskContext; }

#define EMIPCKGKONC_CTOR_OFFSET UNITYSDK_OFFSET(0x16491570)
#define EMIPCKGKONC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x164915A0)

inline static constexpr unsigned int EMIPCKGKONC_TypeDefinitionIndex = 53680;

	class EMIPCKGKONC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated*))((::PBYTE)hIl2Cpp + EMIPCKGKONC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMIPCKGKONC_EVALUATE_OFFSET))(this);
		}

	};
