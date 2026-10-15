#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDEKNFKEEMB.h"
namespace RPG::GameCore { class FloorTargetAgentConfig; }

#define HNJFDEEHPLD_CTOR_OFFSET UNITYSDK_OFFSET(0x15D9BC10)
#define HNJFDEEHPLD_ISVALUEEQUALSTO_OFFSET UNITYSDK_OFFSET(0x15D9BC40)

inline static constexpr unsigned int HNJFDEEHPLD_TypeDefinitionIndex = 62089;

	class HNJFDEEHPLD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::FloorTargetAgentConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FloorTargetAgentConfig*))((::PBYTE)hIl2Cpp + HNJFDEEHPLD_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsValueEqualsTo(::KDEKNFKEEMB a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KDEKNFKEEMB))((::PBYTE)hIl2Cpp + HNJFDEEHPLD_ISVALUEEQUALSTO_OFFSET))(this, a1);
		}

	};
