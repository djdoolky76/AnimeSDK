#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define EGCIKKBDMDC___C_BFPLPCKDFCE_OFFSET UNITYSDK_OFFSET(0x1414CC30)
#define EGCIKKBDMDC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1414CBE0)
#define EGCIKKBDMDC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1414CC20)

inline static constexpr unsigned int EGCIKKBDMDC___c_TypeDefinitionIndex = 76404;

class EGCIKKBDMDC___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__11_2()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EGCIKKBDMDC___c_TypeDefinitionIndex)->GetStaticField(0x37540);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EGCIKKBDMDC___c_TypeDefinitionIndex)->GetStaticField(0x37548);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGCIKKBDMDC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCIKKBDMDC___C__CTOR_OFFSET))(this);
	}

	::System::String* BFPLPCKDFCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCIKKBDMDC___C_BFPLPCKDFCE_OFFSET))(this);
	}
};
