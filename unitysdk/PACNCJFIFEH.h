#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"

namespace System { class String; }

#define PACNCJFIFEH_AINPGGOCHMI_OFFSET UNITYSDK_OFFSET(0x172ECFC0)
#define PACNCJFIFEH_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x172ED080)
#define PACNCJFIFEH_DNGOMMGKIID_OFFSET UNITYSDK_OFFSET(0x172ECFD0)
#define PACNCJFIFEH_DNNJLKJLLBK_OFFSET UNITYSDK_OFFSET(0x172ED010)
#define PACNCJFIFEH_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x172ED030)
#define PACNCJFIFEH_EKOAPEKINHD_OFFSET UNITYSDK_OFFSET(0x172ED070)
#define PACNCJFIFEH_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x172ECF30)
#define PACNCJFIFEH_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x172ECEA0)
#define PACNCJFIFEH_GGGDDPGAJON_OFFSET UNITYSDK_OFFSET(0x172ED000)
#define PACNCJFIFEH_KMBBKMDGEFA_OFFSET UNITYSDK_OFFSET(0x172ED020)
#define PACNCJFIFEH_LLMFMLPIFAA_OFFSET UNITYSDK_OFFSET(0x172ECFF0)
#define PACNCJFIFEH_PFIMHMLBDHK_OFFSET UNITYSDK_OFFSET(0x172ECFE0)
#define PACNCJFIFEH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x172ECDA0)
#define PACNCJFIFEH__CCTOR_OFFSET UNITYSDK_OFFSET(0x172ECE20)
#define PACNCJFIFEH__CTOR_OFFSET UNITYSDK_OFFSET(0x172ECE90)

inline static constexpr unsigned int PACNCJFIFEH_TypeDefinitionIndex = 43179;

class PACNCJFIFEH : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x3F; // 0x0
	::MoleMole::Config::EVariantElement _LAILDDLCFAL_k__BackingField; // 0x20
	::System::Single _MEHNGFFCPBF_k__BackingField; // 0x24
	::MoleMole::Config::DamageElementType _NBPMFEEONIP_k__BackingField; // 0x28
	::System::Single _NMAACAJINCG_k__BackingField; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PACNCJFIFEH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACNCJFIFEH__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PACNCJFIFEH_TOSTRING_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACNCJFIFEH_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACNCJFIFEH_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void AINPGGOCHMI(::MoleMole::Config::DamageElementType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + PACNCJFIFEH_AINPGGOCHMI_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::Config::EVariantElement DNGOMMGKIID()
	{
		return ((::MoleMole::Config::EVariantElement(*)(::PVOID))((::PBYTE)hIl2Cpp + PACNCJFIFEH_DNGOMMGKIID_OFFSET))(this);
	}

	::System::Single PFIMHMLBDHK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PACNCJFIFEH_PFIMHMLBDHK_OFFSET))(this);
	}

	::System::Void LLMFMLPIFAA(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PACNCJFIFEH_LLMFMLPIFAA_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::Config::DamageElementType GGGDDPGAJON()
	{
		return ((::MoleMole::Config::DamageElementType(*)(::PVOID))((::PBYTE)hIl2Cpp + PACNCJFIFEH_GGGDDPGAJON_OFFSET))(this);
	}

	::System::Single DNNJLKJLLBK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PACNCJFIFEH_DNNJLKJLLBK_OFFSET))(this);
	}

	::System::Void KMBBKMDGEFA(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PACNCJFIFEH_KMBBKMDGEFA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PACNCJFIFEH_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void EKOAPEKINHD(::MoleMole::Config::EVariantElement EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EVariantElement))((::PBYTE)hIl2Cpp + PACNCJFIFEH_EKOAPEKINHD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CNHBDOMKKDE(::System::Single LLCGIOPDNAO, ::System::Single JPMFGFKBLED, ::MoleMole::Config::DamageElementType FGJFFHEKAOJ, ::MoleMole::Config::EVariantElement CCAGLDOOPGP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement))((::PBYTE)hIl2Cpp + PACNCJFIFEH_CNHBDOMKKDE_OFFSET))(this, LLCGIOPDNAO, JPMFGFKBLED, FGJFFHEKAOJ, CCAGLDOOPGP);
	}
};
