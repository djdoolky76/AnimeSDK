#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CKPKAALMLMN___C_OFOLLBPHKEC_OFFSET UNITYSDK_OFFSET(0x16A33150)
#define CKPKAALMLMN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A33100)
#define CKPKAALMLMN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16A33140)

inline static constexpr unsigned int CKPKAALMLMN___c_TypeDefinitionIndex = 73627;

class CKPKAALMLMN___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__37_12()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CKPKAALMLMN___c_TypeDefinitionIndex)->GetStaticField(0x4E1D0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CKPKAALMLMN___c_TypeDefinitionIndex)->GetStaticField(0x4E1D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKPKAALMLMN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPKAALMLMN___C__CTOR_OFFSET))(this);
	}

	::System::String* OFOLLBPHKEC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPKAALMLMN___C_OFOLLBPHKEC_OFFSET))(this);
	}
};
