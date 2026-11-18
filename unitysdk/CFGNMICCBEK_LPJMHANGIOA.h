#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HFKLNCBOHJA;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define CFGNMICCBEK_LPJMHANGIOA_BMHFOAFPAEI_OFFSET UNITYSDK_OFFSET(0x16866310)
#define CFGNMICCBEK_LPJMHANGIOA_LMCDHKNPGGD_OFFSET UNITYSDK_OFFSET(0x16866380)
#define CFGNMICCBEK_LPJMHANGIOA__CTOR_OFFSET UNITYSDK_OFFSET(0x16866300)

inline static constexpr unsigned int CFGNMICCBEK_LPJMHANGIOA_TypeDefinitionIndex = 91461;

class CFGNMICCBEK_LPJMHANGIOA : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* IFKOKLCPMNF; // 0x10
	::System::Action_1<::HFKLNCBOHJA*>* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGNMICCBEK_LPJMHANGIOA__CTOR_OFFSET))(this);
	}

	::System::Void BMHFOAFPAEI(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_LPJMHANGIOA_BMHFOAFPAEI_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void LMCDHKNPGGD(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_LPJMHANGIOA_LMCDHKNPGGD_OFFSET))(this, NAPFALLANDL);
	}
};
