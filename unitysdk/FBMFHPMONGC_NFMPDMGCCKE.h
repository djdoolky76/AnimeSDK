#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBMFHPMONGC_NGFAGONMJPE;
namespace System::Threading { class CancellationTokenSource; }

#define FBMFHPMONGC_NFMPDMGCCKE_NCGMIFFAOFC_OFFSET UNITYSDK_OFFSET(0x11CF4110)
#define FBMFHPMONGC_NFMPDMGCCKE__CTOR_OFFSET UNITYSDK_OFFSET(0x11CF4100)

inline static constexpr unsigned int FBMFHPMONGC_NFMPDMGCCKE_TypeDefinitionIndex = 50495;

class FBMFHPMONGC_NFMPDMGCCKE : public ::System::Object
{
public:
	::FBMFHPMONGC_NGFAGONMJPE* FGBNBFHOKAA; // 0x10
	::System::Threading::CancellationTokenSource* MPPGOFIIMEM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_NFMPDMGCCKE__CTOR_OFFSET))(this);
	}

	::System::Void NCGMIFFAOFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_NFMPDMGCCKE_NCGMIFFAOFC_OFFSET))(this);
	}
};
