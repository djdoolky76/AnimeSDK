#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACJNPGBJEFE.h"
#include "unitysdk/KAKCDBGNJKN.h"
class FCOEMCEDLNL;
class MBFDBNPKBBM;

#define MBFDBNPKBBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E332FD0)
#define MBFDBNPKBBM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E332FE0)
#define MBFDBNPKBBM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E332FA0)

inline static constexpr unsigned int MBFDBNPKBBM_TypeDefinitionIndex = 23775;

	class MBFDBNPKBBM : public ::KAKCDBGNJKN
	{
	public:
		::ACJNPGBJEFE CFNAKPADAEB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFDBNPKBBM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MBFDBNPKBBM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MBFDBNPKBBM*))((::PBYTE)hIl2Cpp + MBFDBNPKBBM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MBFDBNPKBBM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MBFDBNPKBBM*))((::PBYTE)hIl2Cpp + MBFDBNPKBBM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
