#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AADD5B52CC71298E.h"
#include "unitysdk/E379DE61A548837D.h"

#define ED1B2AFBE297A239__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int ED1B2AFBE297A239_TypeDefinitionIndex = 1781;

class ED1B2AFBE297A239 : public ::E379DE61A548837D
{
public:
	::System::Boolean BCA611733BAC07E9; // 0x38
	::System::Byte _padding0[0x7];
	::AADD5B52CC71298E FD9AAD34E5DF25A0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ED1B2AFBE297A239__CTOR_OFFSET))(this);
	}
};
