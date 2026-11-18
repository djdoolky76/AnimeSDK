#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class FDELLONEODJ;
namespace System { class String; }

#define FDELLONEODJ_DLKLGGGBLOG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x861470)
#define FDELLONEODJ_DLKLGGGBLOG__CTOR_OFFSET UNITYSDK_OFFSET(0x861460)

inline static constexpr unsigned int FDELLONEODJ_DLKLGGGBLOG_TypeDefinitionIndex = 34704;

struct alignas(8) FDELLONEODJ_DLKLGGGBLOG
{
	::FDELLONEODJ* EFKMGPGJDND; // 0x10
	::System::String* HFEIPMCNCNI; // 0x18

	::System::Void _ctor(::FDELLONEODJ* FMJAFFDJMBB, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::FDELLONEODJ*, ::System::String*))((::PBYTE)hIl2Cpp + FDELLONEODJ_DLKLGGGBLOG__CTOR_OFFSET))(this, FMJAFFDJMBB, AELLPLBJELA);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDELLONEODJ_DLKLGGGBLOG_DISPOSE_OFFSET))(this);
	}
};
