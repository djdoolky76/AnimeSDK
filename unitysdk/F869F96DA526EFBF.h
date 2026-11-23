#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ABC/Config/GUID.h"

#define F869F96DA526EFBF_B996A70283B60FAC_OFFSET UNITYSDK_OFFSET(0x261CB90)
#define F869F96DA526EFBF_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x261CB60)
#define F869F96DA526EFBF__CCTOR_OFFSET UNITYSDK_OFFSET(0x261CBB0)
#define F869F96DA526EFBF__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F869F96DA526EFBF_TypeDefinitionIndex = 5953;

class F869F96DA526EFBF : public ::System::Object
{
public:
	static ::F869F96DA526EFBF** StaticGet_EE999965A1D2099B()
	{
		return (::F869F96DA526EFBF**)Il2CppClass::FromTypeDefinitionIndex(F869F96DA526EFBF_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F869F96DA526EFBF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F869F96DA526EFBF__CTOR_OFFSET))(this);
	}

	::System::Int32 B996A70283B60FAC(::ABC::Config::GUID A86A90C31A146E9C)
	{
		return ((::System::Int32(*)(::PVOID, ::ABC::Config::GUID))((::PBYTE)hIl2Cpp + F869F96DA526EFBF_B996A70283B60FAC_OFFSET))(this, A86A90C31A146E9C);
	}

	::System::Boolean FC3208D7B8C7EE04(::ABC::Config::GUID BB8C609F76620E45, ::ABC::Config::GUID A0A0D02932F12CFD)
	{
		return ((::System::Boolean(*)(::PVOID, ::ABC::Config::GUID, ::ABC::Config::GUID))((::PBYTE)hIl2Cpp + F869F96DA526EFBF_FC3208D7B8C7EE04_OFFSET))(this, BB8C609F76620E45, A0A0D02932F12CFD);
	}
};
