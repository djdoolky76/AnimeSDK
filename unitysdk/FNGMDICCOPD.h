#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class GEIHCPAOKKK;
class MBKPHCPCKBO;
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace UnityEngine { class Collider; }

#define FNGMDICCOPD_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xBB6E640)
#define FNGMDICCOPD_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xBB6E820)
#define FNGMDICCOPD_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0xBB6EFF0)
#define FNGMDICCOPD_INEGOEGIOKM_OFFSET UNITYSDK_OFFSET(0xBB6F6E0)
#define FNGMDICCOPD_KHBONHCBHOK_OFFSET UNITYSDK_OFFSET(0xBB6F360)
#define FNGMDICCOPD_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0xBB6F650)
#define FNGMDICCOPD_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xBB6E990)
#define FNGMDICCOPD_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0xBB6EF50)
#define FNGMDICCOPD__CTOR_OFFSET UNITYSDK_OFFSET(0xBB6EFA0)

inline static constexpr unsigned int FNGMDICCOPD_TypeDefinitionIndex = 51586;

class FNGMDICCOPD : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGMDICCOPD__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + FNGMDICCOPD_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGMDICCOPD_FIXEDUPDATE_OFFSET))(this);
	}

	static ::System::Void OnTriggerEnter(::MBKPHCPCKBO* HIBEOHLBDJL, ::UnityEngine::Collider* LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::MBKPHCPCKBO*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + FNGMDICCOPD_ONTRIGGERENTER_OFFSET))(HIBEOHLBDJL, LIBPKNHDIGP);
	}

	static ::System::Void OnTriggerExit(::MBKPHCPCKBO* HIBEOHLBDJL, ::UnityEngine::Collider* LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::MBKPHCPCKBO*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + FNGMDICCOPD_ONTRIGGEREXIT_OFFSET))(HIBEOHLBDJL, LIBPKNHDIGP);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNGMDICCOPD_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::System::Void KHBONHCBHOK(::GEIHCPAOKKK* OHPJHPEOFLD, ::MBKPHCPCKBO* HIBEOHLBDJL, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::MBKPHCPCKBO*, ::System::Single))((::PBYTE)hIl2Cpp + FNGMDICCOPD_KHBONHCBHOK_OFFSET))(OHPJHPEOFLD, HIBEOHLBDJL, PMNLNNGEIFM);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + FNGMDICCOPD_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void INEGOEGIOKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGMDICCOPD_INEGOEGIOKM_OFFSET))(this);
	}
};
