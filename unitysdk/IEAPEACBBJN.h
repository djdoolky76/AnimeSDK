#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class CancelActionDelayLink; }
namespace RPG::GameCore { class TaskContext; }

#define IEAPEACBBJN_CTOR_OFFSET UNITYSDK_OFFSET(0x16E528B0)
#define IEAPEACBBJN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16E528E0)

inline static constexpr unsigned int IEAPEACBBJN_TypeDefinitionIndex = 56083;

	class IEAPEACBBJN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CancelActionDelayLink* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CancelActionDelayLink*))((::PBYTE)hIl2Cpp + IEAPEACBBJN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEAPEACBBJN_ONTASKBEGIN_OFFSET))(this);
		}

	};
