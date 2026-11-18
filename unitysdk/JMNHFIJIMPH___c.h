#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define JMNHFIJIMPH___C_GAOIBGIPAKH_OFFSET UNITYSDK_OFFSET(0x17B4C3B0)
#define JMNHFIJIMPH___C_HABJPDPCCDL_OFFSET UNITYSDK_OFFSET(0x17B4C3A0)
#define JMNHFIJIMPH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B4C350)
#define JMNHFIJIMPH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17B4C390)

inline static constexpr unsigned int JMNHFIJIMPH___c_TypeDefinitionIndex = 60021;

class JMNHFIJIMPH___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__27_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JMNHFIJIMPH___c_TypeDefinitionIndex)->GetStaticField(0x326B0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JMNHFIJIMPH___c_TypeDefinitionIndex)->GetStaticField(0x326B8);
	}
	static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__51_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JMNHFIJIMPH___c_TypeDefinitionIndex)->GetStaticField(0x326C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMNHFIJIMPH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMNHFIJIMPH___C__CTOR_OFFSET))(this);
	}

	::System::Boolean HABJPDPCCDL(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JMNHFIJIMPH___C_HABJPDPCCDL_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Boolean GAOIBGIPAKH(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JMNHFIJIMPH___C_GAOIBGIPAKH_OFFSET))(this, MGMDLMBEDJF);
	}
};
