#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class FHMLHDBNFCA;

#define JFDFFEGKMKP_OBBIEGIJJLA_MBFPFFDOENO_OFFSET UNITYSDK_OFFSET(0x165A1A50)
#define JFDFFEGKMKP_OBBIEGIJJLA__CTOR_OFFSET UNITYSDK_OFFSET(0x165A1A40)

inline static constexpr unsigned int JFDFFEGKMKP_OBBIEGIJJLA_TypeDefinitionIndex = 79802;

class JFDFFEGKMKP_OBBIEGIJJLA : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::HollowCell MHJACNMKFKA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDFFEGKMKP_OBBIEGIJJLA__CTOR_OFFSET))(this);
	}

	::System::Boolean MBFPFFDOENO(::FHMLHDBNFCA* HMMMOCJAEOA)
	{
		return ((::System::Boolean(*)(::PVOID, ::FHMLHDBNFCA*))((::PBYTE)hIl2Cpp + JFDFFEGKMKP_OBBIEGIJJLA_MBFPFFDOENO_OFFSET))(this, HMMMOCJAEOA);
	}
};
