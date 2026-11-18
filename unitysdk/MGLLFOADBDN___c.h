#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HHDPNCNDPCF;
namespace System { template <typename T> class Action_1; }

#define MGLLFOADBDN___C_PLACCFJJGGK_OFFSET UNITYSDK_OFFSET(0x17D274F0)
#define MGLLFOADBDN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D274A0)
#define MGLLFOADBDN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17D274E0)

inline static constexpr unsigned int MGLLFOADBDN___c_TypeDefinitionIndex = 64480;

class MGLLFOADBDN___c : public ::System::Object
{
public:
	static ::System::Action_1<::HHDPNCNDPCF*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::HHDPNCNDPCF*>**)Il2CppClass::FromTypeDefinitionIndex(MGLLFOADBDN___c_TypeDefinitionIndex)->GetStaticField(0x4D6B0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MGLLFOADBDN___c_TypeDefinitionIndex)->GetStaticField(0x4D6B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGLLFOADBDN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGLLFOADBDN___C__CTOR_OFFSET))(this);
	}

	::System::Void PLACCFJJGGK(::HHDPNCNDPCF* IJFDCJBKCDF)
	{
		return ((::System::Void(*)(::PVOID, ::HHDPNCNDPCF*))((::PBYTE)hIl2Cpp + MGLLFOADBDN___C_PLACCFJJGGK_OFFSET))(this, IJFDCJBKCDF);
	}
};
