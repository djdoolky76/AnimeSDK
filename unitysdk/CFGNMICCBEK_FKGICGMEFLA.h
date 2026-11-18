#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOCCBECFDKA;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define CFGNMICCBEK_FKGICGMEFLA_APCOAFHGCDC_OFFSET UNITYSDK_OFFSET(0x1532B770)
#define CFGNMICCBEK_FKGICGMEFLA_FNEOGBFJHKF_OFFSET UNITYSDK_OFFSET(0x1532B700)
#define CFGNMICCBEK_FKGICGMEFLA__CTOR_OFFSET UNITYSDK_OFFSET(0x1532B6F0)

inline static constexpr unsigned int CFGNMICCBEK_FKGICGMEFLA_TypeDefinitionIndex = 91442;

class CFGNMICCBEK_FKGICGMEFLA : public ::System::Object
{
public:
	::System::Action_1<::AOCCBECFDKA*>* EDNJGMKPFHG; // 0x10
	::System::Action_1<::System::Int32>* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGNMICCBEK_FKGICGMEFLA__CTOR_OFFSET))(this);
	}

	::System::Void FNEOGBFJHKF(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_FKGICGMEFLA_FNEOGBFJHKF_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void APCOAFHGCDC(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_FKGICGMEFLA_APCOAFHGCDC_OFFSET))(this, NAPFALLANDL);
	}
};
