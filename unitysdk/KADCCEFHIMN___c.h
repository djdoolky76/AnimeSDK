#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MDLKEKANMHL;
namespace System { template <typename T> class Action_1; }

#define KADCCEFHIMN___C_CBAJGDMJLEB_OFFSET UNITYSDK_OFFSET(0x157DADA0)
#define KADCCEFHIMN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x157DAD50)
#define KADCCEFHIMN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x157DAD90)

inline static constexpr unsigned int KADCCEFHIMN___c_TypeDefinitionIndex = 62799;

class KADCCEFHIMN___c : public ::System::Object
{
public:
	static ::System::Action_1<::MDLKEKANMHL*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::MDLKEKANMHL*>**)Il2CppClass::FromTypeDefinitionIndex(KADCCEFHIMN___c_TypeDefinitionIndex)->GetStaticField(0x4BD70);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KADCCEFHIMN___c_TypeDefinitionIndex)->GetStaticField(0x4BD78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KADCCEFHIMN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KADCCEFHIMN___C__CTOR_OFFSET))(this);
	}

	::System::Void CBAJGDMJLEB(::MDLKEKANMHL* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::MDLKEKANMHL*))((::PBYTE)hIl2Cpp + KADCCEFHIMN___C_CBAJGDMJLEB_OFFSET))(this, MNDIBLLFAJI);
	}
};
