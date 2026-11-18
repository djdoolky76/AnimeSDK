#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class MBPBDNCGLOP;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define IIMGGFACCFP_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x1014DDF0)
#define IIMGGFACCFP_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1014CA10)
#define IIMGGFACCFP_GBADKGDNBEA_OFFSET UNITYSDK_OFFSET(0x1014CD60)
#define IIMGGFACCFP_GHJGGBAJFCM_OFFSET UNITYSDK_OFFSET(0x1014D120)
#define IIMGGFACCFP_HIEBBOJAMEK_OFFSET UNITYSDK_OFFSET(0x1014DE80)
#define IIMGGFACCFP_JOIJDOIPAOI_OFFSET UNITYSDK_OFFSET(0x1014DF20)
#define IIMGGFACCFP_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x1014DD60)
#define IIMGGFACCFP_UPDATE_OFFSET UNITYSDK_OFFSET(0x1014CBA0)
#define IIMGGFACCFP__CTOR_OFFSET UNITYSDK_OFFSET(0x1014CD10)

inline static constexpr unsigned int IIMGGFACCFP_TypeDefinitionIndex = 73104;

class IIMGGFACCFP : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMGGFACCFP__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + IIMGGFACCFP_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMGGFACCFP_UPDATE_OFFSET))(this);
	}

	static ::System::Boolean GBADKGDNBEA(::MBPBDNCGLOP* BIDIJJLLLLP, ::System::String* KKJEJNMLIFP, ::System::String* ENHKFPBDHHI)
	{
		return ((::System::Boolean(*)(::MBPBDNCGLOP*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + IIMGGFACCFP_GBADKGDNBEA_OFFSET))(BIDIJJLLLLP, KKJEJNMLIFP, ENHKFPBDHHI);
	}

	static ::System::Void GHJGGBAJFCM(::System::Single PMNLNNGEIFM, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + IIMGGFACCFP_GHJGGBAJFCM_OFFSET))(PMNLNNGEIFM, KECKGDFIALJ);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + IIMGGFACCFP_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMGGFACCFP_CMFOMGGDPPA_OFFSET))(this);
	}

	static ::System::Boolean HIEBBOJAMEK(::MBPBDNCGLOP* BIDIJJLLLLP, ::System::String* KKJEJNMLIFP, ::System::String* ENHKFPBDHHI)
	{
		return ((::System::Boolean(*)(::MBPBDNCGLOP*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + IIMGGFACCFP_HIEBBOJAMEK_OFFSET))(BIDIJJLLLLP, KKJEJNMLIFP, ENHKFPBDHHI);
	}

	static ::System::Void JOIJDOIPAOI(::MBPBDNCGLOP* BIDIJJLLLLP, ::System::String* KKJEJNMLIFP, ::System::String* ENHKFPBDHHI)
	{
		return ((::System::Void(*)(::MBPBDNCGLOP*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + IIMGGFACCFP_JOIJDOIPAOI_OFFSET))(BIDIJJLLLLP, KKJEJNMLIFP, ENHKFPBDHHI);
	}
};
