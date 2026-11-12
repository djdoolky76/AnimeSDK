#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class LittleGameSandboxGroupIsolationConfig; }

#define HMLMMHFCMIK_NKHICOENJKH_CTOR_OFFSET UNITYSDK_OFFSET(0x16D25E40)

inline static constexpr unsigned int HMLMMHFCMIK_NKHICOENJKH_TypeDefinitionIndex = 61909;

	class HMLMMHFCMIK_NKHICOENJKH : public ::System::Object
	{
	public:
		::RPG::GameCore::LittleGameSandboxGroupIsolationConfig* EABKOHGCHFP; // 0x10
		::System::UInt32 AJKMAOLMGDM; // 0x18
		::System::Int32 MBCACNKDMFG; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLMMHFCMIK_NKHICOENJKH_CTOR_OFFSET))(this);
		}

	};
