#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class KLFOBDFJFJE;
namespace System { template <typename T> class Func_1; }

#define KLFOBDFJFJE_EOMBDDJGPGL_HGGDKFFIHFH_OFFSET UNITYSDK_OFFSET(0x17721B30)
#define KLFOBDFJFJE_EOMBDDJGPGL__CTOR_OFFSET UNITYSDK_OFFSET(0x17721B20)

inline static constexpr unsigned int KLFOBDFJFJE_EOMBDDJGPGL_TypeDefinitionIndex = 58485;

class KLFOBDFJFJE_EOMBDDJGPGL : public ::System::Object
{
public:
	::System::Func_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* ENNNPGCECKB; // 0x10
	::KLFOBDFJFJE* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_EOMBDDJGPGL__CTOR_OFFSET))(this);
	}

	::System::Void HGGDKFFIHFH(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_EOMBDDJGPGL_HGGDKFFIHFH_OFFSET))(this, PBCAAADNEPK);
	}
};
