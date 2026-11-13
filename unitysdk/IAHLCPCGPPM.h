#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ForcePlayerMoveForwardOnly; }
namespace RPG::GameCore { class TaskContext; }

#define IAHLCPCGPPM_CTOR_OFFSET UNITYSDK_OFFSET(0x19422860)
#define IAHLCPCGPPM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19422890)

inline static constexpr unsigned int IAHLCPCGPPM_TypeDefinitionIndex = 59365;

	class IAHLCPCGPPM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ForcePlayerMoveForwardOnly* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ForcePlayerMoveForwardOnly*))((::PBYTE)hIl2Cpp + IAHLCPCGPPM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAHLCPCGPPM_ONTASKBEGIN_OFFSET))(this);
		}

	};
