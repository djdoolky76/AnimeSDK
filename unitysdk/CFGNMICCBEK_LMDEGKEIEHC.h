#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NPIDOFOHOEN;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define CFGNMICCBEK_LMDEGKEIEHC_LONKOEJDCOE_OFFSET UNITYSDK_OFFSET(0x14F21540)
#define CFGNMICCBEK_LMDEGKEIEHC_MKOPGBHPEHO_OFFSET UNITYSDK_OFFSET(0x14F21630)
#define CFGNMICCBEK_LMDEGKEIEHC__CTOR_OFFSET UNITYSDK_OFFSET(0x14F21530)

inline static constexpr unsigned int CFGNMICCBEK_LMDEGKEIEHC_TypeDefinitionIndex = 91437;

class CFGNMICCBEK_LMDEGKEIEHC : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* IFKOKLCPMNF; // 0x10
	::System::Action_1<::NPIDOFOHOEN*>* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGNMICCBEK_LMDEGKEIEHC__CTOR_OFFSET))(this);
	}

	::System::Void LONKOEJDCOE(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_LMDEGKEIEHC_LONKOEJDCOE_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void MKOPGBHPEHO(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_LMDEGKEIEHC_MKOPGBHPEHO_OFFSET))(this, NAPFALLANDL);
	}
};
