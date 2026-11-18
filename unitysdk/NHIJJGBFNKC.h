#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define NHIJJGBFNKC__CTOR_OFFSET UNITYSDK_OFFSET(0x12103620)

inline static constexpr unsigned int NHIJJGBFNKC_TypeDefinitionIndex = 71885;

class NHIJJGBFNKC : public ::System::Object
{
public:
	::System::Action* FFIOBMIMAMF; // 0x10
	::System::UInt32 PLLAHMDIFJF; // 0x18
	::System::Boolean FMEFHBBLNDL; // 0x1C
	::System::Boolean LCAJMDLLJNK; // 0x1D
	::System::Boolean JFLJKEKANND; // 0x1E
	::System::Boolean LHFBNKOPGJO; // 0x1F
	::System::Boolean IDHOMHHFPOH; // 0x20
	::System::Byte _padding0[0x3];
	::System::Int32 BELNJJKMMJP; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIJJGBFNKC__CTOR_OFFSET))(this);
	}
};
