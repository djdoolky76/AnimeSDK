#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AbortInsertAbility; }
namespace RPG::GameCore { class TaskContext; }

#define IMEJHDMBAFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x164D2160)
#define IMEJHDMBAFJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164D2190)

inline static constexpr unsigned int IMEJHDMBAFJ_TypeDefinitionIndex = 54794;

	class IMEJHDMBAFJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AbortInsertAbility* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AbortInsertAbility*))((::PBYTE)hIl2Cpp + IMEJHDMBAFJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMEJHDMBAFJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
