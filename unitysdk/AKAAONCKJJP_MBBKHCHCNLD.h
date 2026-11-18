#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NFIGGEGJDFA;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define AKAAONCKJJP_MBBKHCHCNLD_HACIMLPCDKE_OFFSET UNITYSDK_OFFSET(0x12D00BA0)
#define AKAAONCKJJP_MBBKHCHCNLD_PPHCBMBJBAP_OFFSET UNITYSDK_OFFSET(0x12D00C10)
#define AKAAONCKJJP_MBBKHCHCNLD__CTOR_OFFSET UNITYSDK_OFFSET(0x12D00B90)

inline static constexpr unsigned int AKAAONCKJJP_MBBKHCHCNLD_TypeDefinitionIndex = 42163;

class AKAAONCKJJP_MBBKHCHCNLD : public ::System::Object
{
public:
	::System::Action_1<::NFIGGEGJDFA*>* NKGCDDCMBCF; // 0x10
	::System::Action_1<::NFIGGEGJDFA*>* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAAONCKJJP_MBBKHCHCNLD__CTOR_OFFSET))(this);
	}

	::System::Void HACIMLPCDKE(::OAEFGCLEHHO* KGFGOODAFDH)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_MBBKHCHCNLD_HACIMLPCDKE_OFFSET))(this, KGFGOODAFDH);
	}

	::System::Void PPHCBMBJBAP(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_MBBKHCHCNLD_PPHCBMBJBAP_OFFSET))(this, BHDNBGLCNOM);
	}
};
