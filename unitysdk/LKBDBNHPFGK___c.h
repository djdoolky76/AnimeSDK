#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/EntityBodySize.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class DIAEPBNFKBO;
class GEIHCPAOKKK;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Collider; }

#define LKBDBNHPFGK___C_BDDBNEKEIPG_OFFSET UNITYSDK_OFFSET(0x158F06F0)
#define LKBDBNHPFGK___C_EKJPCCCELAK_OFFSET UNITYSDK_OFFSET(0x158F0700)
#define LKBDBNHPFGK___C_JHEBADGNKEJ_OFFSET UNITYSDK_OFFSET(0x158F0520)
#define LKBDBNHPFGK___C_LDGELIFMIBJ_OFFSET UNITYSDK_OFFSET(0x158F08E0)
#define LKBDBNHPFGK___C_MHNADJDBCFA_OFFSET UNITYSDK_OFFSET(0x158F0740)
#define LKBDBNHPFGK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x158F04D0)
#define LKBDBNHPFGK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x158F0510)

inline static constexpr unsigned int LKBDBNHPFGK___c_TypeDefinitionIndex = 62952;

class LKBDBNHPFGK___c : public ::System::Object
{
public:
	static ::System::Func_2<::GEIHCPAOKKK*, ::System::Boolean>** StaticGet___9__17_0()
	{
		return (::System::Func_2<::GEIHCPAOKKK*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LKBDBNHPFGK___c_TypeDefinitionIndex)->GetStaticField(0x38500);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LKBDBNHPFGK___c_TypeDefinitionIndex)->GetStaticField(0x38508);
	}
	static ::System::Func_2<::GEIHCPAOKKK*, ::Il2CppArray<::UnityEngine::Collider*>*>** StaticGet___9__18_0()
	{
		return (::System::Func_2<::GEIHCPAOKKK*, ::Il2CppArray<::UnityEngine::Collider*>*>**)Il2CppClass::FromTypeDefinitionIndex(LKBDBNHPFGK___c_TypeDefinitionIndex)->GetStaticField(0x38510);
	}
	static ::System::Func_2<::GEIHCPAOKKK*, ::System::Single>** StaticGet___9__16_0()
	{
		return (::System::Func_2<::GEIHCPAOKKK*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LKBDBNHPFGK___c_TypeDefinitionIndex)->GetStaticField(0x38518);
	}
	static ::System::Func_2<::DIAEPBNFKBO*, ::MoleMole::Battle::EntityBodySize>** StaticGet___9__19_0()
	{
		return (::System::Func_2<::DIAEPBNFKBO*, ::MoleMole::Battle::EntityBodySize>**)Il2CppClass::FromTypeDefinitionIndex(LKBDBNHPFGK___c_TypeDefinitionIndex)->GetStaticField(0x38520);
	}
	static ::System::Func_2<::GEIHCPAOKKK*, ::UnityEngine::Quaternion>** StaticGet___9__14_0()
	{
		return (::System::Func_2<::GEIHCPAOKKK*, ::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(LKBDBNHPFGK___c_TypeDefinitionIndex)->GetStaticField(0x38528);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKBDBNHPFGK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKBDBNHPFGK___C__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Collider*>* JHEBADGNKEJ(::GEIHCPAOKKK* LHPFMGBDFPN)
	{
		return ((::Il2CppArray<::UnityEngine::Collider*>*(*)(::PVOID, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + LKBDBNHPFGK___C_JHEBADGNKEJ_OFFSET))(this, LHPFMGBDFPN);
	}

	::System::Boolean BDDBNEKEIPG(::GEIHCPAOKKK* HBNBIBADGNH)
	{
		return ((::System::Boolean(*)(::PVOID, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + LKBDBNHPFGK___C_BDDBNEKEIPG_OFFSET))(this, HBNBIBADGNH);
	}

	::UnityEngine::Quaternion EKJPCCCELAK(::GEIHCPAOKKK* HBNBIBADGNH)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + LKBDBNHPFGK___C_EKJPCCCELAK_OFFSET))(this, HBNBIBADGNH);
	}

	::System::Single MHNADJDBCFA(::GEIHCPAOKKK* LHPFMGBDFPN)
	{
		return ((::System::Single(*)(::PVOID, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + LKBDBNHPFGK___C_MHNADJDBCFA_OFFSET))(this, LHPFMGBDFPN);
	}

	::MoleMole::Battle::EntityBodySize LDGELIFMIBJ(::DIAEPBNFKBO* HBNBIBADGNH)
	{
		return ((::MoleMole::Battle::EntityBodySize(*)(::PVOID, ::DIAEPBNFKBO*))((::PBYTE)hIl2Cpp + LKBDBNHPFGK___C_LDGELIFMIBJ_OFFSET))(this, HBNBIBADGNH);
	}
};
