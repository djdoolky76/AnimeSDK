#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BGKCEMEMPMO;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define KFBAENHGMFB_ABDFPLIBABP_CIGHKIABMMK_OFFSET UNITYSDK_OFFSET(0x13C55380)
#define KFBAENHGMFB_ABDFPLIBABP_EOBKAFGPFLC_OFFSET UNITYSDK_OFFSET(0x13C553F0)
#define KFBAENHGMFB_ABDFPLIBABP__CTOR_OFFSET UNITYSDK_OFFSET(0x13C55370)

inline static constexpr unsigned int KFBAENHGMFB_ABDFPLIBABP_TypeDefinitionIndex = 78580;

class KFBAENHGMFB_ABDFPLIBABP : public ::System::Object
{
public:
	::System::Action_1<::BGKCEMEMPMO*>* AFKOOINGNAK; // 0x10
	::System::Action_1<::BGKCEMEMPMO*>* OIPJFHJAKLA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBAENHGMFB_ABDFPLIBABP__CTOR_OFFSET))(this);
	}

	::System::Void CIGHKIABMMK(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_ABDFPLIBABP_CIGHKIABMMK_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void EOBKAFGPFLC(::OAEFGCLEHHO* JMFEPDAHBED)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_ABDFPLIBABP_EOBKAFGPFLC_OFFSET))(this, JMFEPDAHBED);
	}
};
