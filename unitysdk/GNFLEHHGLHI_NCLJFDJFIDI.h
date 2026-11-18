#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AIOGGGIHCAE;
class BPDDEPLBABF;
class GEKNEEMAHBC;

#define GNFLEHHGLHI_NCLJFDJFIDI_NBCIIJNMMCI_OFFSET UNITYSDK_OFFSET(0x13D6DC90)
#define GNFLEHHGLHI_NCLJFDJFIDI__CTOR_OFFSET UNITYSDK_OFFSET(0x13D6DC80)

inline static constexpr unsigned int GNFLEHHGLHI_NCLJFDJFIDI_TypeDefinitionIndex = 62182;

class GNFLEHHGLHI_NCLJFDJFIDI : public ::System::Object
{
public:
	::BPDDEPLBABF* IDEMLLIAAMC; // 0x10
	::AIOGGGIHCAE* BMDHAMNECNI; // 0x18
	::GEKNEEMAHBC* NALHCEONDDN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFLEHHGLHI_NCLJFDJFIDI__CTOR_OFFSET))(this);
	}

	::System::Void NBCIIJNMMCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFLEHHGLHI_NCLJFDJFIDI_NBCIIJNMMCI_OFFSET))(this);
	}
};
