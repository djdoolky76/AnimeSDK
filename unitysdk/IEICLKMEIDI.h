#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DCNGDMKEFIB;
class FCPBOMMIHCE;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IEICLKMEIDI_GBJGIJONEFG_OFFSET UNITYSDK_OFFSET(0x1A39B190)
#define IEICLKMEIDI_JPPEEOLOGGP_OFFSET UNITYSDK_OFFSET(0x1A39B2F0)
#define IEICLKMEIDI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A39B110)

inline static constexpr unsigned int IEICLKMEIDI_TypeDefinitionIndex = 75079;

class IEICLKMEIDI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* CHLPKLKLLJK; // 0x10
	::DCNGDMKEFIB* NKJKDMDINOF; // 0x18

	::System::Void _ctor(::DCNGDMKEFIB* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::DCNGDMKEFIB*))((::PBYTE)hIl2Cpp + IEICLKMEIDI__CTOR_OFFSET))(this, IOKOLJDCKPN);
	}

	::System::Void GBJGIJONEFG(::FCPBOMMIHCE* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::FCPBOMMIHCE*))((::PBYTE)hIl2Cpp + IEICLKMEIDI_GBJGIJONEFG_OFFSET))(this, IOKOLJDCKPN);
	}

	static ::IEICLKMEIDI* JPPEEOLOGGP(::FCPBOMMIHCE* IOKOLJDCKPN)
	{
		return ((::IEICLKMEIDI*(*)(::FCPBOMMIHCE*))((::PBYTE)hIl2Cpp + IEICLKMEIDI_JPPEEOLOGGP_OFFSET))(IOKOLJDCKPN);
	}
};
