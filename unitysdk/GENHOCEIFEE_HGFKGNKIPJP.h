#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LPNNDCKNIHK;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define GENHOCEIFEE_HGFKGNKIPJP_AFHIINLHILI_OFFSET UNITYSDK_OFFSET(0x116EDD30)
#define GENHOCEIFEE_HGFKGNKIPJP_LGJOGOCCCBB_OFFSET UNITYSDK_OFFSET(0x116EDDA0)
#define GENHOCEIFEE_HGFKGNKIPJP__CTOR_OFFSET UNITYSDK_OFFSET(0x116ECBD0)

inline static constexpr unsigned int GENHOCEIFEE_HGFKGNKIPJP_TypeDefinitionIndex = 52652;

class GENHOCEIFEE_HGFKGNKIPJP : public ::System::Object
{
public:
	::System::Action_1<::LPNNDCKNIHK*>* EJGDHCIBCJH; // 0x10
	::System::Action* NKGCDDCMBCF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GENHOCEIFEE_HGFKGNKIPJP__CTOR_OFFSET))(this);
	}

	::System::Void AFHIINLHILI(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GENHOCEIFEE_HGFKGNKIPJP_AFHIINLHILI_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void LGJOGOCCCBB(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GENHOCEIFEE_HGFKGNKIPJP_LGJOGOCCCBB_OFFSET))(this, BHDNBGLCNOM);
	}
};
