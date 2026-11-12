#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class InitLittleGameWithLevelConfig; }
namespace RPG::GameCore { class TaskContext; }

#define LCNAMEHEKPD_CTOR_OFFSET UNITYSDK_OFFSET(0xBEAC130)
#define LCNAMEHEKPD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBEAC160)

inline static constexpr unsigned int LCNAMEHEKPD_TypeDefinitionIndex = 54117;

	class LCNAMEHEKPD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InitLittleGameWithLevelConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InitLittleGameWithLevelConfig*))((::PBYTE)hIl2Cpp + LCNAMEHEKPD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCNAMEHEKPD_ONTASKBEGIN_OFFSET))(this);
		}

	};
