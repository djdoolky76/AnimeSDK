#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJIBNLBCGFG.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"

#define HCJFBAKNDNN_ADNPFJMKDNM_OFFSET UNITYSDK_OFFSET(0x17AEC150)
#define HCJFBAKNDNN_EECCGKGLCOM_OFFSET UNITYSDK_OFFSET(0x17AEC210)
#define HCJFBAKNDNN_KCMNFHLGCFJ_OFFSET UNITYSDK_OFFSET(0x17AEC1B0)
#define HCJFBAKNDNN_PJFACDEBBIK_OFFSET UNITYSDK_OFFSET(0x17AEC250)
#define HCJFBAKNDNN__CTOR_OFFSET UNITYSDK_OFFSET(0x17AEC140)

inline static constexpr unsigned int HCJFBAKNDNN_TypeDefinitionIndex = 86853;

class HCJFBAKNDNN : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::HollowChessboardUID KLIELDACCHH; // 0x10
	::LJIBNLBCGFG NDBCAKKCMLN; // 0x18
	::System::Boolean JAGILLDDPOL; // 0x20

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowChessboardUID COBEJJHGMPO, ::LJIBNLBCGFG FGLDMHFEJDI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::LJIBNLBCGFG))((::PBYTE)hIl2Cpp + HCJFBAKNDNN__CTOR_OFFSET))(this, COBEJJHGMPO, FGLDMHFEJDI);
	}

	::System::Void ADNPFJMKDNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCJFBAKNDNN_ADNPFJMKDNM_OFFSET))(this);
	}

	::System::Void KCMNFHLGCFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCJFBAKNDNN_KCMNFHLGCFJ_OFFSET))(this);
	}

	::System::Void EECCGKGLCOM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCJFBAKNDNN_EECCGKGLCOM_OFFSET))(this);
	}

	::System::Void PJFACDEBBIK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCJFBAKNDNN_PJFACDEBBIK_OFFSET))(this);
	}
};
