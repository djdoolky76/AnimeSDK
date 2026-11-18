#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define KFBAENHGMFB_ECACLKDOLOA_AGDGMBLAOGF_OFFSET UNITYSDK_OFFSET(0x15B86BB0)
#define KFBAENHGMFB_ECACLKDOLOA_OGEAGGGFHOD_OFFSET UNITYSDK_OFFSET(0x15B86B40)
#define KFBAENHGMFB_ECACLKDOLOA__CTOR_OFFSET UNITYSDK_OFFSET(0x15B86B30)

inline static constexpr unsigned int KFBAENHGMFB_ECACLKDOLOA_TypeDefinitionIndex = 78598;

class KFBAENHGMFB_ECACLKDOLOA : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Action_1<::OAEFGCLEHHO*>* IOLCMHKHKGH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBAENHGMFB_ECACLKDOLOA__CTOR_OFFSET))(this);
	}

	::System::Void OGEAGGGFHOD(::OAEFGCLEHHO* KGFGOODAFDH)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_ECACLKDOLOA_OGEAGGGFHOD_OFFSET))(this, KGFGOODAFDH);
	}

	::System::Void AGDGMBLAOGF(::OAEFGCLEHHO* DAJPJKMHMFN)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_ECACLKDOLOA_AGDGMBLAOGF_OFFSET))(this, DAJPJKMHMFN);
	}
};
