#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define B447717C3C64CBEE_F5628F8349D4A8A6_EAFE7430389ED033_OFFSET UNITYSDK_OFFSET(0x3F2D770)
#define B447717C3C64CBEE_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3F2E0B0)
#define B447717C3C64CBEE_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B447717C3C64CBEE_F5628F8349D4A8A6_TypeDefinitionIndex = 19836;

class B447717C3C64CBEE_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::B447717C3C64CBEE_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::B447717C3C64CBEE_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(B447717C3C64CBEE_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::System::Object*>** StaticGet_FB5E19DD986E8C90()
	{
		return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(B447717C3C64CBEE_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B447717C3C64CBEE_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B447717C3C64CBEE_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void EAFE7430389ED033(::System::Object* E5EB06E4FD2C32F7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + B447717C3C64CBEE_F5628F8349D4A8A6_EAFE7430389ED033_OFFSET))(this, E5EB06E4FD2C32F7);
	}
};
