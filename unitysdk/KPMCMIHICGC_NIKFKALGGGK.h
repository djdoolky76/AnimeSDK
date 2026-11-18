#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define KPMCMIHICGC_NIKFKALGGGK_DPKDCKGNLPA_OFFSET UNITYSDK_OFFSET(0x126BCBD0)
#define KPMCMIHICGC_NIKFKALGGGK__CTOR_OFFSET UNITYSDK_OFFSET(0x126BCBC0)

inline static constexpr unsigned int KPMCMIHICGC_NIKFKALGGGK_TypeDefinitionIndex = 87685;

class KPMCMIHICGC_NIKFKALGGGK : public ::System::Object
{
public:
	::System::Action* OBAPMKKOLJO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMCMIHICGC_NIKFKALGGGK__CTOR_OFFSET))(this);
	}

	::System::Void DPKDCKGNLPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMCMIHICGC_NIKFKALGGGK_DPKDCKGNLPA_OFFSET))(this);
	}
};
