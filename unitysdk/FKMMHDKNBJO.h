#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class FiveDimRemoveGlobalTimeScale; }
namespace RPG::GameCore { class TaskContext; }

#define FKMMHDKNBJO_CTOR_OFFSET UNITYSDK_OFFSET(0x15810BE0)
#define FKMMHDKNBJO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15810C10)

inline static constexpr unsigned int FKMMHDKNBJO_TypeDefinitionIndex = 52857;

	class FKMMHDKNBJO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FiveDimRemoveGlobalTimeScale* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FiveDimRemoveGlobalTimeScale*))((::PBYTE)hIl2Cpp + FKMMHDKNBJO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKMMHDKNBJO_ONTASKBEGIN_OFFSET))(this);
		}

	};
