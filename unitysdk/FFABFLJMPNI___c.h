#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define FFABFLJMPNI___C_DKPBHIKKMCO_OFFSET UNITYSDK_OFFSET(0x156B7BE0)
#define FFABFLJMPNI___C_HOJEHIPIELE_OFFSET UNITYSDK_OFFSET(0x156B7BA0)
#define FFABFLJMPNI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x156B7B50)
#define FFABFLJMPNI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x156B7B90)

inline static constexpr unsigned int FFABFLJMPNI___c_TypeDefinitionIndex = 47928;

class FFABFLJMPNI___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__2_2()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FFABFLJMPNI___c_TypeDefinitionIndex)->GetStaticField(0x434C0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FFABFLJMPNI___c_TypeDefinitionIndex)->GetStaticField(0x434C8);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__2_4()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FFABFLJMPNI___c_TypeDefinitionIndex)->GetStaticField(0x434D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFABFLJMPNI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFABFLJMPNI___C__CTOR_OFFSET))(this);
	}

	::System::String* HOJEHIPIELE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFABFLJMPNI___C_HOJEHIPIELE_OFFSET))(this);
	}

	::System::String* DKPBHIKKMCO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFABFLJMPNI___C_DKPBHIKKMCO_OFFSET))(this);
	}
};
