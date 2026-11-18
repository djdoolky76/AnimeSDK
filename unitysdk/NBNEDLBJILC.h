#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPJMHAAEIKO.h"
#include "unitysdk/NHPFMFABMEC.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }

#define NBNEDLBJILC_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0xE17F9B0)
#define NBNEDLBJILC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE17FA40)
#define NBNEDLBJILC_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0xE17F8E0)
#define NBNEDLBJILC_LJBKBCPPNAO_OFFSET UNITYSDK_OFFSET(0xE17F670)
#define NBNEDLBJILC_NOGKIHLPJDO_OFFSET UNITYSDK_OFFSET(0xE17FAD0)
#define NBNEDLBJILC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE17F150)
#define NBNEDLBJILC_PNIFINLBMOE_OFFSET UNITYSDK_OFFSET(0xE17F290)
#define NBNEDLBJILC__CTOR_OFFSET UNITYSDK_OFFSET(0xE17F9A0)

inline static constexpr unsigned int NBNEDLBJILC_TypeDefinitionIndex = 48516;

class NBNEDLBJILC : public ::NHPFMFABMEC
{
public:
	::System::Int32 JAHHCJMMNEP; // 0x38
	::System::Int32 JFEEEOJCHJG; // 0x3C
	::System::Int32 LLFKOOKDOLP; // 0x40
	::GPJMHAAEIKO ANDAJEEDAJD; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNEDLBJILC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNEDLBJILC_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void PNIFINLBMOE(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NBNEDLBJILC_PNIFINLBMOE_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNEDLBJILC_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNEDLBJILC_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNEDLBJILC_ECNOGHHOPPF_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* LJBKBCPPNAO()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNEDLBJILC_LJBKBCPPNAO_OFFSET))(this);
	}

	::System::Void NOGKIHLPJDO(::System::EventArgs* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NBNEDLBJILC_NOGKIHLPJDO_OFFSET))(this, MIALFKCCCPI);
	}
};
