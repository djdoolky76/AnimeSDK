#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GNCLMODKIHG;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DPCEONDGPMB_IEDPEBFIDLA_PJOCMAMEOLJ_OFFSET UNITYSDK_OFFSET(0x13E68170)
#define DPCEONDGPMB_IEDPEBFIDLA__CTOR_OFFSET UNITYSDK_OFFSET(0x13E68150)

inline static constexpr unsigned int DPCEONDGPMB_IEDPEBFIDLA_TypeDefinitionIndex = 91692;

class DPCEONDGPMB_IEDPEBFIDLA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::GNCLMODKIHG*, ::System::Boolean>* INPBIICGINK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCEONDGPMB_IEDPEBFIDLA__CTOR_OFFSET))(this);
	}

	::System::Boolean PJOCMAMEOLJ(::GNCLMODKIHG* FDMLLKAJHCP)
	{
		return ((::System::Boolean(*)(::PVOID, ::GNCLMODKIHG*))((::PBYTE)hIl2Cpp + DPCEONDGPMB_IEDPEBFIDLA_PJOCMAMEOLJ_OFFSET))(this, FDMLLKAJHCP);
	}
};
