#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetDamageSharedTarget; }
namespace RPG::GameCore { class TaskContext; }

#define BFIEHBKDBIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1A959130)
#define BFIEHBKDBIM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A959160)

inline static constexpr unsigned int BFIEHBKDBIM_TypeDefinitionIndex = 56569;

	class BFIEHBKDBIM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDamageSharedTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDamageSharedTarget*))((::PBYTE)hIl2Cpp + BFIEHBKDBIM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFIEHBKDBIM_ONTASKBEGIN_OFFSET))(this);
		}

	};
