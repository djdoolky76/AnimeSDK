#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDPCOFANLGK.h"

#define PPPGAMEJKDD_CEGNFPPBNJJ_OFFSET UNITYSDK_OFFSET(0x1C67C960)
#define PPPGAMEJKDD_EEHBGHKFKOE_OFFSET UNITYSDK_OFFSET(0x1C67C940)
#define PPPGAMEJKDD_EEPCBJNEMAJ_OFFSET UNITYSDK_OFFSET(0x1C67C900)
#define PPPGAMEJKDD_EJOLFKCKMIF_OFFSET UNITYSDK_OFFSET(0x1C67C910)
#define PPPGAMEJKDD_GBOHPGJJMCG_OFFSET UNITYSDK_OFFSET(0x1C67C920)
#define PPPGAMEJKDD_GEBLBCFGGBB_OFFSET UNITYSDK_OFFSET(0x1C67C8F0)
#define PPPGAMEJKDD_HMLFLNADBAI_OFFSET UNITYSDK_OFFSET(0x1C67C950)
#define PPPGAMEJKDD_PIGDKBKGLCK_OFFSET UNITYSDK_OFFSET(0x1C67C930)
#define PPPGAMEJKDD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C67C970)

inline static constexpr unsigned int PPPGAMEJKDD_TypeDefinitionIndex = 45970;

class PPPGAMEJKDD : public ::KDPCOFANLGK
{
public:
	::System::Boolean _AEHPCBFNBNA_k__BackingField; // 0x70
	::System::Boolean _LOBHFEADEFL_k__BackingField; // 0x71
	::System::Boolean _KGLABPFEDOC_k__BackingField; // 0x72
	::System::Boolean _EJOGGNFGGKP_k__BackingField; // 0x73

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPGAMEJKDD__CTOR_OFFSET))(this);
	}

	::System::Boolean GEBLBCFGGBB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPGAMEJKDD_GEBLBCFGGBB_OFFSET))(this);
	}

	::System::Void EEPCBJNEMAJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PPPGAMEJKDD_EEPCBJNEMAJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean EJOLFKCKMIF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPGAMEJKDD_EJOLFKCKMIF_OFFSET))(this);
	}

	::System::Void GBOHPGJJMCG(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PPPGAMEJKDD_GBOHPGJJMCG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean PIGDKBKGLCK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPGAMEJKDD_PIGDKBKGLCK_OFFSET))(this);
	}

	::System::Void EEHBGHKFKOE(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PPPGAMEJKDD_EEHBGHKFKOE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean HMLFLNADBAI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPGAMEJKDD_HMLFLNADBAI_OFFSET))(this);
	}

	::System::Void CEGNFPPBNJJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PPPGAMEJKDD_CEGNFPPBNJJ_OFFSET))(this, EGEGIMGMJHN);
	}
};
