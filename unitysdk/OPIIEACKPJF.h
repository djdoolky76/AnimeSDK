#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIBOIKJGAIH.h"
#include "unitysdk/MPHPFDEODIG.h"

namespace MoleMole { class UIViewModelReference; }

#define OPIIEACKPJF_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x178A8C40)
#define OPIIEACKPJF_BEBCOGILIKH_OFFSET UNITYSDK_OFFSET(0x178A8970)
#define OPIIEACKPJF_CLEAN_OFFSET UNITYSDK_OFFSET(0x178A8890)
#define OPIIEACKPJF_DDOEPJHPOGP_OFFSET UNITYSDK_OFFSET(0x178A8B80)
#define OPIIEACKPJF_HPJIJBFLHDF_OFFSET UNITYSDK_OFFSET(0x178A8C20)
#define OPIIEACKPJF_LJNFANAEHHA_OFFSET UNITYSDK_OFFSET(0x178A8B90)
#define OPIIEACKPJF_MDOKHFIFLNH_OFFSET UNITYSDK_OFFSET(0x178A8960)
#define OPIIEACKPJF_MPOPOLCKHHL_OFFSET UNITYSDK_OFFSET(0x178A8C30)
#define OPIIEACKPJF__CTOR_OFFSET UNITYSDK_OFFSET(0x178A8950)

inline static constexpr unsigned int OPIIEACKPJF_TypeDefinitionIndex = 58122;

class OPIIEACKPJF : public ::MPHPFDEODIG
{
public:
	::MoleMole::UIViewModelReference* _ABGAEHHIKDE_k__BackingField; // 0x20
	::LIBOIKJGAIH _HMOLINBELLE_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIIEACKPJF__CTOR_OFFSET))(this);
	}

	::System::Void Clean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIIEACKPJF_CLEAN_OFFSET))(this);
	}

	::MoleMole::UIViewModelReference* MDOKHFIFLNH()
	{
		return ((::MoleMole::UIViewModelReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIIEACKPJF_MDOKHFIFLNH_OFFSET))(this);
	}

	static ::LIBOIKJGAIH BEBCOGILIKH(::MoleMole::UIViewModelReference* IONFBAPOJKM)
	{
		return ((::LIBOIKJGAIH(*)(::MoleMole::UIViewModelReference*))((::PBYTE)hIl2Cpp + OPIIEACKPJF_BEBCOGILIKH_OFFSET))(IONFBAPOJKM);
	}

	::LIBOIKJGAIH DDOEPJHPOGP()
	{
		return ((::LIBOIKJGAIH(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIIEACKPJF_DDOEPJHPOGP_OFFSET))(this);
	}

	::System::Void LJNFANAEHHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIIEACKPJF_LJNFANAEHHA_OFFSET))(this);
	}

	::System::Void HPJIJBFLHDF(::MoleMole::UIViewModelReference* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIViewModelReference*))((::PBYTE)hIl2Cpp + OPIIEACKPJF_HPJIJBFLHDF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MPOPOLCKHHL(::LIBOIKJGAIH EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH))((::PBYTE)hIl2Cpp + OPIIEACKPJF_MPOPOLCKHHL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::UIViewModelReference* IONFBAPOJKM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIViewModelReference*))((::PBYTE)hIl2Cpp + OPIIEACKPJF_BBOMJDBNHIC_OFFSET))(this, IONFBAPOJKM);
	}
};
