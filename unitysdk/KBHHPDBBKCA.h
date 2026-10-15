#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UnlockTargetShield; }

#define KBHHPDBBKCA_CTOR_OFFSET UNITYSDK_OFFSET(0xB2FA760)
#define KBHHPDBBKCA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2FA790)

inline static constexpr unsigned int KBHHPDBBKCA_TypeDefinitionIndex = 55155;

	class KBHHPDBBKCA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UnlockTargetShield* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UnlockTargetShield*))((::PBYTE)hIl2Cpp + KBHHPDBBKCA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBHHPDBBKCA_ONTASKBEGIN_OFFSET))(this);
		}

	};
