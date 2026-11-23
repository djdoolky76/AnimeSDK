#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BD3A8740614C4E0C;
class E37E29126C346A38;

#define B9E220E32ABD7265_BCB0A4DD6EA3B4C9_OFFSET UNITYSDK_OFFSET(0x1F9D7B0)
#define B9E220E32ABD7265__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9D9C0)

inline static constexpr unsigned int B9E220E32ABD7265_TypeDefinitionIndex = 7956;

class B9E220E32ABD7265 : public ::System::Object
{
public:
	static ::E37E29126C346A38** StaticGet_A94216347CD04F1D()
	{
		return (::E37E29126C346A38**)Il2CppClass::FromTypeDefinitionIndex(B9E220E32ABD7265_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::Int32 BCB0A4DD6EA3B4C9(::BD3A8740614C4E0C* BB8C609F76620E45, ::BD3A8740614C4E0C* A0A0D02932F12CFD)
	{
		return ((::System::Int32(*)(::PVOID, ::BD3A8740614C4E0C*, ::BD3A8740614C4E0C*))((::PBYTE)hIl2Cpp + B9E220E32ABD7265_BCB0A4DD6EA3B4C9_OFFSET))(this, BB8C609F76620E45, A0A0D02932F12CFD);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B9E220E32ABD7265__CTOR_OFFSET))(this);
	}
};
