#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCBJOJNLLC.h"
class NFAHODNHEKK;

#define GDPHKAGDFGN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C63A2F0)
#define GDPHKAGDFGN_FCKDPOPNLIB_OFFSET UNITYSDK_OFFSET(0x1C63A300)

inline static constexpr unsigned int GDPHKAGDFGN_TypeDefinitionIndex = 36091;

	class GDPHKAGDFGN : public ::HOCBJOJNLLC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDPHKAGDFGN_CTOR_OFFSET))(this);
		}

		::System::Void FCKDPOPNLIB(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + GDPHKAGDFGN_FCKDPOPNLIB_OFFSET))(this, a1);
		}

	};
