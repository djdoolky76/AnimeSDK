#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define AOKFPNKJOON_HKGBJCAJJMK_OBABOIEOONN_OFFSET UNITYSDK_OFFSET(0x14234CA0)
#define AOKFPNKJOON_HKGBJCAJJMK__CTOR_OFFSET UNITYSDK_OFFSET(0x14234C90)

inline static constexpr unsigned int AOKFPNKJOON_HKGBJCAJJMK_TypeDefinitionIndex = 51474;

class AOKFPNKJOON_HKGBJCAJJMK : public ::System::Object
{
public:
	::System::Action* OLDCEOGKOAE; // 0x10
	::System::Boolean PLCJLHLIMGG; // 0x18
	::System::Byte _padding0[0x3];
	::System::Single HHMMKIAFHOC; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_HKGBJCAJJMK__CTOR_OFFSET))(this);
	}

	::System::Void OBABOIEOONN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_HKGBJCAJJMK_OBABOIEOONN_OFFSET))(this);
	}
};
