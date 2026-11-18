#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GPGMCFLNAJM;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define CFGNMICCBEK_OGHHJDLEMKN_OEPBMAKAINE_OFFSET UNITYSDK_OFFSET(0x16866480)
#define CFGNMICCBEK_OGHHJDLEMKN_OPEOJAKMNEI_OFFSET UNITYSDK_OFFSET(0x16866570)
#define CFGNMICCBEK_OGHHJDLEMKN__CTOR_OFFSET UNITYSDK_OFFSET(0x16866470)

inline static constexpr unsigned int CFGNMICCBEK_OGHHJDLEMKN_TypeDefinitionIndex = 91453;

class CFGNMICCBEK_OGHHJDLEMKN : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* IFKOKLCPMNF; // 0x10
	::System::Action_1<::GPGMCFLNAJM*>* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGNMICCBEK_OGHHJDLEMKN__CTOR_OFFSET))(this);
	}

	::System::Void OEPBMAKAINE(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_OGHHJDLEMKN_OEPBMAKAINE_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void OPEOJAKMNEI(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_OGHHJDLEMKN_OPEOJAKMNEI_OFFSET))(this, NAPFALLANDL);
	}
};
