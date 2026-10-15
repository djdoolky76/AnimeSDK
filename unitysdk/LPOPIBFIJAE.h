#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ClearWeakness; }
namespace RPG::GameCore { class TaskContext; }

#define LPOPIBFIJAE_CTOR_OFFSET UNITYSDK_OFFSET(0xB836340)
#define LPOPIBFIJAE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB836370)

inline static constexpr unsigned int LPOPIBFIJAE_TypeDefinitionIndex = 54968;

	class LPOPIBFIJAE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearWeakness* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearWeakness*))((::PBYTE)hIl2Cpp + LPOPIBFIJAE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPOPIBFIJAE_ONTASKBEGIN_OFFSET))(this);
		}

	};
