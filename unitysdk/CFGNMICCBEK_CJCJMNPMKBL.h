#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOCCBECFDKA;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define CFGNMICCBEK_CJCJMNPMKBL_EDPPEIFKIMP_OFFSET UNITYSDK_OFFSET(0x1478DC60)
#define CFGNMICCBEK_CJCJMNPMKBL_FMODJKDOBKG_OFFSET UNITYSDK_OFFSET(0x1478DB10)
#define CFGNMICCBEK_CJCJMNPMKBL__CTOR_OFFSET UNITYSDK_OFFSET(0x1478DB00)

inline static constexpr unsigned int CFGNMICCBEK_CJCJMNPMKBL_TypeDefinitionIndex = 91455;

class CFGNMICCBEK_CJCJMNPMKBL : public ::System::Object
{
public:
	::System::Action_1<::AOCCBECFDKA*>* EDNJGMKPFHG; // 0x10
	::System::Action_1<::System::Int32>* IFKOKLCPMNF; // 0x18
	::System::UInt32 FHEIMLOCHJJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGNMICCBEK_CJCJMNPMKBL__CTOR_OFFSET))(this);
	}

	::System::Void FMODJKDOBKG(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_CJCJMNPMKBL_FMODJKDOBKG_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void EDPPEIFKIMP(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_CJCJMNPMKBL_EDPPEIFKIMP_OFFSET))(this, NAPFALLANDL);
	}
};
