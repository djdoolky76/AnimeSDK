#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOCCBECFDKA;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define CFGNMICCBEK_LMNFKPNIPHJ_BILMNPFNAGD_OFFSET UNITYSDK_OFFSET(0x1454EFD0)
#define CFGNMICCBEK_LMNFKPNIPHJ_DOIFNADLLCF_OFFSET UNITYSDK_OFFSET(0x1454F040)
#define CFGNMICCBEK_LMNFKPNIPHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1454EFC0)

inline static constexpr unsigned int CFGNMICCBEK_LMNFKPNIPHJ_TypeDefinitionIndex = 91439;

class CFGNMICCBEK_LMNFKPNIPHJ : public ::System::Object
{
public:
	::System::Action_1<::AOCCBECFDKA*>* EDNJGMKPFHG; // 0x10
	::System::Action_1<::System::Int32>* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGNMICCBEK_LMNFKPNIPHJ__CTOR_OFFSET))(this);
	}

	::System::Void BILMNPFNAGD(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_LMNFKPNIPHJ_BILMNPFNAGD_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void DOIFNADLLCF(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_LMNFKPNIPHJ_DOIFNADLLCF_OFFSET))(this, NAPFALLANDL);
	}
};
