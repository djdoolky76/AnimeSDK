#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class ENGKPGFGGLM;
class OFAEFKJCDIJ;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define MENBIODELCA_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x14050090)
#define MENBIODELCA_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x14050130)
#define MENBIODELCA_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1404FC80)
#define MENBIODELCA_KMCBODBIJPH_OFFSET UNITYSDK_OFFSET(0x140501C0)
#define MENBIODELCA_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x14050580)
#define MENBIODELCA_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x140507D0)
#define MENBIODELCA_PMHJBNNPCLB_OFFSET UNITYSDK_OFFSET(0x140500F0)
#define MENBIODELCA_UPDATE_OFFSET UNITYSDK_OFFSET(0x1404FF20)
#define MENBIODELCA__CTOR_OFFSET UNITYSDK_OFFSET(0x14050040)

inline static constexpr unsigned int MENBIODELCA_TypeDefinitionIndex = 41824;

class MENBIODELCA : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MENBIODELCA__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MENBIODELCA_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MENBIODELCA_UPDATE_OFFSET))(this);
	}

	static ::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + MENBIODELCA_APAGIJMHEAK_OFFSET))(MNGHGOLKKNO);
	}

	static ::System::Void PMHJBNNPCLB(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + MENBIODELCA_PMHJBNNPCLB_OFFSET))(KECKGDFIALJ);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MENBIODELCA_CMFOMGGDPPA_OFFSET))(this);
	}

	::System::Void KMCBODBIJPH(::OFAEFKJCDIJ* MLMFKKDEEAC, ::System::Boolean NPPMJEIPMFC)
	{
		return ((::System::Void(*)(::PVOID, ::OFAEFKJCDIJ*, ::System::Boolean))((::PBYTE)hIl2Cpp + MENBIODELCA_KMCBODBIJPH_OFFSET))(this, MLMFKKDEEAC, NPPMJEIPMFC);
	}

	::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MENBIODELCA_KOLPCLEMHGJ_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MENBIODELCA_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}
};
