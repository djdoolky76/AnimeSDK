#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/NOHOHLMKMGG_NCONPHBDMGI.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ENGKPGFGGLM;
class NOHOHLMKMGG;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define KPNMFAIJNMA_ACIHDCDNMEF_OFFSET UNITYSDK_OFFSET(0x179385A0)
#define KPNMFAIJNMA_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x179395E0)
#define KPNMFAIJNMA_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x17938AD0)
#define KPNMFAIJNMA_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x17937FA0)
#define KPNMFAIJNMA_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x17938B60)
#define KPNMFAIJNMA_DIEPHAJCGOE_OFFSET UNITYSDK_OFFSET(0x17939650)
#define KPNMFAIJNMA_DMMMJNJELLB_OFFSET UNITYSDK_OFFSET(0x17938D70)
#define KPNMFAIJNMA_GABPIGIMBBM_OFFSET UNITYSDK_OFFSET(0x179386C0)
#define KPNMFAIJNMA_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x17939A30)
#define KPNMFAIJNMA_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x17938630)
#define KPNMFAIJNMA_PNIHNFMAHJG_OFFSET UNITYSDK_OFFSET(0x17939EF0)
#define KPNMFAIJNMA_UPDATE_OFFSET UNITYSDK_OFFSET(0x179383E0)
#define KPNMFAIJNMA__CTOR_OFFSET UNITYSDK_OFFSET(0x17938550)

inline static constexpr unsigned int KPNMFAIJNMA_TypeDefinitionIndex = 76617;

class KPNMFAIJNMA : public ::OAOOLPCNHKA
{
public:
	// static const ::System::String* ANJCOCKKMAL; // 0x0
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNMFAIJNMA__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + KPNMFAIJNMA_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNMFAIJNMA_UPDATE_OFFSET))(this);
	}

	static ::System::Single ACIHDCDNMEF(::System::Single HFMHOELKCAJ)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + KPNMFAIJNMA_ACIHDCDNMEF_OFFSET))(HFMHOELKCAJ);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + KPNMFAIJNMA_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Int32 GABPIGIMBBM(::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Quaternion BFBELMDIAHI, ::NOHOHLMKMGG_NCONPHBDMGI OAIEFDGJHEF, ::NOHOHLMKMGG* FOLJGCLBKNC)
	{
		return ((::System::Int32(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::NOHOHLMKMGG_NCONPHBDMGI, ::NOHOHLMKMGG*))((::PBYTE)hIl2Cpp + KPNMFAIJNMA_GABPIGIMBBM_OFFSET))(OHOGDOMNHNK, BFBELMDIAHI, OAIEFDGJHEF, FOLJGCLBKNC);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNMFAIJNMA_CMFOMGGDPPA_OFFSET))(this);
	}

	static ::System::Void DFJPMOOOLHM(::NOHOHLMKMGG* IJANHEBBECA)
	{
		return ((::System::Void(*)(::NOHOHLMKMGG*))((::PBYTE)hIl2Cpp + KPNMFAIJNMA_DFJPMOOOLHM_OFFSET))(IJANHEBBECA);
	}

	static ::System::Boolean DMMMJNJELLB(::NOHOHLMKMGG* FOLJGCLBKNC)
	{
		return ((::System::Boolean(*)(::NOHOHLMKMGG*))((::PBYTE)hIl2Cpp + KPNMFAIJNMA_DMMMJNJELLB_OFFSET))(FOLJGCLBKNC);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + KPNMFAIJNMA_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}

	::System::Void DIEPHAJCGOE(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KPNMFAIJNMA_DIEPHAJCGOE_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KPNMFAIJNMA_HMLGKBFFNHI_OFFSET))(BKLGNCBNEGM);
	}

	static ::System::Void PNIHNFMAHJG(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KPNMFAIJNMA_PNIHNFMAHJG_OFFSET))(KECKGDFIALJ);
	}
};
