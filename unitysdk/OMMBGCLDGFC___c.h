#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AEMCAOEICDG;
namespace System { template <typename T> class Action_1; }

#define OMMBGCLDGFC___C_AIKNDJKJEKN_OFFSET UNITYSDK_OFFSET(0xFD94AC0)
#define OMMBGCLDGFC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFD94A70)
#define OMMBGCLDGFC___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFD94AB0)

inline static constexpr unsigned int OMMBGCLDGFC___c_TypeDefinitionIndex = 68545;

class OMMBGCLDGFC___c : public ::System::Object
{
public:
	static ::System::Action_1<::AEMCAOEICDG*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::AEMCAOEICDG*>**)Il2CppClass::FromTypeDefinitionIndex(OMMBGCLDGFC___c_TypeDefinitionIndex)->GetStaticField(0x360C0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OMMBGCLDGFC___c_TypeDefinitionIndex)->GetStaticField(0x360C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMMBGCLDGFC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMBGCLDGFC___C__CTOR_OFFSET))(this);
	}

	::System::Void AIKNDJKJEKN(::AEMCAOEICDG* PFDGHBCJCNP)
	{
		return ((::System::Void(*)(::PVOID, ::AEMCAOEICDG*))((::PBYTE)hIl2Cpp + OMMBGCLDGFC___C_AIKNDJKJEKN_OFFSET))(this, PFDGHBCJCNP);
	}
};
