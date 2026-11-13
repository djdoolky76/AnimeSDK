#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropPredicateWithEntity; }
namespace RPG::GameCore { class TaskContext; }

#define LIJEEDGCBNK_CTOR_OFFSET UNITYSDK_OFFSET(0x172E8C30)
#define LIJEEDGCBNK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x172E8C60)

inline static constexpr unsigned int LIJEEDGCBNK_TypeDefinitionIndex = 54339;

	class LIJEEDGCBNK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropPredicateWithEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropPredicateWithEntity*))((::PBYTE)hIl2Cpp + LIJEEDGCBNK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJEEDGCBNK_ONTASKBEGIN_OFFSET))(this);
		}

	};
