#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOKMHLGLIAF.h"
#include "unitysdk/AGAFGMPKAFA.h"

class CHOBEPDPDEF;
class JKKBJHGPLNF;

#define DFDGBCDHDCG_ALHHKFBPMDD_OFFSET UNITYSDK_OFFSET(0x7F6F140)
#define DFDGBCDHDCG_CDJMJPJMGBB_OFFSET UNITYSDK_OFFSET(0x7F6EF40)
#define DFDGBCDHDCG_LLHMMHCHLPK_OFFSET UNITYSDK_OFFSET(0x7F6F0B0)
#define DFDGBCDHDCG__CTOR_OFFSET UNITYSDK_OFFSET(0x7F6EE70)

inline static constexpr unsigned int DFDGBCDHDCG_TypeDefinitionIndex = 44019;

class DFDGBCDHDCG : public ::MOKMHLGLIAF
{
public:
	::CHOBEPDPDEF* NJBAECOFFIJ; // 0xC8

	::System::Void _ctor(::AGAFGMPKAFA HNOPAJLDCFB, ::System::Int32 AMCNCFDFMEM, ::CHOBEPDPDEF* FCEIKAIDHPM)
	{
		return ((::System::Void(*)(::PVOID, ::AGAFGMPKAFA, ::System::Int32, ::CHOBEPDPDEF*))((::PBYTE)hIl2Cpp + DFDGBCDHDCG__CTOR_OFFSET))(this, HNOPAJLDCFB, AMCNCFDFMEM, FCEIKAIDHPM);
	}

	::System::Void CDJMJPJMGBB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDGBCDHDCG_CDJMJPJMGBB_OFFSET))(this);
	}

	::System::Void LLHMMHCHLPK(::System::Boolean CAAFEGLOALC, ::JKKBJHGPLNF* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::JKKBJHGPLNF*))((::PBYTE)hIl2Cpp + DFDGBCDHDCG_LLHMMHCHLPK_OFFSET))(this, CAAFEGLOALC, GLAOEHCGCFO);
	}

	::System::Void ALHHKFBPMDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDGBCDHDCG_ALHHKFBPMDD_OFFSET))(this);
	}
};
