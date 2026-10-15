#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class CorrectionPlayerTeleportPos; }
namespace RPG::GameCore { class TaskContext; }

#define KDNLDFONNMC_CTOR_OFFSET UNITYSDK_OFFSET(0xB361850)
#define KDNLDFONNMC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB361880)

inline static constexpr unsigned int KDNLDFONNMC_TypeDefinitionIndex = 58036;

	class KDNLDFONNMC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CorrectionPlayerTeleportPos* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CorrectionPlayerTeleportPos*))((::PBYTE)hIl2Cpp + KDNLDFONNMC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDNLDFONNMC_ONTASKBEGIN_OFFSET))(this);
		}

	};
