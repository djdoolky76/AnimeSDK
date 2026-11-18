#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define GPPMPHICDEA_KJPKBOIAOBM_HOEJCMNOGBK_OFFSET UNITYSDK_OFFSET(0x743F90)
#define GPPMPHICDEA_KJPKBOIAOBM__CTOR_OFFSET UNITYSDK_OFFSET(0x3657B0)

inline static constexpr unsigned int GPPMPHICDEA_KJPKBOIAOBM_TypeDefinitionIndex = 42620;

struct alignas(8) GPPMPHICDEA_KJPKBOIAOBM
{
	::System::Action_1<::System::Action*>* FLJLDJNCFGM; // 0x10
	::System::Action* EOMHKBLHFCE; // 0x18

	::System::Void _ctor(::System::Action_1<::System::Action*>* HAIPEPFANHC, ::System::Action* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Action*>*, ::System::Action*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_KJPKBOIAOBM__CTOR_OFFSET))(this, HAIPEPFANHC, GJBHEJGENMI);
	}

	::System::Void HOEJCMNOGBK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_KJPKBOIAOBM_HOEJCMNOGBK_OFFSET))(this);
	}
};
