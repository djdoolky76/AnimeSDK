#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define DMIFJOKKLJK___C_BEFNACKHIDA_OFFSET UNITYSDK_OFFSET(0xFDC6A00)
#define DMIFJOKKLJK___C_EBJODPGMDOG_OFFSET UNITYSDK_OFFSET(0xFDC6A10)
#define DMIFJOKKLJK___C_PDFKECDEHFJ_OFFSET UNITYSDK_OFFSET(0xFDC6A20)
#define DMIFJOKKLJK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFDC69B0)
#define DMIFJOKKLJK___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFDC69F0)

inline static constexpr unsigned int DMIFJOKKLJK___c_TypeDefinitionIndex = 66010;

class DMIFJOKKLJK___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__5_2()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DMIFJOKKLJK___c_TypeDefinitionIndex)->GetStaticField(0x31580);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__5_4()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DMIFJOKKLJK___c_TypeDefinitionIndex)->GetStaticField(0x31588);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__5_3()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DMIFJOKKLJK___c_TypeDefinitionIndex)->GetStaticField(0x31590);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DMIFJOKKLJK___c_TypeDefinitionIndex)->GetStaticField(0x31598);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMIFJOKKLJK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMIFJOKKLJK___C__CTOR_OFFSET))(this);
	}

	::System::Boolean BEFNACKHIDA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DMIFJOKKLJK___C_BEFNACKHIDA_OFFSET))(this);
	}

	::System::Boolean EBJODPGMDOG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DMIFJOKKLJK___C_EBJODPGMDOG_OFFSET))(this);
	}

	::System::String* PDFKECDEHFJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMIFJOKKLJK___C_PDFKECDEHFJ_OFFSET))(this);
	}
};
