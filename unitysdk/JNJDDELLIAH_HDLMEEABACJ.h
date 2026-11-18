#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }

#define JNJDDELLIAH_HDLMEEABACJ_BBPNEDAFACH_OFFSET UNITYSDK_OFFSET(0x13CCF8D0)
#define JNJDDELLIAH_HDLMEEABACJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13CCF8C0)

inline static constexpr unsigned int JNJDDELLIAH_HDLMEEABACJ_TypeDefinitionIndex = 52343;

class JNJDDELLIAH_HDLMEEABACJ : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* FKEFEONMFDC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJDDELLIAH_HDLMEEABACJ__CTOR_OFFSET))(this);
	}

	::System::Void BBPNEDAFACH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJDDELLIAH_HDLMEEABACJ_BBPNEDAFACH_OFFSET))(this);
	}
};
