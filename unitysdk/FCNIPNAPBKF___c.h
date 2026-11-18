#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define FCNIPNAPBKF___C_HJNMNCKGCDE_OFFSET UNITYSDK_OFFSET(0x13202A10)
#define FCNIPNAPBKF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x132029C0)
#define FCNIPNAPBKF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13202A00)

inline static constexpr unsigned int FCNIPNAPBKF___c_TypeDefinitionIndex = 68402;

class FCNIPNAPBKF___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__17_2()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FCNIPNAPBKF___c_TypeDefinitionIndex)->GetStaticField(0x318E0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FCNIPNAPBKF___c_TypeDefinitionIndex)->GetStaticField(0x318E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCNIPNAPBKF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNIPNAPBKF___C__CTOR_OFFSET))(this);
	}

	::System::String* HJNMNCKGCDE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNIPNAPBKF___C_HJNMNCKGCDE_OFFSET))(this);
	}
};
