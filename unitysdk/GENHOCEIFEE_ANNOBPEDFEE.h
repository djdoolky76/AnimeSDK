#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DOHBBBPDCOE;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define GENHOCEIFEE_ANNOBPEDFEE_EBKJJEJMDOF_OFFSET UNITYSDK_OFFSET(0x13253400)
#define GENHOCEIFEE_ANNOBPEDFEE_FNHJCDABFNE_OFFSET UNITYSDK_OFFSET(0x13253390)
#define GENHOCEIFEE_ANNOBPEDFEE__CTOR_OFFSET UNITYSDK_OFFSET(0x13253380)

inline static constexpr unsigned int GENHOCEIFEE_ANNOBPEDFEE_TypeDefinitionIndex = 52650;

class GENHOCEIFEE_ANNOBPEDFEE : public ::System::Object
{
public:
	::System::Action* NKGCDDCMBCF; // 0x10
	::System::Action_1<::DOHBBBPDCOE*>* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GENHOCEIFEE_ANNOBPEDFEE__CTOR_OFFSET))(this);
	}

	::System::Void FNHJCDABFNE(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GENHOCEIFEE_ANNOBPEDFEE_FNHJCDABFNE_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void EBKJJEJMDOF(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GENHOCEIFEE_ANNOBPEDFEE_EBKJJEJMDOF_OFFSET))(this, BHDNBGLCNOM);
	}
};
