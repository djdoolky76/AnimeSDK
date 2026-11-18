#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define OIPAFACEMMK_OEOPBCPGEBF_JLOEMKCLBDE_OFFSET UNITYSDK_OFFSET(0x12935340)
#define OIPAFACEMMK_OEOPBCPGEBF_NJPEONCGKCF_OFFSET UNITYSDK_OFFSET(0x12935430)
#define OIPAFACEMMK_OEOPBCPGEBF__CTOR_OFFSET UNITYSDK_OFFSET(0x12935330)

inline static constexpr unsigned int OIPAFACEMMK_OEOPBCPGEBF_TypeDefinitionIndex = 40843;

class OIPAFACEMMK_OEOPBCPGEBF : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* DJCNCELJPOM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPAFACEMMK_OEOPBCPGEBF__CTOR_OFFSET))(this);
	}

	::System::Void JLOEMKCLBDE(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OIPAFACEMMK_OEOPBCPGEBF_JLOEMKCLBDE_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void NJPEONCGKCF(::OAEFGCLEHHO* JMFEPDAHBED)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OIPAFACEMMK_OEOPBCPGEBF_NJPEONCGKCF_OFFSET))(this, JMFEPDAHBED);
	}
};
