#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define A23FD37DE29E4F21_F2E46897FAAF31C8_OFFSET UNITYSDK_OFFSET(0x3AAC160)
#define A23FD37DE29E4F21_F984AC264077C34B_OFFSET UNITYSDK_OFFSET(0x3AAC340)
#define A23FD37DE29E4F21__CCTOR_OFFSET UNITYSDK_OFFSET(0x3AAC390)
#define A23FD37DE29E4F21__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A23FD37DE29E4F21_TypeDefinitionIndex = 12086;

class A23FD37DE29E4F21 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_EE35963A1047474D()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(A23FD37DE29E4F21_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Int32 F984AC264077C34B()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + A23FD37DE29E4F21_F984AC264077C34B_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A23FD37DE29E4F21__CTOR_OFFSET))(this);
	}

	static ::System::Int32 F2E46897FAAF31C8()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + A23FD37DE29E4F21_F2E46897FAAF31C8_OFFSET))();
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A23FD37DE29E4F21__CCTOR_OFFSET))();
	}
};
