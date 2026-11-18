#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

class IGFKHLHKOAP_FBMDFOAEGJA;

#define IGFKHLHKOAP_BICGECENGCD_BBKPKLKEMBA_OFFSET UNITYSDK_OFFSET(0xB92CE30)
#define IGFKHLHKOAP_BICGECENGCD_CKDPPACDJKD_OFFSET UNITYSDK_OFFSET(0xB92CAA0)
#define IGFKHLHKOAP_BICGECENGCD_EFCJFFCIKIL_OFFSET UNITYSDK_OFFSET(0xB92CBD0)
#define IGFKHLHKOAP_BICGECENGCD__CTOR_OFFSET UNITYSDK_OFFSET(0xB92CA90)

inline static constexpr unsigned int IGFKHLHKOAP_BICGECENGCD_TypeDefinitionIndex = 64013;

class IGFKHLHKOAP_BICGECENGCD : public ::System::Object
{
public:
	::HOCDHMEPPEG MKLCFANNAJI; // 0x10
	::IGFKHLHKOAP_FBMDFOAEGJA* FGBNBFHOKAA; // 0x40
	::System::Int32 IAGDCPAMEHG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGFKHLHKOAP_BICGECENGCD__CTOR_OFFSET))(this);
	}

	::System::Void CKDPPACDJKD(::System::Int32 JMFEPDAHBED)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IGFKHLHKOAP_BICGECENGCD_CKDPPACDJKD_OFFSET))(this, JMFEPDAHBED);
	}

	::System::Void EFCJFFCIKIL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGFKHLHKOAP_BICGECENGCD_EFCJFFCIKIL_OFFSET))(this);
	}

	::System::Void BBKPKLKEMBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGFKHLHKOAP_BICGECENGCD_BBKPKLKEMBA_OFFSET))(this);
	}
};
