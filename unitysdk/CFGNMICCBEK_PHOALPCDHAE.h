#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HBPNIMFGKBK;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define CFGNMICCBEK_PHOALPCDHAE_DFAOCCFPPJO_OFFSET UNITYSDK_OFFSET(0x159BF9D0)
#define CFGNMICCBEK_PHOALPCDHAE_LBIPEOEGJIP_OFFSET UNITYSDK_OFFSET(0x159BF8E0)
#define CFGNMICCBEK_PHOALPCDHAE__CTOR_OFFSET UNITYSDK_OFFSET(0x159BF8D0)

inline static constexpr unsigned int CFGNMICCBEK_PHOALPCDHAE_TypeDefinitionIndex = 91446;

class CFGNMICCBEK_PHOALPCDHAE : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* IFKOKLCPMNF; // 0x10
	::System::Action_1<::HBPNIMFGKBK*>* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGNMICCBEK_PHOALPCDHAE__CTOR_OFFSET))(this);
	}

	::System::Void LBIPEOEGJIP(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_PHOALPCDHAE_LBIPEOEGJIP_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void DFAOCCFPPJO(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_PHOALPCDHAE_DFAOCCFPPJO_OFFSET))(this, NAPFALLANDL);
	}
};
