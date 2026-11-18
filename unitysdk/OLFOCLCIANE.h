#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define OLFOCLCIANE_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x1369B810)
#define OLFOCLCIANE_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x1369BC10)
#define OLFOCLCIANE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1369B320)
#define OLFOCLCIANE_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x1369B740)
#define OLFOCLCIANE_PMHJBNNPCLB_OFFSET UNITYSDK_OFFSET(0x1369B7D0)
#define OLFOCLCIANE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1369B5B0)
#define OLFOCLCIANE__CTOR_OFFSET UNITYSDK_OFFSET(0x1369B6F0)

inline static constexpr unsigned int OLFOCLCIANE_TypeDefinitionIndex = 41314;

class OLFOCLCIANE : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFOCLCIANE__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + OLFOCLCIANE_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFOCLCIANE_UPDATE_OFFSET))(this);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + OLFOCLCIANE_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void PMHJBNNPCLB(::Nap::NapECS::EcsEntity* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + OLFOCLCIANE_PMHJBNNPCLB_OFFSET))(EIFONLCJOPG);
	}

	static ::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + OLFOCLCIANE_APAGIJMHEAK_OFFSET))(EIFONLCJOPG);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFOCLCIANE_CMFOMGGDPPA_OFFSET))(this);
	}
};
