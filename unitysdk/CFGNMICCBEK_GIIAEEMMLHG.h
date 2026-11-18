#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GPGMCFLNAJM;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define CFGNMICCBEK_GIIAEEMMLHG_OEPBMAKAINE_OFFSET UNITYSDK_OFFSET(0x159BF430)
#define CFGNMICCBEK_GIIAEEMMLHG_OPEOJAKMNEI_OFFSET UNITYSDK_OFFSET(0x159BF3C0)
#define CFGNMICCBEK_GIIAEEMMLHG__CTOR_OFFSET UNITYSDK_OFFSET(0x159BF3B0)

inline static constexpr unsigned int CFGNMICCBEK_GIIAEEMMLHG_TypeDefinitionIndex = 91456;

class CFGNMICCBEK_GIIAEEMMLHG : public ::System::Object
{
public:
	::System::Action_1<::GPGMCFLNAJM*>* EDNJGMKPFHG; // 0x10
	::System::Action_1<::System::Int32>* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGNMICCBEK_GIIAEEMMLHG__CTOR_OFFSET))(this);
	}

	::System::Void OPEOJAKMNEI(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_GIIAEEMMLHG_OPEOJAKMNEI_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void OEPBMAKAINE(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_GIIAEEMMLHG_OEPBMAKAINE_OFFSET))(this, NAPFALLANDL);
	}
};
