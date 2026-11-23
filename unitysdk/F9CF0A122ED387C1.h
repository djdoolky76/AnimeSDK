#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ABC/Config/WwiseEvent.h"

#define F9CF0A122ED387C1_B996A70283B60FAC_OFFSET UNITYSDK_OFFSET(0x23BFE00)
#define F9CF0A122ED387C1_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x23BFDD0)
#define F9CF0A122ED387C1__CCTOR_OFFSET UNITYSDK_OFFSET(0x23BFE20)
#define F9CF0A122ED387C1__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F9CF0A122ED387C1_TypeDefinitionIndex = 3704;

class F9CF0A122ED387C1 : public ::System::Object
{
public:
	static ::F9CF0A122ED387C1** StaticGet_EE999965A1D2099B()
	{
		return (::F9CF0A122ED387C1**)Il2CppClass::FromTypeDefinitionIndex(F9CF0A122ED387C1_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::Boolean FC3208D7B8C7EE04(::ABC::Config::WwiseEvent BB8C609F76620E45, ::ABC::Config::WwiseEvent A0A0D02932F12CFD)
	{
		return ((::System::Boolean(*)(::PVOID, ::ABC::Config::WwiseEvent, ::ABC::Config::WwiseEvent))((::PBYTE)hIl2Cpp + F9CF0A122ED387C1_FC3208D7B8C7EE04_OFFSET))(this, BB8C609F76620E45, A0A0D02932F12CFD);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F9CF0A122ED387C1__CCTOR_OFFSET))();
	}

	::System::Int32 B996A70283B60FAC(::ABC::Config::WwiseEvent A86A90C31A146E9C)
	{
		return ((::System::Int32(*)(::PVOID, ::ABC::Config::WwiseEvent))((::PBYTE)hIl2Cpp + F9CF0A122ED387C1_B996A70283B60FAC_OFFSET))(this, A86A90C31A146E9C);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F9CF0A122ED387C1__CTOR_OFFSET))(this);
	}
};
