#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MFLPFAHAEOH___C_AHGIPNGDJGC_OFFSET UNITYSDK_OFFSET(0x14051FA0)
#define MFLPFAHAEOH___C_FNKFPOGMBLB_OFFSET UNITYSDK_OFFSET(0x14051F50)
#define MFLPFAHAEOH___C_JBFMMPEGLCD_OFFSET UNITYSDK_OFFSET(0x14051F60)
#define MFLPFAHAEOH___C_PMBNGCHOOAH_OFFSET UNITYSDK_OFFSET(0x14051F10)
#define MFLPFAHAEOH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14051EC0)
#define MFLPFAHAEOH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14051F00)

inline static constexpr unsigned int MFLPFAHAEOH___c_TypeDefinitionIndex = 75511;

class MFLPFAHAEOH___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MFLPFAHAEOH___c_TypeDefinitionIndex)->GetStaticField(0x44830);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__3_13()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MFLPFAHAEOH___c_TypeDefinitionIndex)->GetStaticField(0x44838);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__3_6()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MFLPFAHAEOH___c_TypeDefinitionIndex)->GetStaticField(0x44840);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__3_16()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MFLPFAHAEOH___c_TypeDefinitionIndex)->GetStaticField(0x44848);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__3_2()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MFLPFAHAEOH___c_TypeDefinitionIndex)->GetStaticField(0x44850);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFLPFAHAEOH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFLPFAHAEOH___C__CTOR_OFFSET))(this);
	}

	::System::String* PMBNGCHOOAH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFLPFAHAEOH___C_PMBNGCHOOAH_OFFSET))(this);
	}

	::System::Boolean FNKFPOGMBLB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFLPFAHAEOH___C_FNKFPOGMBLB_OFFSET))(this);
	}

	::System::String* JBFMMPEGLCD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFLPFAHAEOH___C_JBFMMPEGLCD_OFFSET))(this);
	}

	::System::Boolean AHGIPNGDJGC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFLPFAHAEOH___C_AHGIPNGDJGC_OFFSET))(this);
	}
};
