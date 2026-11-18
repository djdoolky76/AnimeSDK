#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOCCBECFDKA;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define CFGNMICCBEK_OOOHCILPBBE_HNIGOGKBPDN_OFFSET UNITYSDK_OFFSET(0x1153C700)
#define CFGNMICCBEK_OOOHCILPBBE_NHBIOCJFPNN_OFFSET UNITYSDK_OFFSET(0x1153C770)
#define CFGNMICCBEK_OOOHCILPBBE__CTOR_OFFSET UNITYSDK_OFFSET(0x1153C6F0)

inline static constexpr unsigned int CFGNMICCBEK_OOOHCILPBBE_TypeDefinitionIndex = 91434;

class CFGNMICCBEK_OOOHCILPBBE : public ::System::Object
{
public:
	::System::Action_1<::AOCCBECFDKA*>* EDNJGMKPFHG; // 0x10
	::System::Action_1<::System::Int32>* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGNMICCBEK_OOOHCILPBBE__CTOR_OFFSET))(this);
	}

	::System::Void HNIGOGKBPDN(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_OOOHCILPBBE_HNIGOGKBPDN_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void NHBIOCJFPNN(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_OOOHCILPBBE_NHBIOCJFPNN_OFFSET))(this, NAPFALLANDL);
	}
};
