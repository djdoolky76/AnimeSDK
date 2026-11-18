#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FFPELGOHFEP;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define CFGNMICCBEK_KAOAGDDFBPI_FAJIEPGOCLI_OFFSET UNITYSDK_OFFSET(0x199FE1E0)
#define CFGNMICCBEK_KAOAGDDFBPI_MGLBBNLFNNJ_OFFSET UNITYSDK_OFFSET(0x199FE0F0)
#define CFGNMICCBEK_KAOAGDDFBPI__CTOR_OFFSET UNITYSDK_OFFSET(0x199FE0E0)

inline static constexpr unsigned int CFGNMICCBEK_KAOAGDDFBPI_TypeDefinitionIndex = 91433;

class CFGNMICCBEK_KAOAGDDFBPI : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* IFKOKLCPMNF; // 0x10
	::System::Action_1<::FFPELGOHFEP*>* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGNMICCBEK_KAOAGDDFBPI__CTOR_OFFSET))(this);
	}

	::System::Void MGLBBNLFNNJ(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_KAOAGDDFBPI_MGLBBNLFNNJ_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void FAJIEPGOCLI(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_KAOAGDDFBPI_FAJIEPGOCLI_OFFSET))(this, NAPFALLANDL);
	}
};
