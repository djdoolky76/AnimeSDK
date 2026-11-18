#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BGDLBEFAJCE_LPMLLIIHNDE;
class CJIEIHEDMME;

#define BGDLBEFAJCE_NOLCMCLEHOM_GDNEHBHMIDK_OFFSET UNITYSDK_OFFSET(0x113E3480)
#define BGDLBEFAJCE_NOLCMCLEHOM__CTOR_OFFSET UNITYSDK_OFFSET(0x113E3470)

inline static constexpr unsigned int BGDLBEFAJCE_NOLCMCLEHOM_TypeDefinitionIndex = 52507;

class BGDLBEFAJCE_NOLCMCLEHOM : public ::System::Object
{
public:
	::CJIEIHEDMME* IHACKHOBPKG; // 0x10
	::BGDLBEFAJCE_LPMLLIIHNDE* EEMOEMFLABI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDLBEFAJCE_NOLCMCLEHOM__CTOR_OFFSET))(this);
	}

	::System::Void GDNEHBHMIDK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDLBEFAJCE_NOLCMCLEHOM_GDNEHBHMIDK_OFFSET))(this);
	}
};
