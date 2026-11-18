#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define PCPDGMKDIKA___C_BEPLKIEFHNF_OFFSET UNITYSDK_OFFSET(0x13A88810)
#define PCPDGMKDIKA___C_GBNILAENCPA_OFFSET UNITYSDK_OFFSET(0x13A887F0)
#define PCPDGMKDIKA___C_KMHOAMHLOJB_OFFSET UNITYSDK_OFFSET(0x13A88800)
#define PCPDGMKDIKA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A887A0)
#define PCPDGMKDIKA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13A887E0)

inline static constexpr unsigned int PCPDGMKDIKA___c_TypeDefinitionIndex = 66792;

class PCPDGMKDIKA___c : public ::System::Object
{
public:
	static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__12_1()
	{
		return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(PCPDGMKDIKA___c_TypeDefinitionIndex)->GetStaticField(0x4B240);
	}
	static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__12_2()
	{
		return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(PCPDGMKDIKA___c_TypeDefinitionIndex)->GetStaticField(0x4B248);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PCPDGMKDIKA___c_TypeDefinitionIndex)->GetStaticField(0x4B250);
	}
	static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__12_0()
	{
		return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(PCPDGMKDIKA___c_TypeDefinitionIndex)->GetStaticField(0x4B258);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCPDGMKDIKA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPDGMKDIKA___C__CTOR_OFFSET))(this);
	}

	::System::Single GBNILAENCPA(::UnityEngine::Vector3 PMKOELLKDDN)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PCPDGMKDIKA___C_GBNILAENCPA_OFFSET))(this, PMKOELLKDDN);
	}

	::System::Single KMHOAMHLOJB(::UnityEngine::Vector3 PMKOELLKDDN)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PCPDGMKDIKA___C_KMHOAMHLOJB_OFFSET))(this, PMKOELLKDDN);
	}

	::System::Single BEPLKIEFHNF(::UnityEngine::Vector3 PMKOELLKDDN)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PCPDGMKDIKA___C_BEPLKIEFHNF_OFFSET))(this, PMKOELLKDDN);
	}
};
