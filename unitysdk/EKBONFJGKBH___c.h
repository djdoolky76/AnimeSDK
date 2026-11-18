#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define EKBONFJGKBH___C_NLBKNGCKLPP_OFFSET UNITYSDK_OFFSET(0x14AA2100)
#define EKBONFJGKBH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14AA20B0)
#define EKBONFJGKBH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14AA20F0)

inline static constexpr unsigned int EKBONFJGKBH___c_TypeDefinitionIndex = 49254;

class EKBONFJGKBH___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__0_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(EKBONFJGKBH___c_TypeDefinitionIndex)->GetStaticField(0x40710);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EKBONFJGKBH___c_TypeDefinitionIndex)->GetStaticField(0x40718);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKBONFJGKBH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBONFJGKBH___C__CTOR_OFFSET))(this);
	}

	::System::Void NLBKNGCKLPP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBONFJGKBH___C_NLBKNGCKLPP_OFFSET))(this);
	}
};
