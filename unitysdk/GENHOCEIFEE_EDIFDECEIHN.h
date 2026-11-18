#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EAOMCKHAMBD;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define GENHOCEIFEE_EDIFDECEIHN_AFILDHEHJPM_OFFSET UNITYSDK_OFFSET(0x15CE0BF0)
#define GENHOCEIFEE_EDIFDECEIHN_NDHMFOPCMFD_OFFSET UNITYSDK_OFFSET(0x15CE0BE0)
#define GENHOCEIFEE_EDIFDECEIHN__CTOR_OFFSET UNITYSDK_OFFSET(0x15CE0BD0)

inline static constexpr unsigned int GENHOCEIFEE_EDIFDECEIHN_TypeDefinitionIndex = 52657;

class GENHOCEIFEE_EDIFDECEIHN : public ::System::Object
{
public:
	::System::Action_1<::EAOMCKHAMBD*>* EJGDHCIBCJH; // 0x10
	::System::Action* NKGCDDCMBCF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GENHOCEIFEE_EDIFDECEIHN__CTOR_OFFSET))(this);
	}

	::System::Void NDHMFOPCMFD(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GENHOCEIFEE_EDIFDECEIHN_NDHMFOPCMFD_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void AFILDHEHJPM(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GENHOCEIFEE_EDIFDECEIHN_AFILDHEHJPM_OFFSET))(this, BHDNBGLCNOM);
	}
};
