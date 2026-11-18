#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HFKLNCBOHJA;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define CFGNMICCBEK_HDKHONPMHGH_BMHFOAFPAEI_OFFSET UNITYSDK_OFFSET(0x168661A0)
#define CFGNMICCBEK_HDKHONPMHGH_LMCDHKNPGGD_OFFSET UNITYSDK_OFFSET(0x16866210)
#define CFGNMICCBEK_HDKHONPMHGH__CTOR_OFFSET UNITYSDK_OFFSET(0x16866190)

inline static constexpr unsigned int CFGNMICCBEK_HDKHONPMHGH_TypeDefinitionIndex = 91449;

class CFGNMICCBEK_HDKHONPMHGH : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* IFKOKLCPMNF; // 0x10
	::System::Action_1<::HFKLNCBOHJA*>* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGNMICCBEK_HDKHONPMHGH__CTOR_OFFSET))(this);
	}

	::System::Void BMHFOAFPAEI(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_HDKHONPMHGH_BMHFOAFPAEI_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void LMCDHKNPGGD(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_HDKHONPMHGH_LMCDHKNPGGD_OFFSET))(this, NAPFALLANDL);
	}
};
