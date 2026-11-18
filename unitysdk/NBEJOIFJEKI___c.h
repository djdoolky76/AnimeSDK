#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJKHLPEHFLA;
namespace System { template <typename T1, typename T2> class Func_2; }

#define NBEJOIFJEKI___C_GAMKHPENFGB_OFFSET UNITYSDK_OFFSET(0xE17EAD0)
#define NBEJOIFJEKI___C_OKONDKFOPIM_OFFSET UNITYSDK_OFFSET(0xE17EB00)
#define NBEJOIFJEKI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE17EA80)
#define NBEJOIFJEKI___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE17EAC0)

inline static constexpr unsigned int NBEJOIFJEKI___c_TypeDefinitionIndex = 51003;

class NBEJOIFJEKI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NBEJOIFJEKI___c_TypeDefinitionIndex)->GetStaticField(0x47430);
	}
	static ::System::Func_2<::CJKHLPEHFLA*, ::System::Boolean>** StaticGet___9__17_1()
	{
		return (::System::Func_2<::CJKHLPEHFLA*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NBEJOIFJEKI___c_TypeDefinitionIndex)->GetStaticField(0x47438);
	}
	static ::System::Func_2<::CJKHLPEHFLA*, ::System::Boolean>** StaticGet___9__17_0()
	{
		return (::System::Func_2<::CJKHLPEHFLA*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NBEJOIFJEKI___c_TypeDefinitionIndex)->GetStaticField(0x47440);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBEJOIFJEKI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBEJOIFJEKI___C__CTOR_OFFSET))(this);
	}

	::System::Boolean GAMKHPENFGB(::CJKHLPEHFLA* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::CJKHLPEHFLA*))((::PBYTE)hIl2Cpp + NBEJOIFJEKI___C_GAMKHPENFGB_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Boolean OKONDKFOPIM(::CJKHLPEHFLA* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::CJKHLPEHFLA*))((::PBYTE)hIl2Cpp + NBEJOIFJEKI___C_OKONDKFOPIM_OFFSET))(this, HAAEBCOBKFF);
	}
};
