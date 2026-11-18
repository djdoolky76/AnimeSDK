#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOCCBECFDKA;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define CFGNMICCBEK_AOBJMCGPANO_BJILFMJCKKP_OFFSET UNITYSDK_OFFSET(0x145B2C40)
#define CFGNMICCBEK_AOBJMCGPANO_MOAKDJBMFPJ_OFFSET UNITYSDK_OFFSET(0x145B2D30)
#define CFGNMICCBEK_AOBJMCGPANO__CTOR_OFFSET UNITYSDK_OFFSET(0x145B2C30)

inline static constexpr unsigned int CFGNMICCBEK_AOBJMCGPANO_TypeDefinitionIndex = 91445;

class CFGNMICCBEK_AOBJMCGPANO : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* IFKOKLCPMNF; // 0x10
	::System::Action_1<::AOCCBECFDKA*>* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGNMICCBEK_AOBJMCGPANO__CTOR_OFFSET))(this);
	}

	::System::Void BJILFMJCKKP(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_AOBJMCGPANO_BJILFMJCKKP_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void MOAKDJBMFPJ(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_AOBJMCGPANO_MOAKDJBMFPJ_OFFSET))(this, NAPFALLANDL);
	}
};
