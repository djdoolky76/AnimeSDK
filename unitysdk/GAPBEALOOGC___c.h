#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define GAPBEALOOGC___C_FALDBGICMHH_OFFSET UNITYSDK_OFFSET(0x116DB8C0)
#define GAPBEALOOGC___C_LBFEOBFKBEM_OFFSET UNITYSDK_OFFSET(0x116DB900)
#define GAPBEALOOGC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x116DB870)
#define GAPBEALOOGC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x116DB8B0)

inline static constexpr unsigned int GAPBEALOOGC___c_TypeDefinitionIndex = 54617;

class GAPBEALOOGC___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__31_0()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GAPBEALOOGC___c_TypeDefinitionIndex)->GetStaticField(0x409A0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GAPBEALOOGC___c_TypeDefinitionIndex)->GetStaticField(0x409A8);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__31_5()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GAPBEALOOGC___c_TypeDefinitionIndex)->GetStaticField(0x409B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAPBEALOOGC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAPBEALOOGC___C__CTOR_OFFSET))(this);
	}

	::System::String* FALDBGICMHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAPBEALOOGC___C_FALDBGICMHH_OFFSET))(this);
	}

	::System::String* LBFEOBFKBEM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAPBEALOOGC___C_LBFEOBFKBEM_OFFSET))(this);
	}
};
