#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KPACKGEBECC_BEPAIBEIBLH.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class KCODNJFEMAM_HGKJKGHDEIL;

#define KCODNJFEMAM_FNBEPNNKNCM_OFFSET UNITYSDK_OFFSET(0x15B84580)
#define KCODNJFEMAM_FOGHIGHOLAG_OFFSET UNITYSDK_OFFSET(0x15B841A0)
#define KCODNJFEMAM_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15B83D80)
#define KCODNJFEMAM_IDGMCHIJKOF_OFFSET UNITYSDK_OFFSET(0x15B844F0)
#define KCODNJFEMAM_IMIGFHDKKMP_OFFSET UNITYSDK_OFFSET(0x15B84200)
#define KCODNJFEMAM_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x15B84CA0)
#define KCODNJFEMAM_LFNPBJHOCJI_OFFSET UNITYSDK_OFFSET(0x15B83E50)
#define KCODNJFEMAM_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x15B84C10)
#define KCODNJFEMAM_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15B83BA0)
#define KCODNJFEMAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B83DD0)
#define KCODNJFEMAM__CTOR_OFFSET UNITYSDK_OFFSET(0x15B83C40)

inline static constexpr unsigned int KCODNJFEMAM_TypeDefinitionIndex = 78172;

class KCODNJFEMAM : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x5A; // 0x0
	::KCODNJFEMAM_HGKJKGHDEIL* MMHNGOMAKBL; // 0x48
	::UnityEngine::Vector3 ECPFPJGPJKF; // 0x50
	::UnityEngine::Vector3 EHCBJCHMCKE; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCODNJFEMAM__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCODNJFEMAM__CCTOR_OFFSET))();
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCODNJFEMAM_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCODNJFEMAM_GETCLASSID_OFFSET))(this);
	}

	::System::Void LFNPBJHOCJI(::MoleMole::EntityHandle MHBNPHEHDDK, ::System::Boolean OKBFOLAAGPK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + KCODNJFEMAM_LFNPBJHOCJI_OFFSET))(this, MHBNPHEHDDK, OKBFOLAAGPK);
	}

	::System::Boolean IMIGFHDKKMP(::UnityEngine::Vector3& LGPNKJJNNPO, ::UnityEngine::Quaternion& FEKPNBFOOII, ::UnityEngine::Vector3& NLCCIGKBMCM, ::UnityEngine::Quaternion& KHHONLNEPJP)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + KCODNJFEMAM_IMIGFHDKKMP_OFFSET))(this, LGPNKJJNNPO, FEKPNBFOOII, NLCCIGKBMCM, KHHONLNEPJP);
	}

	::System::Void FNBEPNNKNCM(::MoleMole::EntityHandle MHBNPHEHDDK, ::KPACKGEBECC_BEPAIBEIBLH HAKMIOIGCOH, ::System::Boolean OKBFOLAAGPK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::KPACKGEBECC_BEPAIBEIBLH, ::System::Boolean))((::PBYTE)hIl2Cpp + KCODNJFEMAM_FNBEPNNKNCM_OFFSET))(this, MHBNPHEHDDK, HAKMIOIGCOH, OKBFOLAAGPK);
	}

	::MoleMole::EntityHandle IDGMCHIJKOF()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + KCODNJFEMAM_IDGMCHIJKOF_OFFSET))(this);
	}

	::KPACKGEBECC_BEPAIBEIBLH FOGHIGHOLAG()
	{
		return ((::KPACKGEBECC_BEPAIBEIBLH(*)(::PVOID))((::PBYTE)hIl2Cpp + KCODNJFEMAM_FOGHIGHOLAG_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCODNJFEMAM_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::KCODNJFEMAM* JFDOOELFAOA()
	{
		return ((::KCODNJFEMAM*(*)())((::PBYTE)hIl2Cpp + KCODNJFEMAM_JFDOOELFAOA_OFFSET))();
	}
};
