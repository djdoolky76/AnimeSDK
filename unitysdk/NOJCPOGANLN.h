#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAHCPACOGOI.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransitEnvProfile; }

#define NOJCPOGANLN_CTOR_OFFSET UNITYSDK_OFFSET(0xBCF26F0)
#define NOJCPOGANLN_PLNCKLJOJME_OFFSET UNITYSDK_OFFSET(0xBCF2700)

inline static constexpr unsigned int NOJCPOGANLN_TypeDefinitionIndex = 58766;

	class NOJCPOGANLN : public ::BAHCPACOGOI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TransitEnvProfile* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TransitEnvProfile*))((::PBYTE)hIl2Cpp + NOJCPOGANLN_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::EnviromentControlPriority PLNCKLJOJME()
		{
			return ((::RPG::GameCore::EnviromentControlPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + NOJCPOGANLN_PLNCKLJOJME_OFFSET))(this);
		}

	};
