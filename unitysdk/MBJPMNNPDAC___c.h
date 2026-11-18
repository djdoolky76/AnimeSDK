#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CALIGLPABNP;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MBJPMNNPDAC___C_CJEFKGBIBOM_OFFSET UNITYSDK_OFFSET(0x1A634FF0)
#define MBJPMNNPDAC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A634FA0)
#define MBJPMNNPDAC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A634FE0)

inline static constexpr unsigned int MBJPMNNPDAC___c_TypeDefinitionIndex = 62295;

class MBJPMNNPDAC___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MBJPMNNPDAC___c_TypeDefinitionIndex)->GetStaticField(0x385D0);
	}
	static ::System::Func_2<::System::Int32, ::CALIGLPABNP*>** StaticGet___9__18_0()
	{
		return (::System::Func_2<::System::Int32, ::CALIGLPABNP*>**)Il2CppClass::FromTypeDefinitionIndex(MBJPMNNPDAC___c_TypeDefinitionIndex)->GetStaticField(0x385D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBJPMNNPDAC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJPMNNPDAC___C__CTOR_OFFSET))(this);
	}

	::CALIGLPABNP* CJEFKGBIBOM(::System::Int32 GIAOKGFENJD)
	{
		return ((::CALIGLPABNP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MBJPMNNPDAC___C_CJEFKGBIBOM_OFFSET))(this, GIAOKGFENJD);
	}
};
