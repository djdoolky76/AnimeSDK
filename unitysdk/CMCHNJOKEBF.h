#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define CMCHNJOKEBF_CLLBKDJDGMM_OFFSET UNITYSDK_OFFSET(0x159E61F0)
#define CMCHNJOKEBF_CMBLCGHHPOA_OFFSET UNITYSDK_OFFSET(0x159E5F90)
#define CMCHNJOKEBF_EEEDGNINNLP_OFFSET UNITYSDK_OFFSET(0x159E60E0)
#define CMCHNJOKEBF_LPOJDDJDKPK_OFFSET UNITYSDK_OFFSET(0x159E62C0)
#define CMCHNJOKEBF__CTOR_OFFSET UNITYSDK_OFFSET(0x159E5F80)

inline static constexpr unsigned int CMCHNJOKEBF_TypeDefinitionIndex = 57963;

class CMCHNJOKEBF : public ::System::Object
{
public:
	::UnityEngine::Animator* ICAAMDMMDDJ; // 0x10
	::System::String* EHCAEFGHAFC; // 0x18
	::MoleMole::Battle::Entity* HNHIKOHGCOL; // 0x20
	::UnityEngine::GameObject* JCFADCIKCOM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCHNJOKEBF__CTOR_OFFSET))(this);
	}

	::System::Void CMBLCGHHPOA(::UnityEngine::Material* LICKEKCIKAC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CMCHNJOKEBF_CMBLCGHHPOA_OFFSET))(this, LICKEKCIKAC);
	}

	::System::Void EEEDGNINNLP(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CMCHNJOKEBF_EEEDGNINNLP_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Void CLLBKDJDGMM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCHNJOKEBF_CLLBKDJDGMM_OFFSET))(this);
	}

	::System::Void LPOJDDJDKPK(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CMCHNJOKEBF_LPOJDDJDKPK_OFFSET))(this, KECKGDFIALJ);
	}
};
