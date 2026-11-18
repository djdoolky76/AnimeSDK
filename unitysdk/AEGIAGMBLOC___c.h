#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define AEGIAGMBLOC___C_CDPCKMAEDBD_OFFSET UNITYSDK_OFFSET(0x1646AB50)
#define AEGIAGMBLOC___C_JBFIHNMIKPL_OFFSET UNITYSDK_OFFSET(0x1646AB90)
#define AEGIAGMBLOC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1646AB00)
#define AEGIAGMBLOC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1646AB40)

inline static constexpr unsigned int AEGIAGMBLOC___c_TypeDefinitionIndex = 60358;

class AEGIAGMBLOC___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__62_16()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AEGIAGMBLOC___c_TypeDefinitionIndex)->GetStaticField(0x49630);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__62_8()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AEGIAGMBLOC___c_TypeDefinitionIndex)->GetStaticField(0x49638);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AEGIAGMBLOC___c_TypeDefinitionIndex)->GetStaticField(0x49640);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEGIAGMBLOC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGIAGMBLOC___C__CTOR_OFFSET))(this);
	}

	::System::String* CDPCKMAEDBD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGIAGMBLOC___C_CDPCKMAEDBD_OFFSET))(this);
	}

	::System::String* JBFIHNMIKPL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGIAGMBLOC___C_JBFIHNMIKPL_OFFSET))(this);
	}
};
