#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAHCPACOGOI.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransitEnvProfile; }

#define EDHOBNPLGLN_CTOR_OFFSET UNITYSDK_OFFSET(0x13315CF0)
#define EDHOBNPLGLN_PLNCKLJOJME_OFFSET UNITYSDK_OFFSET(0x13315D00)

inline static constexpr unsigned int EDHOBNPLGLN_TypeDefinitionIndex = 58765;

	class EDHOBNPLGLN : public ::BAHCPACOGOI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TransitEnvProfile* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TransitEnvProfile*))((::PBYTE)hIl2Cpp + EDHOBNPLGLN_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::EnviromentControlPriority PLNCKLJOJME()
		{
			return ((::RPG::GameCore::EnviromentControlPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHOBNPLGLN_PLNCKLJOJME_OFFSET))(this);
		}

	};
