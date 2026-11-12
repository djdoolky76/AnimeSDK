#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GJDPEGIFLGB;

#define BLFCELFLAHN_HJMDLLADCID_PCGEKNCGMAH_CTOR_OFFSET UNITYSDK_OFFSET(0xC3FEE10)
#define BLFCELFLAHN_HJMDLLADCID_PCGEKNCGMAH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC3FE950)
#define BLFCELFLAHN_HJMDLLADCID_PCGEKNCGMAH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC3FED80)
#define BLFCELFLAHN_HJMDLLADCID_PCGEKNCGMAH_NINDHOGICJD_OFFSET UNITYSDK_OFFSET(0xC3FEA00)
#define BLFCELFLAHN_HJMDLLADCID_PCGEKNCGMAH_OGPHPDBCHJA_OFFSET UNITYSDK_OFFSET(0xC3FE870)

inline static constexpr unsigned int BLFCELFLAHN_HJMDLLADCID_PCGEKNCGMAH_TypeDefinitionIndex = 53400;

	class BLFCELFLAHN_HJMDLLADCID_PCGEKNCGMAH : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 LDGKLOMDNDK; // 0x10
		::System::Single BPFAGEDKECH; // 0x1C
		::UnityEngine::Vector3 HELPHCKJKJF; // 0x20
		::System::Single HPCHCEFOKJB; // 0x2C
		::UnityEngine::Vector3 BEDPGAOCOHG; // 0x30
		::System::Single NCKJGJHOOCF; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFCELFLAHN_HJMDLLADCID_PCGEKNCGMAH_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::Vector3 a1, ::GJDPEGIFLGB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::GJDPEGIFLGB*))((::PBYTE)hIl2Cpp + BLFCELFLAHN_HJMDLLADCID_PCGEKNCGMAH_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void OGPHPDBCHJA(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BLFCELFLAHN_HJMDLLADCID_PCGEKNCGMAH_OGPHPDBCHJA_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BLFCELFLAHN_HJMDLLADCID_PCGEKNCGMAH_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 NINDHOGICJD()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFCELFLAHN_HJMDLLADCID_PCGEKNCGMAH_NINDHOGICJD_OFFSET))(this);
		}

	};
