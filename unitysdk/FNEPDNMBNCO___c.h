#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PIFHAHFCMEL.h"

class CBKCCDGFNHH;
class PIFHAHFCMEL_CBBGBJGBMLK;
namespace System { template <typename T1, typename T2> class Func_2; }

#define FNEPDNMBNCO___C_IKBLCIIBADD_OFFSET UNITYSDK_OFFSET(0x142B12A0)
#define FNEPDNMBNCO___C_PCPELJJDCPI_OFFSET UNITYSDK_OFFSET(0x142B1220)
#define FNEPDNMBNCO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x142B11D0)
#define FNEPDNMBNCO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x142B1210)

inline static constexpr unsigned int FNEPDNMBNCO___c_TypeDefinitionIndex = 42304;

class FNEPDNMBNCO___c : public ::System::Object
{
public:
	static ::System::Func_2<::CBKCCDGFNHH*, ::System::UInt32>** StaticGet___9__26_0()
	{
		return (::System::Func_2<::CBKCCDGFNHH*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FNEPDNMBNCO___c_TypeDefinitionIndex)->GetStaticField(0x31A70);
	}
	static ::PIFHAHFCMEL_CBBGBJGBMLK** StaticGet___9__14_0()
	{
		return (::PIFHAHFCMEL_CBBGBJGBMLK**)Il2CppClass::FromTypeDefinitionIndex(FNEPDNMBNCO___c_TypeDefinitionIndex)->GetStaticField(0x31A78);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FNEPDNMBNCO___c_TypeDefinitionIndex)->GetStaticField(0x31A80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNEPDNMBNCO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEPDNMBNCO___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 PCPELJJDCPI(::CBKCCDGFNHH* EJCBEJMGFAJ)
	{
		return ((::System::UInt32(*)(::PVOID, ::CBKCCDGFNHH*))((::PBYTE)hIl2Cpp + FNEPDNMBNCO___C_PCPELJJDCPI_OFFSET))(this, EJCBEJMGFAJ);
	}

	::System::Void IKBLCIIBADD(::PIFHAHFCMEL JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::PIFHAHFCMEL))((::PBYTE)hIl2Cpp + FNEPDNMBNCO___C_IKBLCIIBADD_OFFSET))(this, JKBLDFBGBPK);
	}
};
