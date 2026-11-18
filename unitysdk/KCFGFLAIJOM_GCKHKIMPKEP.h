#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KCFGFLAIJOM;
class KCFGFLAIJOM_LCMIOINAHLJ;

#define KCFGFLAIJOM_GCKHKIMPKEP_AOKKABNKAAC_OFFSET UNITYSDK_OFFSET(0x13CE55D0)
#define KCFGFLAIJOM_GCKHKIMPKEP__CTOR_OFFSET UNITYSDK_OFFSET(0x13CE55C0)

inline static constexpr unsigned int KCFGFLAIJOM_GCKHKIMPKEP_TypeDefinitionIndex = 67810;

class KCFGFLAIJOM_GCKHKIMPKEP : public ::System::Object
{
public:
	::KCFGFLAIJOM* KLHPEBKNIFB; // 0x10
	::KCFGFLAIJOM_LCMIOINAHLJ* DFMKILICPFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFGFLAIJOM_GCKHKIMPKEP__CTOR_OFFSET))(this);
	}

	::System::Void AOKKABNKAAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFGFLAIJOM_GCKHKIMPKEP_AOKKABNKAAC_OFFSET))(this);
	}
};
