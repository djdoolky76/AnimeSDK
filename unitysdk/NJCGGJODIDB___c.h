#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FPGLKKMDFID;
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Func_1; }

#define NJCGGJODIDB___C_DJNNNJEFIEP_OFFSET UNITYSDK_OFFSET(0xE0A00D0)
#define NJCGGJODIDB___C_MEFKHFHANOD_OFFSET UNITYSDK_OFFSET(0xE09FAD0)
#define NJCGGJODIDB___C_PIGGCNJAMBO_OFFSET UNITYSDK_OFFSET(0xE0A00E0)
#define NJCGGJODIDB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE09FA80)
#define NJCGGJODIDB___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE09FAC0)

inline static constexpr unsigned int NJCGGJODIDB___c_TypeDefinitionIndex = 54978;

class NJCGGJODIDB___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__122_7()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NJCGGJODIDB___c_TypeDefinitionIndex)->GetStaticField(0x4FCD0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NJCGGJODIDB___c_TypeDefinitionIndex)->GetStaticField(0x4FCD8);
	}
	static ::System::Comparison_1<::FPGLKKMDFID*>** StaticGet___9__135_1()
	{
		return (::System::Comparison_1<::FPGLKKMDFID*>**)Il2CppClass::FromTypeDefinitionIndex(NJCGGJODIDB___c_TypeDefinitionIndex)->GetStaticField(0x4FCE0);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__122_5()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NJCGGJODIDB___c_TypeDefinitionIndex)->GetStaticField(0x4FCE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJCGGJODIDB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCGGJODIDB___C__CTOR_OFFSET))(this);
	}

	::System::Int32 MEFKHFHANOD(::FPGLKKMDFID* GLPHHDMCDDB, ::FPGLKKMDFID* HDLECGINJDM)
	{
		return ((::System::Int32(*)(::PVOID, ::FPGLKKMDFID*, ::FPGLKKMDFID*))((::PBYTE)hIl2Cpp + NJCGGJODIDB___C_MEFKHFHANOD_OFFSET))(this, GLPHHDMCDDB, HDLECGINJDM);
	}

	::System::Boolean DJNNNJEFIEP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCGGJODIDB___C_DJNNNJEFIEP_OFFSET))(this);
	}

	::System::String* PIGGCNJAMBO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCGGJODIDB___C_PIGGCNJAMBO_OFFSET))(this);
	}
};
