#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define JANNGMDHOCL___C_AJNKLKNOKJM_OFFSET UNITYSDK_OFFSET(0x197F0520)
#define JANNGMDHOCL___C_FDNIFJAGMBC_OFFSET UNITYSDK_OFFSET(0x197F0530)
#define JANNGMDHOCL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x197F04D0)
#define JANNGMDHOCL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x197F0510)

inline static constexpr unsigned int JANNGMDHOCL___c_TypeDefinitionIndex = 43998;

class JANNGMDHOCL___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JANNGMDHOCL___c_TypeDefinitionIndex)->GetStaticField(0x4BC40);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__7_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JANNGMDHOCL___c_TypeDefinitionIndex)->GetStaticField(0x4BC48);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__7_5()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(JANNGMDHOCL___c_TypeDefinitionIndex)->GetStaticField(0x4BC50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JANNGMDHOCL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JANNGMDHOCL___C__CTOR_OFFSET))(this);
	}

	::System::Boolean AJNKLKNOKJM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JANNGMDHOCL___C_AJNKLKNOKJM_OFFSET))(this);
	}

	::System::String* FDNIFJAGMBC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JANNGMDHOCL___C_FDNIFJAGMBC_OFFSET))(this);
	}
};
