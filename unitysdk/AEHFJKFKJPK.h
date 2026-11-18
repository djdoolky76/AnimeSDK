#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EMFEHAKJNOD;
class IKKDCFLLIOF;

#define AEHFJKFKJPK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x144CDA90)
#define AEHFJKFKJPK__CTOR_OFFSET UNITYSDK_OFFSET(0x144CDA80)

inline static constexpr unsigned int AEHFJKFKJPK_TypeDefinitionIndex = 70931;

class AEHFJKFKJPK : public ::System::Object
{
public:
	::EMFEHAKJNOD* AHMFPFACACD; // 0x10
	::IKKDCFLLIOF* JMINOGAOFIL; // 0x18
	::System::Int32 GCBBLCHMMKC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEHFJKFKJPK__CTOR_OFFSET))(this);
	}

	::AEHFJKFKJPK* DGNAAPGKIPL()
	{
		return ((::AEHFJKFKJPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEHFJKFKJPK_DGNAAPGKIPL_OFFSET))(this);
	}
};
