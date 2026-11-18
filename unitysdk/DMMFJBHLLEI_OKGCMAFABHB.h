#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMMFJBHLLEI_KFLMIGEAJCA.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/System/Object.h"

#define DMMFJBHLLEI_OKGCMAFABHB__CTOR_OFFSET UNITYSDK_OFFSET(0x19D7CAB0)

inline static constexpr unsigned int DMMFJBHLLEI_OKGCMAFABHB_TypeDefinitionIndex = 56775;

class DMMFJBHLLEI_OKGCMAFABHB : public ::System::Object
{
public:
	::MoleMole::GameplayTag HIAIKHDFCLN; // 0x10
	::System::UInt32 BKLGNCBNEGM; // 0x20
	::System::Boolean KALBKCJCMJB; // 0x24
	::System::Byte _padding0[0x3];
	::DMMFJBHLLEI_KFLMIGEAJCA OBNIAHNMHPF; // 0x28

	::System::Void _ctor(::DMMFJBHLLEI_KFLMIGEAJCA PBMKJNLFHME, ::MoleMole::GameplayTag NIFBLFGAEOK, ::System::UInt32 LFBNGKPFFLP, ::System::Boolean PACMBJPDOEC)
	{
		return ((::System::Void(*)(::PVOID, ::DMMFJBHLLEI_KFLMIGEAJCA, ::MoleMole::GameplayTag, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + DMMFJBHLLEI_OKGCMAFABHB__CTOR_OFFSET))(this, PBMKJNLFHME, NIFBLFGAEOK, LFBNGKPFFLP, PACMBJPDOEC);
	}
};
