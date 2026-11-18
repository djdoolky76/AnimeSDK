#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace MoleMole { class TurnBattleEntityUnit; }
namespace UnityEngine { class Transform; }
template <typename T> class BFMLEHMAGAK_1;
template <typename T> class KLIOMMIOFDC_1;

#define DLPEBGKKGIE_AMJGJEHFGFP_OFFSET UNITYSDK_OFFSET(0x1208D980)
#define DLPEBGKKGIE_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x1208C9D0)
#define DLPEBGKKGIE_KCFPCPNAEEO_OFFSET UNITYSDK_OFFSET(0x1208D830)
#define DLPEBGKKGIE_KLLJDGHBIMA_OFFSET UNITYSDK_OFFSET(0x1208CD40)
#define DLPEBGKKGIE_KOPGGFBMBJN_OFFSET UNITYSDK_OFFSET(0x1208D430)
#define DLPEBGKKGIE_PFKJFAPJHMM_OFFSET UNITYSDK_OFFSET(0x1208D200)
#define DLPEBGKKGIE_PHFNAGGEEJH_OFFSET UNITYSDK_OFFSET(0x1208D350)
#define DLPEBGKKGIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1208CCF0)

inline static constexpr unsigned int DLPEBGKKGIE_TypeDefinitionIndex = 45705;

class DLPEBGKKGIE : public ::PBJOCICFNGK
{
public:
	::BFMLEHMAGAK_1<::UnityEngine::Vector3>* IOODLIHPMCI; // 0x50
	::BFMLEHMAGAK_1<::UnityEngine::Transform*>* DDGJFOCMGIP; // 0x58
	::BFMLEHMAGAK_1<::UnityEngine::Transform*>* BPELIDCCODN; // 0x60
	::KLIOMMIOFDC_1<::MoleMole::TurnBattleEntityUnit*>* IFOKLDMHACL; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPEBGKKGIE__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + DLPEBGKKGIE_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::UnityEngine::Vector3 KLLJDGHBIMA()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPEBGKKGIE_KLLJDGHBIMA_OFFSET))(this);
	}

	::System::Boolean PFKJFAPJHMM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPEBGKKGIE_PFKJFAPJHMM_OFFSET))(this);
	}

	::System::Boolean PHFNAGGEEJH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPEBGKKGIE_PHFNAGGEEJH_OFFSET))(this);
	}

	::UnityEngine::Transform* KOPGGFBMBJN()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPEBGKKGIE_KOPGGFBMBJN_OFFSET))(this);
	}

	::System::Boolean KCFPCPNAEEO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPEBGKKGIE_KCFPCPNAEEO_OFFSET))(this);
	}

	::UnityEngine::Transform* AMJGJEHFGFP()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPEBGKKGIE_AMJGJEHFGFP_OFFSET))(this);
	}
};
