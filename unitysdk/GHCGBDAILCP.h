#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCBJOJNLLC.h"
class NFAHODNHEKK;

#define GHCGBDAILCP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7BE870)
#define GHCGBDAILCP_FCKDPOPNLIB_OFFSET UNITYSDK_OFFSET(0x1D7BE880)
#define GHCGBDAILCP_TICK_OFFSET UNITYSDK_OFFSET(0x1D7BE9B0)

inline static constexpr unsigned int GHCGBDAILCP_TypeDefinitionIndex = 38271;

	class GHCGBDAILCP : public ::HOCBJOJNLLC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCGBDAILCP_CTOR_OFFSET))(this);
		}

		::System::Void FCKDPOPNLIB(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + GHCGBDAILCP_FCKDPOPNLIB_OFFSET))(this, a1);
		}

		::System::Void Tick(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + GHCGBDAILCP_TICK_OFFSET))(this, a1);
		}

	};
