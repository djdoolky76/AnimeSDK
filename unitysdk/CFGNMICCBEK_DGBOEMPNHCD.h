#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EAIPIDOCCOJ;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define CFGNMICCBEK_DGBOEMPNHCD_DFGLGECGEBB_OFFSET UNITYSDK_OFFSET(0x159BF250)
#define CFGNMICCBEK_DGBOEMPNHCD_IGJKBCIKOHF_OFFSET UNITYSDK_OFFSET(0x159BF340)
#define CFGNMICCBEK_DGBOEMPNHCD__CTOR_OFFSET UNITYSDK_OFFSET(0x159BF240)

inline static constexpr unsigned int CFGNMICCBEK_DGBOEMPNHCD_TypeDefinitionIndex = 91440;

class CFGNMICCBEK_DGBOEMPNHCD : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* IFKOKLCPMNF; // 0x10
	::System::Action_1<::EAIPIDOCCOJ*>* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGNMICCBEK_DGBOEMPNHCD__CTOR_OFFSET))(this);
	}

	::System::Void DFGLGECGEBB(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_DGBOEMPNHCD_DFGLGECGEBB_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void IGJKBCIKOHF(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_DGBOEMPNHCD_IGJKBCIKOHF_OFFSET))(this, NAPFALLANDL);
	}
};
