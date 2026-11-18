#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define LJCDOJAMPMF_FBADLCEFGEF_HOOBCCFBJLA_OFFSET UNITYSDK_OFFSET(0x15661E50)
#define LJCDOJAMPMF_FBADLCEFGEF_LKLCMNCKOPH_OFFSET UNITYSDK_OFFSET(0x15661FC0)
#define LJCDOJAMPMF_FBADLCEFGEF__CTOR_OFFSET UNITYSDK_OFFSET(0x15661E40)

inline static constexpr unsigned int LJCDOJAMPMF_FBADLCEFGEF_TypeDefinitionIndex = 71951;

class LJCDOJAMPMF_FBADLCEFGEF : public ::System::Object
{
public:
	::HOCDHMEPPEG ECLGGGCDNKC; // 0x10
	::Foundation::ViewObject::ViewObjectHandle GDMNDDJHBDJ; // 0x40
	::System::Int32 EMIHPNKBMBF; // 0x50
	::System::UInt32 JPFOHACBPCA; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCDOJAMPMF_FBADLCEFGEF__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* HOOBCCFBJLA(::LGCNEDCMPKM PIIPCLCCOIG)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::LGCNEDCMPKM))((::PBYTE)hIl2Cpp + LJCDOJAMPMF_FBADLCEFGEF_HOOBCCFBJLA_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void LKLCMNCKOPH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCDOJAMPMF_FBADLCEFGEF_LKLCMNCKOPH_OFFSET))(this);
	}
};
