#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOCCBECFDKA;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define CFGNMICCBEK_OMECMMBANBA_ACNBKKKNMGP_OFFSET UNITYSDK_OFFSET(0x1478DFC0)
#define CFGNMICCBEK_OMECMMBANBA_FAFEBJJNJLF_OFFSET UNITYSDK_OFFSET(0x1478DED0)
#define CFGNMICCBEK_OMECMMBANBA__CTOR_OFFSET UNITYSDK_OFFSET(0x1478DEC0)

inline static constexpr unsigned int CFGNMICCBEK_OMECMMBANBA_TypeDefinitionIndex = 91448;

class CFGNMICCBEK_OMECMMBANBA : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* IFKOKLCPMNF; // 0x10
	::System::Action_1<::AOCCBECFDKA*>* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGNMICCBEK_OMECMMBANBA__CTOR_OFFSET))(this);
	}

	::System::Void FAFEBJJNJLF(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_OMECMMBANBA_FAFEBJJNJLF_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void ACNBKKKNMGP(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_OMECMMBANBA_ACNBKKKNMGP_OFFSET))(this, NAPFALLANDL);
	}
};
