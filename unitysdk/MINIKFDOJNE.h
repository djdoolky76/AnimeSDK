#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDLGJMFLCHG.h"
#include "unitysdk/MINIKFDOJNE_MGHLDJHMHEK.h"
#include "unitysdk/UnityEngine/ParticleSystemStopAction.h"

namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define MINIKFDOJNE_AOFLNEPNEBN_OFFSET UNITYSDK_OFFSET(0x14D87610)
#define MINIKFDOJNE_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x14D85F20)
#define MINIKFDOJNE_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x14D86E70)
#define MINIKFDOJNE_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x14D87DA0)
#define MINIKFDOJNE_CMFOIAAGPFL_OFFSET UNITYSDK_OFFSET(0x14D87C80)
#define MINIKFDOJNE_DHBDDIMBNOB_OFFSET UNITYSDK_OFFSET(0x14D86870)
#define MINIKFDOJNE_DMFLHNJAPOB_OFFSET UNITYSDK_OFFSET(0x14D86FA0)
#define MINIKFDOJNE_EAIHMEFLJFE_OFFSET UNITYSDK_OFFSET(0x14D86820)
#define MINIKFDOJNE_GGGMOACJECE_OFFSET UNITYSDK_OFFSET(0x14D87ED0)
#define MINIKFDOJNE_GPACEALDJOA_OFFSET UNITYSDK_OFFSET(0x14D87660)
#define MINIKFDOJNE_HJJLJJMELDG_OFFSET UNITYSDK_OFFSET(0x14D87920)
#define MINIKFDOJNE_JNOHKHNNCBN_OFFSET UNITYSDK_OFFSET(0x14D87E40)
#define MINIKFDOJNE_LFDKNPKCIIK_OFFSET UNITYSDK_OFFSET(0x14D875C0)
#define MINIKFDOJNE_MHBJFABLJDH_OFFSET UNITYSDK_OFFSET(0x14D87B00)
#define MINIKFDOJNE_MPJICKBFCMN_OFFSET UNITYSDK_OFFSET(0x14D87D10)
#define MINIKFDOJNE_OBJGABMGPOO_OFFSET UNITYSDK_OFFSET(0x14D868F0)
#define MINIKFDOJNE_OIBBBEFICMD_OFFSET UNITYSDK_OFFSET(0x14D87160)
#define MINIKFDOJNE_PAHEJOBMMKD_OFFSET UNITYSDK_OFFSET(0x14D868B0)
#define MINIKFDOJNE_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x14D86EC0)
#define MINIKFDOJNE__CTOR_OFFSET UNITYSDK_OFFSET(0x14D85EB0)

inline static constexpr unsigned int MINIKFDOJNE_TypeDefinitionIndex = 82615;

class MINIKFDOJNE : public ::FDLGJMFLCHG
{
public:
	::System::String* HMOPGCHACMF; // 0x18
	::UnityEngine::Collider* JHDFJNBMJGI; // 0x20
	::System::String* BADDDNKFGLK; // 0x28
	::UnityEngine::GameObject* NJOAJLDJCCJ; // 0x30
	::Il2CppArray<::UnityEngine::ParticleSystem*>* LELDGIMNAHK; // 0x38
	::UnityEngine::Collider* IBGFIJCDKDJ; // 0x40
	::System::String* ABKLNOIGDBO; // 0x48
	::System::String* FJFPOJIMJKI; // 0x50
	::UnityEngine::Transform* KMJNCHNAMIO; // 0x58
	::Il2CppArray<::System::String*>* OEKPAPOCNGA; // 0x60
	::System::Boolean NJJKBDDPEDI; // 0x68
	::System::Byte _padding0[0x3];
	::MINIKFDOJNE_MGHLDJHMHEK HJECIBFGAHC; // 0x6C

	::System::Void _ctor(::UnityEngine::GameObject* OJJMNAIJGCH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MINIKFDOJNE__CTOR_OFFSET))(this, OJJMNAIJGCH);
	}

	::System::Void EAIHMEFLJFE(::System::Boolean FBILHHBPEHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MINIKFDOJNE_EAIHMEFLJFE_OFFSET))(this, FBILHHBPEHD);
	}

	::UnityEngine::Collider* DHBDDIMBNOB()
	{
		return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIKFDOJNE_DHBDDIMBNOB_OFFSET))(this);
	}

	::UnityEngine::Collider* PAHEJOBMMKD()
	{
		return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIKFDOJNE_PAHEJOBMMKD_OFFSET))(this);
	}

	::System::Void OBJGABMGPOO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIKFDOJNE_OBJGABMGPOO_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIKFDOJNE_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single OGGBPKJBGNO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MINIKFDOJNE_PLPONJAKNEB_OFFSET))(this, OGGBPKJBGNO);
	}

	::System::Void OIBBBEFICMD(::System::Boolean HNACDPGAJKL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MINIKFDOJNE_OIBBBEFICMD_OFFSET))(this, HNACDPGAJKL);
	}

	::System::Void HJJLJJMELDG(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MINIKFDOJNE_HJJLJJMELDG_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::Void MHBJFABLJDH(::UnityEngine::ParticleSystem* OMLGMJACMAB, ::UnityEngine::ParticleSystemStopAction OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*, ::UnityEngine::ParticleSystemStopAction))((::PBYTE)hIl2Cpp + MINIKFDOJNE_MHBJFABLJDH_OFFSET))(this, OMLGMJACMAB, OBNIAHNMHPF);
	}

	::System::Void CMFOIAAGPFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIKFDOJNE_CMFOIAAGPFL_OFFSET))(this);
	}

	::System::Void MPJICKBFCMN(::System::Boolean MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MINIKFDOJNE_MPJICKBFCMN_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean AOFLNEPNEBN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIKFDOJNE_AOFLNEPNEBN_OFFSET))(this);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MINIKFDOJNE_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void JNOHKHNNCBN(::System::Boolean MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MINIKFDOJNE_JNOHKHNNCBN_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIKFDOJNE_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Boolean DMFLHNJAPOB(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MINIKFDOJNE_DMFLHNJAPOB_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::Boolean LFDKNPKCIIK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIKFDOJNE_LFDKNPKCIIK_OFFSET))(this);
	}

	::System::Void GGGMOACJECE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIKFDOJNE_GGGMOACJECE_OFFSET))(this);
	}

	::System::Void GPACEALDJOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIKFDOJNE_GPACEALDJOA_OFFSET))(this);
	}
};
