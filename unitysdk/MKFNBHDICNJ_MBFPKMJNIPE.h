#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MKFNBHDICNJ_MBFPKMJNIPE_NFMFAIPCLMB_OFFSET UNITYSDK_OFFSET(0x14DEF650)
#define MKFNBHDICNJ_MBFPKMJNIPE__CTOR_OFFSET UNITYSDK_OFFSET(0x14DEF640)

inline static constexpr unsigned int MKFNBHDICNJ_MBFPKMJNIPE_TypeDefinitionIndex = 61382;

class MKFNBHDICNJ_MBFPKMJNIPE : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_MBFPKMJNIPE__CTOR_OFFSET))(this);
	}

	::System::Void NFMFAIPCLMB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_MBFPKMJNIPE_NFMFAIPCLMB_OFFSET))(this);
	}
};
