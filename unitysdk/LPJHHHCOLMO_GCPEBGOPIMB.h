#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IPLAKIBOMCO;
class OAEFGCLEHHO;
namespace System { template <typename T1, typename T2> class Action_2; }

#define LPJHHHCOLMO_GCPEBGOPIMB_DFFBGCNGDPD_OFFSET UNITYSDK_OFFSET(0x156898B0)
#define LPJHHHCOLMO_GCPEBGOPIMB_OHKOFEICHBF_OFFSET UNITYSDK_OFFSET(0x15689920)
#define LPJHHHCOLMO_GCPEBGOPIMB__CTOR_OFFSET UNITYSDK_OFFSET(0x156884E0)

inline static constexpr unsigned int LPJHHHCOLMO_GCPEBGOPIMB_TypeDefinitionIndex = 46640;

class LPJHHHCOLMO_GCPEBGOPIMB : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::IPLAKIBOMCO*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_GCPEBGOPIMB__CTOR_OFFSET))(this);
	}

	::System::Void DFFBGCNGDPD(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_GCPEBGOPIMB_DFFBGCNGDPD_OFFSET))(this, DJCNCELJPOM);
	}

	::System::Void OHKOFEICHBF(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_GCPEBGOPIMB_OHKOFEICHBF_OFFSET))(this, DJCNCELJPOM);
	}
};
