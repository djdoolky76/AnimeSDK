#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define DFBNOPGCFIG___C_GFNFCLDLBFH_OFFSET UNITYSDK_OFFSET(0x132915E0)
#define DFBNOPGCFIG___C_IOHBNJELMKD_OFFSET UNITYSDK_OFFSET(0x132915F0)
#define DFBNOPGCFIG___C_OMMKEIJKLKK_OFFSET UNITYSDK_OFFSET(0x13291600)
#define DFBNOPGCFIG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13291590)
#define DFBNOPGCFIG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x132915D0)

inline static constexpr unsigned int DFBNOPGCFIG___c_TypeDefinitionIndex = 71152;

class DFBNOPGCFIG___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__17_5()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DFBNOPGCFIG___c_TypeDefinitionIndex)->GetStaticField(0x43150);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DFBNOPGCFIG___c_TypeDefinitionIndex)->GetStaticField(0x43158);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__17_1()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DFBNOPGCFIG___c_TypeDefinitionIndex)->GetStaticField(0x43160);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__17_4()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DFBNOPGCFIG___c_TypeDefinitionIndex)->GetStaticField(0x43168);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFBNOPGCFIG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBNOPGCFIG___C__CTOR_OFFSET))(this);
	}

	::System::Boolean GFNFCLDLBFH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBNOPGCFIG___C_GFNFCLDLBFH_OFFSET))(this);
	}

	::System::Boolean IOHBNJELMKD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBNOPGCFIG___C_IOHBNJELMKD_OFFSET))(this);
	}

	::System::Boolean OMMKEIJKLKK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBNOPGCFIG___C_OMMKEIJKLKK_OFFSET))(this);
	}
};
