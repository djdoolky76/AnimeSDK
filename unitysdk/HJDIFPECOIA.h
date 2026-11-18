#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class KHGICIAFCFM;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigFrozenBuff; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace UnityEngine { class AnimationCurve; }

#define HJDIFPECOIA_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x19E27050)
#define HJDIFPECOIA_BHLJBCGKDCE_1_OFFSET UNITYSDK_OFFSET(0x19E271B0)
#define HJDIFPECOIA_BHLJBCGKDCE_OFFSET UNITYSDK_OFFSET(0x19E26D80)
#define HJDIFPECOIA_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x19E26580)
#define HJDIFPECOIA_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x19E272E0)
#define HJDIFPECOIA_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x19E26760)
#define HJDIFPECOIA_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x19E27810)
#define HJDIFPECOIA_MNEJHDIKCGJ_OFFSET UNITYSDK_OFFSET(0x19E27250)
#define HJDIFPECOIA_NNLIJNMPHLC_OFFSET UNITYSDK_OFFSET(0x19E26AD0)
#define HJDIFPECOIA_PPDDEJGDMNK_OFFSET UNITYSDK_OFFSET(0x19E26920)
#define HJDIFPECOIA__CTOR_OFFSET UNITYSDK_OFFSET(0x19E268D0)

inline static constexpr unsigned int HJDIFPECOIA_TypeDefinitionIndex = 49069;

class HJDIFPECOIA : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDIFPECOIA__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + HJDIFPECOIA_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDIFPECOIA_LATEUPDATE_OFFSET))(this);
	}

	static ::System::Void PPDDEJGDMNK(::KHGICIAFCFM* FBANPFGOCJA)
	{
		return ((::System::Void(*)(::KHGICIAFCFM*))((::PBYTE)hIl2Cpp + HJDIFPECOIA_PPDDEJGDMNK_OFFSET))(FBANPFGOCJA);
	}

	static ::System::Void NNLIJNMPHLC(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HJDIFPECOIA_NNLIJNMPHLC_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void BHLJBCGKDCE(::KHGICIAFCFM* FBANPFGOCJA, ::System::Single DFDHNBFGMFM, ::UnityEngine::AnimationCurve* APPOLPMPGLN, ::System::Single EOOOPIJBFDI, ::System::Single LCPLGJDNHHB, ::System::Single OENKPJLPACN, ::System::Single AIDJKKNEIMD)
	{
		return ((::System::Void(*)(::KHGICIAFCFM*, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HJDIFPECOIA_BHLJBCGKDCE_OFFSET))(FBANPFGOCJA, DFDHNBFGMFM, APPOLPMPGLN, EOOOPIJBFDI, LCPLGJDNHHB, OENKPJLPACN, AIDJKKNEIMD);
	}

	static ::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + HJDIFPECOIA_APAGIJMHEAK_OFFSET))(MNGHGOLKKNO);
	}

	static ::System::Void BHLJBCGKDCE_1(::KHGICIAFCFM* FBANPFGOCJA, ::MoleMole::Config::ConfigFrozenBuff* DFMKILICPFB)
	{
		return ((::System::Void(*)(::KHGICIAFCFM*, ::MoleMole::Config::ConfigFrozenBuff*))((::PBYTE)hIl2Cpp + HJDIFPECOIA_BHLJBCGKDCE_1_OFFSET))(FBANPFGOCJA, DFMKILICPFB);
	}

	::System::Void MNEJHDIKCGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDIFPECOIA_MNEJHDIKCGJ_OFFSET))(this);
	}

	static ::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HJDIFPECOIA_HMLGKBFFNHI_OFFSET))(BKLGNCBNEGM);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + HJDIFPECOIA_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}
};
