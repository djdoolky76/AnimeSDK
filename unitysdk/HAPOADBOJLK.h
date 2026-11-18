#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHAIBHJAFEP.h"

class ALAGDAJALHD;

#define HAPOADBOJLK_CEJCBBCGBJJ_OFFSET UNITYSDK_OFFSET(0x13D7D7F0)
#define HAPOADBOJLK_CMCDIALAMMD_OFFSET UNITYSDK_OFFSET(0x13D7D800)
#define HAPOADBOJLK_DKGEILMFFAC_OFFSET UNITYSDK_OFFSET(0x13D7D7E0)
#define HAPOADBOJLK_EAKMDAEPICH_OFFSET UNITYSDK_OFFSET(0x13D7D6D0)
#define HAPOADBOJLK_FKDAEAJFHNN_OFFSET UNITYSDK_OFFSET(0x13D7D730)
#define HAPOADBOJLK_JMPFCJJFNEH_OFFSET UNITYSDK_OFFSET(0x13D7D7D0)
#define HAPOADBOJLK__CTOR_OFFSET UNITYSDK_OFFSET(0x13D7D690)

inline static constexpr unsigned int HAPOADBOJLK_TypeDefinitionIndex = 58433;

class HAPOADBOJLK : public ::KHAIBHJAFEP
{
public:
	::ALAGDAJALHD* _MGAKHBCNEDH_k__BackingField; // 0x38
	::System::Double _KACKDFAEDOB_k__BackingField; // 0x40

	::System::Void _ctor(::ALAGDAJALHD* FCPGJNLBFMO, ::System::Double CIIPCCLOHLH, ::System::Double AJPAFKAPNNM)
	{
		return ((::System::Void(*)(::PVOID, ::ALAGDAJALHD*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + HAPOADBOJLK__CTOR_OFFSET))(this, FCPGJNLBFMO, CIIPCCLOHLH, AJPAFKAPNNM);
	}

	::System::Double EAKMDAEPICH()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + HAPOADBOJLK_EAKMDAEPICH_OFFSET))(this);
	}

	::System::Double FKDAEAJFHNN()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + HAPOADBOJLK_FKDAEAJFHNN_OFFSET))(this);
	}

	::System::Void JMPFCJJFNEH(::ALAGDAJALHD* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::ALAGDAJALHD*))((::PBYTE)hIl2Cpp + HAPOADBOJLK_JMPFCJJFNEH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DKGEILMFFAC(::System::Double EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + HAPOADBOJLK_DKGEILMFFAC_OFFSET))(this, EGEGIMGMJHN);
	}

	::ALAGDAJALHD* CEJCBBCGBJJ()
	{
		return ((::ALAGDAJALHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAPOADBOJLK_CEJCBBCGBJJ_OFFSET))(this);
	}

	::System::Double CMCDIALAMMD()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + HAPOADBOJLK_CMCDIALAMMD_OFFSET))(this);
	}
};
