#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOCCBECFDKA;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define CFGNMICCBEK_KACFICLMBHE_LCPEGFMNCGB_OFFSET UNITYSDK_OFFSET(0x1532B870)
#define CFGNMICCBEK_KACFICLMBHE_OHOPLCKCKGP_OFFSET UNITYSDK_OFFSET(0x1532B960)
#define CFGNMICCBEK_KACFICLMBHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1532B860)

inline static constexpr unsigned int CFGNMICCBEK_KACFICLMBHE_TypeDefinitionIndex = 91441;

class CFGNMICCBEK_KACFICLMBHE : public ::System::Object
{
public:
	::System::Action_1<::AOCCBECFDKA*>* EDNJGMKPFHG; // 0x10
	::System::Action_1<::System::Int32>* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGNMICCBEK_KACFICLMBHE__CTOR_OFFSET))(this);
	}

	::System::Void LCPEGFMNCGB(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_KACFICLMBHE_LCPEGFMNCGB_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void OHOPLCKCKGP(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_KACFICLMBHE_OHOPLCKCKGP_OFFSET))(this, NAPFALLANDL);
	}
};
