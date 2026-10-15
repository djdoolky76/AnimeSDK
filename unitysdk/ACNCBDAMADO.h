#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJMLJIJAFPD.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimPropSpawnerConfig; }

#define ACNCBDAMADO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C877EA0)
#define ACNCBDAMADO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C877F00)

inline static constexpr unsigned int ACNCBDAMADO_TypeDefinitionIndex = 43489;

	class ACNCBDAMADO : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimPropSpawnerConfig* EABKOHGCHFP; // 0x10
		::BJMLJIJAFPD BPAPBAFOMCH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNCBDAMADO_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNCBDAMADO_CLEAR_OFFSET))(this);
		}

	};
