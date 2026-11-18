#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EODCINHDNOA;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define GENHOCEIFEE_HDOGACEGLAB_GGOMLBBBKLH_OFFSET UNITYSDK_OFFSET(0x189FB230)
#define GENHOCEIFEE_HDOGACEGLAB_HDDFAKBBGFE_OFFSET UNITYSDK_OFFSET(0x189FB240)
#define GENHOCEIFEE_HDOGACEGLAB__CTOR_OFFSET UNITYSDK_OFFSET(0x189FB220)

inline static constexpr unsigned int GENHOCEIFEE_HDOGACEGLAB_TypeDefinitionIndex = 52651;

class GENHOCEIFEE_HDOGACEGLAB : public ::System::Object
{
public:
	::System::Action_1<::EODCINHDNOA*>* EJGDHCIBCJH; // 0x10
	::System::Action* NKGCDDCMBCF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GENHOCEIFEE_HDOGACEGLAB__CTOR_OFFSET))(this);
	}

	::System::Void GGOMLBBBKLH(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GENHOCEIFEE_HDOGACEGLAB_GGOMLBBBKLH_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void HDDFAKBBGFE(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GENHOCEIFEE_HDOGACEGLAB_HDDFAKBBGFE_OFFSET))(this, BHDNBGLCNOM);
	}
};
