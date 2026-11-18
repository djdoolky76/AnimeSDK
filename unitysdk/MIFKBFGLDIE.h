#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class String; }

#define MIFKBFGLDIE_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x107564A0)
#define MIFKBFGLDIE_BIGOFMEBPFO_OFFSET UNITYSDK_OFFSET(0x10757160)
#define MIFKBFGLDIE_CDPPOKOGPKB_OFFSET UNITYSDK_OFFSET(0x10757670)
#define MIFKBFGLDIE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x10754D10)
#define MIFKBFGLDIE_HLDPDPFLIGG_OFFSET UNITYSDK_OFFSET(0x10755DE0)
#define MIFKBFGLDIE_ICJAPEMNLCF_OFFSET UNITYSDK_OFFSET(0x10755DA0)
#define MIFKBFGLDIE_JOKEHFLAEKE_OFFSET UNITYSDK_OFFSET(0x10754EE0)
#define MIFKBFGLDIE_KFHDJOBFLON_OFFSET UNITYSDK_OFFSET(0x10755390)
#define MIFKBFGLDIE_KNDFJHJPAHA_OFFSET UNITYSDK_OFFSET(0x10755B30)
#define MIFKBFGLDIE_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x10756C20)
#define MIFKBFGLDIE_NJFAMNABKBE_OFFSET UNITYSDK_OFFSET(0x107555E0)
#define MIFKBFGLDIE_NPIJFJJOBCA_OFFSET UNITYSDK_OFFSET(0x10756740)
#define MIFKBFGLDIE_OBJABEKGHOE_OFFSET UNITYSDK_OFFSET(0x10756780)
#define MIFKBFGLDIE_PDJDHFFPDOC_OFFSET UNITYSDK_OFFSET(0x10756CB0)
#define MIFKBFGLDIE_PMHJBNNPCLB_OFFSET UNITYSDK_OFFSET(0x10757860)
#define MIFKBFGLDIE__CTOR_OFFSET UNITYSDK_OFFSET(0x10754E90)

inline static constexpr unsigned int MIFKBFGLDIE_TypeDefinitionIndex = 43952;

class MIFKBFGLDIE : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIFKBFGLDIE__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MIFKBFGLDIE_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	static ::System::Void JOKEHFLAEKE(::System::Action* EJGDHCIBCJH, ::System::Boolean ACJNEHDOIEC)
	{
		return ((::System::Void(*)(::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIFKBFGLDIE_JOKEHFLAEKE_OFFSET))(EJGDHCIBCJH, ACJNEHDOIEC);
	}

	static ::System::Boolean KFHDJOBFLON(::UnityEngine::Vector3 CKPGOKHECCH, ::UnityEngine::Quaternion GJNLCLDFFIN)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MIFKBFGLDIE_KFHDJOBFLON_OFFSET))(CKPGOKHECCH, GJNLCLDFFIN);
	}

	static ::System::Void NJFAMNABKBE(::UnityEngine::Vector3 CFJFMMGPGKE)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MIFKBFGLDIE_NJFAMNABKBE_OFFSET))(CFJFMMGPGKE);
	}

	static ::System::Void KNDFJHJPAHA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIFKBFGLDIE_KNDFJHJPAHA_OFFSET))();
	}

	::System::Void ICJAPEMNLCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIFKBFGLDIE_ICJAPEMNLCF_OFFSET))(this);
	}

	static ::System::Void HLDPDPFLIGG(::MGHNAPKHBOG EOONAEHNGLF, ::System::String* ADAFPMCDIOM, ::System::Boolean OGHLIFIIKCO, ::System::Single LLKPCKPCDOJ, ::System::String* BFIFPEOLPFG, ::System::Boolean KCFDOHCLAKL, ::System::Boolean HMGMOJAPBNI, ::System::Boolean KEADBGPENLH)
	{
		return ((::System::Void(*)(::MGHNAPKHBOG, ::System::String*, ::System::Boolean, ::System::Single, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIFKBFGLDIE_HLDPDPFLIGG_OFFSET))(EOONAEHNGLF, ADAFPMCDIOM, OGHLIFIIKCO, LLKPCKPCDOJ, BFIFPEOLPFG, KCFDOHCLAKL, HMGMOJAPBNI, KEADBGPENLH);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + MIFKBFGLDIE_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}

	::System::Void OBJABEKGHOE(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MIFKBFGLDIE_OBJABEKGHOE_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void NPIJFJJOBCA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIFKBFGLDIE_NPIJFJJOBCA_OFFSET))(this);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MIFKBFGLDIE_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Boolean PDJDHFFPDOC(::MoleMole::Battle::Entity* FNKPOBCBGML, ::System::String* ONPIOMIKGMC, ::System::Action* EJGDHCIBCJH, ::System::Boolean ACJNEHDOIEC)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIFKBFGLDIE_PDJDHFFPDOC_OFFSET))(FNKPOBCBGML, ONPIOMIKGMC, EJGDHCIBCJH, ACJNEHDOIEC);
	}

	static ::System::Boolean BIGOFMEBPFO(::System::UInt32 OPAOGDLLDNO, ::System::UInt32 CHCMFBGKHOP, ::System::Boolean JJEPLBFGIAE)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIFKBFGLDIE_BIGOFMEBPFO_OFFSET))(OPAOGDLLDNO, CHCMFBGKHOP, JJEPLBFGIAE);
	}

	static ::UnityEngine::Vector3 CDPPOKOGPKB(::UnityEngine::Vector3 KHGFAKJKDGG, ::UnityEngine::Vector3 BHFAGMPDIGJ, ::System::Single ELHMOANKHFM)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MIFKBFGLDIE_CDPPOKOGPKB_OFFSET))(KHGFAKJKDGG, BHFAGMPDIGJ, ELHMOANKHFM);
	}

	::System::Void PMHJBNNPCLB(::Nap::NapECS::EcsEntity* BFDPPMDEOFF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + MIFKBFGLDIE_PMHJBNNPCLB_OFFSET))(this, BFDPPMDEOFF);
	}
};
