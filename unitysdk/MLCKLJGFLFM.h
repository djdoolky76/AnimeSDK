#pragma once
#include "unitysdk/unitysdk.h"
class ELKAKOOGJLB;
namespace RPG::GameCore { class TaskContext; }

#define MLCKLJGFLFM_CTOR_OFFSET UNITYSDK_OFFSET(0xB99FF80)
#define MLCKLJGFLFM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB99FFB0)
#define MLCKLJGFLFM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB99FFF0)

inline static constexpr unsigned int MLCKLJGFLFM_TypeDefinitionIndex = 53876;

	class MLCKLJGFLFM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ELKAKOOGJLB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ELKAKOOGJLB*))((::PBYTE)hIl2Cpp + MLCKLJGFLFM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCKLJGFLFM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCKLJGFLFM_ONTASKBEGIN_OFFSET))(this);
		}

	};
