#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OONBHFCCFPN.h"
#include "unitysdk/UnityEngine/Vector3.h"

class LHDJJGJKHGN;

#define LFOBBHPLBOG_MJAMMHGHACD_OFFSET UNITYSDK_OFFSET(0x15DF7660)
#define LFOBBHPLBOG_NGEKBFOHPBF_OFFSET UNITYSDK_OFFSET(0x15DF7800)
#define LFOBBHPLBOG__CTOR_OFFSET UNITYSDK_OFFSET(0x15DF75F0)

inline static constexpr unsigned int LFOBBHPLBOG_TypeDefinitionIndex = 64941;

class LFOBBHPLBOG : public ::OONBHFCCFPN
{
public:
	::System::Void _ctor(::LHDJJGJKHGN* IPMMCGDMODG)
	{
		return ((::System::Void(*)(::PVOID, ::LHDJJGJKHGN*))((::PBYTE)hIl2Cpp + LFOBBHPLBOG__CTOR_OFFSET))(this, IPMMCGDMODG);
	}

	::System::Void MJAMMHGHACD(::UnityEngine::Vector3 HBEKKMCBGBK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LFOBBHPLBOG_MJAMMHGHACD_OFFSET))(this, HBEKKMCBGBK);
	}

	::System::Void NGEKBFOHPBF(::UnityEngine::Vector3 MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LFOBBHPLBOG_NGEKBFOHPBF_OFFSET))(this, MIALFKCCCPI);
	}
};
