#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class FBAMLABJMKF;
class PNJDGHBEMLK;
namespace System { class Action; }

#define FBAMLABJMKF_LAHDMLOBJBM_CFJBBBDIBGC_OFFSET UNITYSDK_OFFSET(0x11AB4760)
#define FBAMLABJMKF_LAHDMLOBJBM_DBHEMNHGBMA_OFFSET UNITYSDK_OFFSET(0x11AB45F0)
#define FBAMLABJMKF_LAHDMLOBJBM__CTOR_OFFSET UNITYSDK_OFFSET(0x11AB45E0)

inline static constexpr unsigned int FBAMLABJMKF_LAHDMLOBJBM_TypeDefinitionIndex = 78135;

class FBAMLABJMKF_LAHDMLOBJBM : public ::System::Object
{
public:
	::FBAMLABJMKF* KLHPEBKNIFB; // 0x10
	::System::Action* MGAKJHJAGJI; // 0x18
	::System::Nullable_1<::System::ValueTuple_2<::System::Single, ::System::Single>> CGJKJDMINEO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_LAHDMLOBJBM__CTOR_OFFSET))(this);
	}

	::System::Boolean DBHEMNHGBMA(::PNJDGHBEMLK* CDKCJAKODPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::PNJDGHBEMLK*))((::PBYTE)hIl2Cpp + FBAMLABJMKF_LAHDMLOBJBM_DBHEMNHGBMA_OFFSET))(this, CDKCJAKODPN);
	}

	::System::Void CFJBBBDIBGC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_LAHDMLOBJBM_CFJBBBDIBGC_OFFSET))(this);
	}
};
