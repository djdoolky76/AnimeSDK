#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class CMCHNJOKEBF;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define PDEMFDAGDGM_AIIECAFMDCL_OFFSET UNITYSDK_OFFSET(0x16003610)
#define PDEMFDAGDGM_CLLBKDJDGMM_OFFSET UNITYSDK_OFFSET(0x160037A0)
#define PDEMFDAGDGM_EEIKEEEPIPN_OFFSET UNITYSDK_OFFSET(0x16004170)
#define PDEMFDAGDGM_HKKEHKJMFMP_OFFSET UNITYSDK_OFFSET(0x16003A60)
#define PDEMFDAGDGM_IOPOBOPJLGD_OFFSET UNITYSDK_OFFSET(0x16003F90)
#define PDEMFDAGDGM_MIPNOEBDPIH_OFFSET UNITYSDK_OFFSET(0x16003F30)
#define PDEMFDAGDGM_MOCGDAPDDPM_OFFSET UNITYSDK_OFFSET(0x160039C0)
#define PDEMFDAGDGM__CTOR_OFFSET UNITYSDK_OFFSET(0x16003600)

inline static constexpr unsigned int PDEMFDAGDGM_TypeDefinitionIndex = 71322;

class PDEMFDAGDGM : public ::System::Object
{
public:
	::UnityEngine::Transform* ANMDHBOCMGM; // 0x10
	::MoleMole::Battle::Entity* MJPPILKEMBG; // 0x18
	::CMCHNJOKEBF* CDDOJMEPJDI; // 0x20
	::MoleMole::EntityHandle AMHCJOAMHFL; // 0x28
	::System::String* FCBDPCEKHOM; // 0x38
	::System::Boolean FOBHALIGGIK; // 0x40
	::System::Boolean NNJLDLIHINN; // 0x41

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDEMFDAGDGM__CTOR_OFFSET))(this);
	}

	::System::Void AIIECAFMDCL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDEMFDAGDGM_AIIECAFMDCL_OFFSET))(this);
	}

	::System::Void MOCGDAPDDPM(::System::String* FCBDPCEKHOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PDEMFDAGDGM_MOCGDAPDDPM_OFFSET))(this, FCBDPCEKHOM);
	}

	::System::Void MIPNOEBDPIH(::System::String* ADGJFOJLING)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PDEMFDAGDGM_MIPNOEBDPIH_OFFSET))(this, ADGJFOJLING);
	}

	::System::Void IOPOBOPJLGD(::MoleMole::Battle::Entity* JJHKEFOLMNC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PDEMFDAGDGM_IOPOBOPJLGD_OFFSET))(this, JJHKEFOLMNC);
	}

	::System::Void EEIKEEEPIPN(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PDEMFDAGDGM_EEIKEEEPIPN_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void CLLBKDJDGMM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDEMFDAGDGM_CLLBKDJDGMM_OFFSET))(this);
	}

	::System::Void HKKEHKJMFMP(::System::String* OJGKMPDKIMK, ::System::Action_1<::MoleMole::Battle::Entity*>* DIGFEHPJJBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + PDEMFDAGDGM_HKKEHKJMFMP_OFFSET))(this, OJGKMPDKIMK, DIGFEHPJJBC);
	}
};
