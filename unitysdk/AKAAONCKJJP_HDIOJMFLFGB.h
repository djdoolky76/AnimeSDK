#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MCAFAFHBIHL;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define AKAAONCKJJP_HDIOJMFLFGB_DBDPAJADEGG_OFFSET UNITYSDK_OFFSET(0x16D8BBC0)
#define AKAAONCKJJP_HDIOJMFLFGB_NEAJJEGOOIP_OFFSET UNITYSDK_OFFSET(0x16D8BC30)
#define AKAAONCKJJP_HDIOJMFLFGB__CTOR_OFFSET UNITYSDK_OFFSET(0x16D8BBB0)

inline static constexpr unsigned int AKAAONCKJJP_HDIOJMFLFGB_TypeDefinitionIndex = 42195;

class AKAAONCKJJP_HDIOJMFLFGB : public ::System::Object
{
public:
	::System::Action_1<::MCAFAFHBIHL*>* NKGCDDCMBCF; // 0x10
	::System::Action_1<::MCAFAFHBIHL*>* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAAONCKJJP_HDIOJMFLFGB__CTOR_OFFSET))(this);
	}

	::System::Void DBDPAJADEGG(::OAEFGCLEHHO* KGFGOODAFDH)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_HDIOJMFLFGB_DBDPAJADEGG_OFFSET))(this, KGFGOODAFDH);
	}

	::System::Void NEAJJEGOOIP(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_HDIOJMFLFGB_NEAJJEGOOIP_OFFSET))(this, BHDNBGLCNOM);
	}
};
