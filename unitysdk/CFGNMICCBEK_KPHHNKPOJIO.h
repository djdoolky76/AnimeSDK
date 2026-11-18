#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOCCBECFDKA;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define CFGNMICCBEK_KPHHNKPOJIO_IODBEADILLO_OFFSET UNITYSDK_OFFSET(0x14F213D0)
#define CFGNMICCBEK_KPHHNKPOJIO_PHOKANOAFHE_OFFSET UNITYSDK_OFFSET(0x14F21440)
#define CFGNMICCBEK_KPHHNKPOJIO__CTOR_OFFSET UNITYSDK_OFFSET(0x14F213C0)

inline static constexpr unsigned int CFGNMICCBEK_KPHHNKPOJIO_TypeDefinitionIndex = 91443;

class CFGNMICCBEK_KPHHNKPOJIO : public ::System::Object
{
public:
	::System::Action_1<::AOCCBECFDKA*>* EDNJGMKPFHG; // 0x10
	::System::Action_1<::System::Int32>* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGNMICCBEK_KPHHNKPOJIO__CTOR_OFFSET))(this);
	}

	::System::Void IODBEADILLO(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_KPHHNKPOJIO_IODBEADILLO_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void PHOKANOAFHE(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_KPHHNKPOJIO_PHOKANOAFHE_OFFSET))(this, NAPFALLANDL);
	}
};
