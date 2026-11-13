#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJMLJIJAFPD.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimPropSpawnerConfig; }

#define ACNCBDAMADO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D84E140)
#define ACNCBDAMADO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84E1A0)

inline static constexpr unsigned int ACNCBDAMADO_TypeDefinitionIndex = 44471;

	class ACNCBDAMADO : public ::System::Object
	{
	public:
		::BJMLJIJAFPD BPAPBAFOMCH; // 0x10
		::RPG::GameCore::FiveDimPropSpawnerConfig* EABKOHGCHFP; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNCBDAMADO_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNCBDAMADO_CLEAR_OFFSET))(this);
		}

	};
