#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOCCBECFDKA;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define CFGNMICCBEK_HGANEANFOLI_CECEHDMALAK_OFFSET UNITYSDK_OFFSET(0x1478DD60)
#define CFGNMICCBEK_HGANEANFOLI_GKLLMCACMDD_OFFSET UNITYSDK_OFFSET(0x1478DDD0)
#define CFGNMICCBEK_HGANEANFOLI__CTOR_OFFSET UNITYSDK_OFFSET(0x1478DD50)

inline static constexpr unsigned int CFGNMICCBEK_HGANEANFOLI_TypeDefinitionIndex = 91438;

class CFGNMICCBEK_HGANEANFOLI : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* IFKOKLCPMNF; // 0x10
	::System::Action_1<::AOCCBECFDKA*>* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGNMICCBEK_HGANEANFOLI__CTOR_OFFSET))(this);
	}

	::System::Void CECEHDMALAK(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_HGANEANFOLI_CECEHDMALAK_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void GKLLMCACMDD(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_HGANEANFOLI_GKLLMCACMDD_OFFSET))(this, NAPFALLANDL);
	}
};
