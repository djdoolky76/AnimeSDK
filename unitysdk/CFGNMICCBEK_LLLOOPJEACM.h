#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CFGNMICCBEK_LLLOOPJEACM_NMELJHFOCAA_OFFSET UNITYSDK_OFFSET(0x159BF700)
#define CFGNMICCBEK_LLLOOPJEACM_ODBAFNELALO_OFFSET UNITYSDK_OFFSET(0x159BF530)
#define CFGNMICCBEK_LLLOOPJEACM__CTOR_OFFSET UNITYSDK_OFFSET(0x159BF520)

inline static constexpr unsigned int CFGNMICCBEK_LLLOOPJEACM_TypeDefinitionIndex = 91457;

class CFGNMICCBEK_LLLOOPJEACM : public ::System::Object
{
public:
	::System::Boolean JDNCFFLOAOB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGNMICCBEK_LLLOOPJEACM__CTOR_OFFSET))(this);
	}

	::System::Boolean ODBAFNELALO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGNMICCBEK_LLLOOPJEACM_ODBAFNELALO_OFFSET))(this);
	}

	::System::Boolean NMELJHFOCAA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGNMICCBEK_LLLOOPJEACM_NMELJHFOCAA_OFFSET))(this);
	}
};
