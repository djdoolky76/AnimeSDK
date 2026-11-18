#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace UnityEngine { class GameObject; }

#define HBCCGHNPGGI_AJBBLNCNEFJ_OFFSET UNITYSDK_OFFSET(0x16F20010)
#define HBCCGHNPGGI_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x16F20B90)
#define HBCCGHNPGGI_CIGOCLDIDKK_OFFSET UNITYSDK_OFFSET(0x16F20F20)
#define HBCCGHNPGGI_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x16F1FD90)
#define HBCCGHNPGGI_HDHNEKOLIKM_OFFSET UNITYSDK_OFFSET(0x16F206F0)
#define HBCCGHNPGGI_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x16F20550)
#define HBCCGHNPGGI_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x16F20E90)
#define HBCCGHNPGGI__CTOR_OFFSET UNITYSDK_OFFSET(0x16F1FFC0)

inline static constexpr unsigned int HBCCGHNPGGI_TypeDefinitionIndex = 73533;

class HBCCGHNPGGI : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBCCGHNPGGI__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + HBCCGHNPGGI_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::UnityEngine::GameObject* AJBBLNCNEFJ(::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 BPNFCGPEJJF, ::UnityEngine::Vector3 BEPMDFENBMH, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HBCCGHNPGGI_AJBBLNCNEFJ_OFFSET))(this, OHOGDOMNHNK, BPNFCGPEJJF, BEPMDFENBMH, KECKGDFIALJ);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HBCCGHNPGGI_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + HBCCGHNPGGI_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + HBCCGHNPGGI_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HDHNEKOLIKM(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HBCCGHNPGGI_HDHNEKOLIKM_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void CIGOCLDIDKK(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HBCCGHNPGGI_CIGOCLDIDKK_OFFSET))(this, KECKGDFIALJ);
	}
};
