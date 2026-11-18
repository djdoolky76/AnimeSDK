#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OKKLKNMEALC_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0xF19ADF0)
#define OKKLKNMEALC_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0xF19AC00)
#define OKKLKNMEALC_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xF19A910)
#define OKKLKNMEALC_HKIGLIBGHAH_OFFSET UNITYSDK_OFFSET(0xF19ADA0)
#define OKKLKNMEALC_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0xF19AE70)
#define OKKLKNMEALC_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0xF19AC90)
#define OKKLKNMEALC_PMHJBNNPCLB_OFFSET UNITYSDK_OFFSET(0xF19AD20)
#define OKKLKNMEALC_UPDATE_OFFSET UNITYSDK_OFFSET(0xF19AB70)
#define OKKLKNMEALC__CTOR_OFFSET UNITYSDK_OFFSET(0xF19ABB0)

inline static constexpr unsigned int OKKLKNMEALC_TypeDefinitionIndex = 62109;

class OKKLKNMEALC : public ::OAOOLPCNHKA
{
public:
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_JKHMFFJLGKF()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(OKKLKNMEALC_TypeDefinitionIndex)->GetStaticField(0x47810);
	}
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKLKNMEALC__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + OKKLKNMEALC_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKLKNMEALC_UPDATE_OFFSET))(this);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKLKNMEALC_CMFOMGGDPPA_OFFSET))(this);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + OKKLKNMEALC_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void PMHJBNNPCLB(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + OKKLKNMEALC_PMHJBNNPCLB_OFFSET))(this, MNGHGOLKKNO);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* HKIGLIBGHAH()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)())((::PBYTE)hIl2Cpp + OKKLKNMEALC_HKIGLIBGHAH_OFFSET))();
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + OKKLKNMEALC_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKKLKNMEALC_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}
};
