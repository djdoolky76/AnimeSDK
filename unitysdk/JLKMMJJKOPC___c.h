#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define JLKMMJJKOPC___C_BINBKDGLBHM_OFFSET UNITYSDK_OFFSET(0x13864C20)
#define JLKMMJJKOPC___C_GBHKCCIDAGF_OFFSET UNITYSDK_OFFSET(0x13864C10)
#define JLKMMJJKOPC___C_LALILMFBJAL_OFFSET UNITYSDK_OFFSET(0x13864C30)
#define JLKMMJJKOPC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13864BC0)
#define JLKMMJJKOPC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13864C00)

inline static constexpr unsigned int JLKMMJJKOPC___c_TypeDefinitionIndex = 45164;

class JLKMMJJKOPC___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JLKMMJJKOPC___c_TypeDefinitionIndex)->GetStaticField(0x3E3B0);
	}
	static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__15_1()
	{
		return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(JLKMMJJKOPC___c_TypeDefinitionIndex)->GetStaticField(0x3E3B8);
	}
	static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__15_0()
	{
		return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(JLKMMJJKOPC___c_TypeDefinitionIndex)->GetStaticField(0x3E3C0);
	}
	static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__15_2()
	{
		return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(JLKMMJJKOPC___c_TypeDefinitionIndex)->GetStaticField(0x3E3C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLKMMJJKOPC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKMMJJKOPC___C__CTOR_OFFSET))(this);
	}

	::System::Single GBHKCCIDAGF(::UnityEngine::Vector3 PMKOELLKDDN)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JLKMMJJKOPC___C_GBHKCCIDAGF_OFFSET))(this, PMKOELLKDDN);
	}

	::System::Single BINBKDGLBHM(::UnityEngine::Vector3 PMKOELLKDDN)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JLKMMJJKOPC___C_BINBKDGLBHM_OFFSET))(this, PMKOELLKDDN);
	}

	::System::Single LALILMFBJAL(::UnityEngine::Vector3 PMKOELLKDDN)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JLKMMJJKOPC___C_LALILMFBJAL_OFFSET))(this, PMKOELLKDDN);
	}
};
