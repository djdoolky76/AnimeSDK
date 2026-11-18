#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ADGJAIODIMG;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define GENHOCEIFEE_KCKOFJHMHBK_BNEJKOHMFDP_OFFSET UNITYSDK_OFFSET(0x10EE89A0)
#define GENHOCEIFEE_KCKOFJHMHBK_JPMFCOHCBBC_OFFSET UNITYSDK_OFFSET(0x10EE8A10)
#define GENHOCEIFEE_KCKOFJHMHBK__CTOR_OFFSET UNITYSDK_OFFSET(0x10EE8990)

inline static constexpr unsigned int GENHOCEIFEE_KCKOFJHMHBK_TypeDefinitionIndex = 52660;

class GENHOCEIFEE_KCKOFJHMHBK : public ::System::Object
{
public:
	::System::Action* NKGCDDCMBCF; // 0x10
	::System::Action_1<::ADGJAIODIMG*>* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GENHOCEIFEE_KCKOFJHMHBK__CTOR_OFFSET))(this);
	}

	::System::Void BNEJKOHMFDP(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GENHOCEIFEE_KCKOFJHMHBK_BNEJKOHMFDP_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void JPMFCOHCBBC(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GENHOCEIFEE_KCKOFJHMHBK_JPMFCOHCBBC_OFFSET))(this, BHDNBGLCNOM);
	}
};
