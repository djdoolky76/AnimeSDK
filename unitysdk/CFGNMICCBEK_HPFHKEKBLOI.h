#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOCCBECFDKA;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define CFGNMICCBEK_HPFHKEKBLOI_DAFEHFOPCAG_OFFSET UNITYSDK_OFFSET(0x13257850)
#define CFGNMICCBEK_HPFHKEKBLOI_PFIDHBOAGKG_OFFSET UNITYSDK_OFFSET(0x13257940)
#define CFGNMICCBEK_HPFHKEKBLOI__CTOR_OFFSET UNITYSDK_OFFSET(0x13257840)

inline static constexpr unsigned int CFGNMICCBEK_HPFHKEKBLOI_TypeDefinitionIndex = 91447;

class CFGNMICCBEK_HPFHKEKBLOI : public ::System::Object
{
public:
	::System::Action_1<::AOCCBECFDKA*>* EDNJGMKPFHG; // 0x10
	::System::Action_1<::System::Int32>* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGNMICCBEK_HPFHKEKBLOI__CTOR_OFFSET))(this);
	}

	::System::Void DAFEHFOPCAG(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_HPFHKEKBLOI_DAFEHFOPCAG_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void PFIDHBOAGKG(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_HPFHKEKBLOI_PFIDHBOAGKG_OFFSET))(this, NAPFALLANDL);
	}
};
