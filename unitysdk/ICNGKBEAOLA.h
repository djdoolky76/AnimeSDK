#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define ICNGKBEAOLA__CTOR_OFFSET UNITYSDK_OFFSET(0x1609D070)

inline static constexpr unsigned int ICNGKBEAOLA_TypeDefinitionIndex = 70238;

class ICNGKBEAOLA : public ::System::Object
{
public:
	::System::Action* JGBIGOJMOME; // 0x10
	::System::Single AHAFNGEDPLI; // 0x18

	::System::Void _ctor(::System::Single FNIOPKPHDEH, ::System::Action* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + ICNGKBEAOLA__CTOR_OFFSET))(this, FNIOPKPHDEH, GJBHEJGENMI);
	}
};
