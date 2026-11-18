#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECJHIMIBDCO.h"
#include "unitysdk/System/Object.h"

class CAONGKLFNGN;

#define LBJHIFOBLOE_BFNKPAAEGNM_OFFSET UNITYSDK_OFFSET(0x1793FCE0)
#define LBJHIFOBLOE_KDCKMCHLDAJ_OFFSET UNITYSDK_OFFSET(0x1793FCD0)
#define LBJHIFOBLOE_KNIPICMJMPE_OFFSET UNITYSDK_OFFSET(0x1793FD30)
#define LBJHIFOBLOE__CTOR_OFFSET UNITYSDK_OFFSET(0x1793FD70)

inline static constexpr unsigned int LBJHIFOBLOE_TypeDefinitionIndex = 82358;

class LBJHIFOBLOE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJHIFOBLOE__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::ECJHIMIBDCO>* KDCKMCHLDAJ()
	{
		return ((::Il2CppArray<::ECJHIMIBDCO>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJHIFOBLOE_KDCKMCHLDAJ_OFFSET))(this);
	}

	::System::Void BFNKPAAEGNM(::Il2CppArray<::CAONGKLFNGN*>* GPIBNMBEDHC)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::CAONGKLFNGN*>*))((::PBYTE)hIl2Cpp + LBJHIFOBLOE_BFNKPAAEGNM_OFFSET))(this, GPIBNMBEDHC);
	}

	::System::Void KNIPICMJMPE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJHIFOBLOE_KNIPICMJMPE_OFFSET))(this);
	}
};
