#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CNBICBLHLDC___C_IAEAMBLGGHG_OFFSET UNITYSDK_OFFSET(0x13E14EE0)
#define CNBICBLHLDC___C_LMBLNJGCDMN_OFFSET UNITYSDK_OFFSET(0x13E14EF0)
#define CNBICBLHLDC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E14E90)
#define CNBICBLHLDC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13E14ED0)

inline static constexpr unsigned int CNBICBLHLDC___c_TypeDefinitionIndex = 88276;

class CNBICBLHLDC___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CNBICBLHLDC___c_TypeDefinitionIndex)->GetStaticField(0x4E1E0);
	}
	static ::System::Func_2<::UnityEngine::Vector2, ::System::Single>** StaticGet___9__13_0()
	{
		return (::System::Func_2<::UnityEngine::Vector2, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(CNBICBLHLDC___c_TypeDefinitionIndex)->GetStaticField(0x4E1E8);
	}
	static ::System::Func_2<::UnityEngine::Vector2, ::System::Single>** StaticGet___9__13_1()
	{
		return (::System::Func_2<::UnityEngine::Vector2, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(CNBICBLHLDC___c_TypeDefinitionIndex)->GetStaticField(0x4E1F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNBICBLHLDC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBICBLHLDC___C__CTOR_OFFSET))(this);
	}

	::System::Single IAEAMBLGGHG(::UnityEngine::Vector2 PMKOELLKDDN)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CNBICBLHLDC___C_IAEAMBLGGHG_OFFSET))(this, PMKOELLKDDN);
	}

	::System::Single LMBLNJGCDMN(::UnityEngine::Vector2 PMKOELLKDDN)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CNBICBLHLDC___C_LMBLNJGCDMN_OFFSET))(this, PMKOELLKDDN);
	}
};
