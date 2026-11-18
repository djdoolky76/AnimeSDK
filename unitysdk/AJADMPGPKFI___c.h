#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OMPFPLKPOGG;
namespace System { template <typename T1, typename T2> class Func_2; }

#define AJADMPGPKFI___C_EBDCAHCGCEN_OFFSET UNITYSDK_OFFSET(0x1F3264A0)
#define AJADMPGPKFI___C_LGPMCAFJBBP_OFFSET UNITYSDK_OFFSET(0x1F326570)
#define AJADMPGPKFI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F326450)
#define AJADMPGPKFI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F326490)

inline static constexpr unsigned int AJADMPGPKFI___c_TypeDefinitionIndex = 95313;

class AJADMPGPKFI___c : public ::System::Object
{
public:
	static ::System::Func_2<::OMPFPLKPOGG*, ::System::Boolean>** StaticGet___9__95_0()
	{
		return (::System::Func_2<::OMPFPLKPOGG*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AJADMPGPKFI___c_TypeDefinitionIndex)->GetStaticField(0x52A30);
	}
	static ::System::Func_2<::OMPFPLKPOGG*, ::System::Boolean>** StaticGet___9__96_0()
	{
		return (::System::Func_2<::OMPFPLKPOGG*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AJADMPGPKFI___c_TypeDefinitionIndex)->GetStaticField(0x52A38);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AJADMPGPKFI___c_TypeDefinitionIndex)->GetStaticField(0x52A40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJADMPGPKFI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJADMPGPKFI___C__CTOR_OFFSET))(this);
	}

	::System::Boolean EBDCAHCGCEN(::OMPFPLKPOGG* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::OMPFPLKPOGG*))((::PBYTE)hIl2Cpp + AJADMPGPKFI___C_EBDCAHCGCEN_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Boolean LGPMCAFJBBP(::OMPFPLKPOGG* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::OMPFPLKPOGG*))((::PBYTE)hIl2Cpp + AJADMPGPKFI___C_LGPMCAFJBBP_OFFSET))(this, KECKGDFIALJ);
	}
};
