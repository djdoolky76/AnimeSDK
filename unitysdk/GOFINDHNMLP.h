#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroInterruptAllProjectiles; }

#define GOFINDHNMLP_CTOR_OFFSET UNITYSDK_OFFSET(0x15B2E2A0)
#define GOFINDHNMLP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B2E2D0)

inline static constexpr unsigned int GOFINDHNMLP_TypeDefinitionIndex = 58958;

	class GOFINDHNMLP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroInterruptAllProjectiles* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroInterruptAllProjectiles*))((::PBYTE)hIl2Cpp + GOFINDHNMLP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFINDHNMLP_ONTASKBEGIN_OFFSET))(this);
		}

	};
