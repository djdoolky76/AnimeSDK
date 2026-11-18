#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBPEMPMEMGK.h"
#include "unitysdk/System/Object.h"

class GFIGNLHKPPE;
class OAEFGCLEHHO;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }

#define GBKABJFJMND_BPKHFLMNOIC_HFCAGKFEIGM_OFFSET UNITYSDK_OFFSET(0x116DDA90)
#define GBKABJFJMND_BPKHFLMNOIC_KJDGCMOBCFD_OFFSET UNITYSDK_OFFSET(0x116DDAC0)
#define GBKABJFJMND_BPKHFLMNOIC_PEMDBAGCLGB_OFFSET UNITYSDK_OFFSET(0x116DDA60)
#define GBKABJFJMND_BPKHFLMNOIC__CTOR_OFFSET UNITYSDK_OFFSET(0x116DDA50)

inline static constexpr unsigned int GBKABJFJMND_BPKHFLMNOIC_TypeDefinitionIndex = 77393;

class GBKABJFJMND_BPKHFLMNOIC : public ::System::Object
{
public:
	::GFIGNLHKPPE* JAGAKFKMFOK; // 0x10
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* ANMGKDNDNJJ; // 0x18
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* DALMHKNCJNC; // 0x20
	::MBPEMPMEMGK KOKJBOHPONP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKABJFJMND_BPKHFLMNOIC__CTOR_OFFSET))(this);
	}

	::System::Void PEMDBAGCLGB(::OAEFGCLEHHO* EEOGNEDJCPO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GBKABJFJMND_BPKHFLMNOIC_PEMDBAGCLGB_OFFSET))(this, EEOGNEDJCPO);
	}

	::System::Void HFCAGKFEIGM(::MBPEMPMEMGK IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::MBPEMPMEMGK))((::PBYTE)hIl2Cpp + GBKABJFJMND_BPKHFLMNOIC_HFCAGKFEIGM_OFFSET))(this, IGAAKDOIPNN);
	}

	::System::Void KJDGCMOBCFD(::GFIGNLHKPPE* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::GFIGNLHKPPE*))((::PBYTE)hIl2Cpp + GBKABJFJMND_BPKHFLMNOIC_KJDGCMOBCFD_OFFSET))(this, IGAAKDOIPNN);
	}
};
