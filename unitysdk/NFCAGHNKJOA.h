#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCBJOJNLLC.h"
class NFAHODNHEKK;

#define NFCAGHNKJOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D914880)
#define NFCAGHNKJOA_FCKDPOPNLIB_OFFSET UNITYSDK_OFFSET(0x1D914890)
#define NFCAGHNKJOA_TICK_OFFSET UNITYSDK_OFFSET(0x1D914C00)

inline static constexpr unsigned int NFCAGHNKJOA_TypeDefinitionIndex = 38277;

	class NFCAGHNKJOA : public ::HOCBJOJNLLC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCAGHNKJOA_CTOR_OFFSET))(this);
		}

		::System::Void FCKDPOPNLIB(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + NFCAGHNKJOA_FCKDPOPNLIB_OFFSET))(this, a1);
		}

		::System::Void Tick(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + NFCAGHNKJOA_TICK_OFFSET))(this, a1);
		}

	};
