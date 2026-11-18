#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define KNLPPPOKJJM_LCNPINEPLBB_HPFEKGAAEON_OFFSET UNITYSDK_OFFSET(0x15BA5B50)
#define KNLPPPOKJJM_LCNPINEPLBB_MPFMFFFNEGK_OFFSET UNITYSDK_OFFSET(0x15BA5B40)
#define KNLPPPOKJJM_LCNPINEPLBB__CTOR_OFFSET UNITYSDK_OFFSET(0x15BA5B30)

inline static constexpr unsigned int KNLPPPOKJJM_LCNPINEPLBB_TypeDefinitionIndex = 67489;

class KNLPPPOKJJM_LCNPINEPLBB : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* NKGCDDCMBCF; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_LCNPINEPLBB__CTOR_OFFSET))(this);
	}

	::System::Void MPFMFFFNEGK(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_LCNPINEPLBB_MPFMFFFNEGK_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void HPFEKGAAEON(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_LCNPINEPLBB_HPFEKGAAEON_OFFSET))(this, BHDNBGLCNOM);
	}
};
