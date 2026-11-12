#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCBJOJNLLC.h"
class NFAHODNHEKK;

#define GDPHKAGDFGN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7BBF70)
#define GDPHKAGDFGN_FCKDPOPNLIB_OFFSET UNITYSDK_OFFSET(0x1D7BBF80)

inline static constexpr unsigned int GDPHKAGDFGN_TypeDefinitionIndex = 37019;

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
