#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define FNCHKMKKIIG_LFGFONDPAEP_DOLKEEHABML_OFFSET UNITYSDK_OFFSET(0x11C72520)
#define FNCHKMKKIIG_LFGFONDPAEP_GHEOCDGFKEN_OFFSET UNITYSDK_OFFSET(0x11C72510)
#define FNCHKMKKIIG_LFGFONDPAEP__CTOR_OFFSET UNITYSDK_OFFSET(0x11C72500)

inline static constexpr unsigned int FNCHKMKKIIG_LFGFONDPAEP_TypeDefinitionIndex = 59359;

class FNCHKMKKIIG_LFGFONDPAEP : public ::System::Object
{
public:
	::System::Action* LPFMDKKFMBA; // 0x10
	::System::Action* COFINDNEAHE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNCHKMKKIIG_LFGFONDPAEP__CTOR_OFFSET))(this);
	}

	::System::Void GHEOCDGFKEN(::OAEFGCLEHHO* JMFEPDAHBED)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FNCHKMKKIIG_LFGFONDPAEP_GHEOCDGFKEN_OFFSET))(this, JMFEPDAHBED);
	}

	::System::Void DOLKEEHABML(::OAEFGCLEHHO* JBNBMFNNELP)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FNCHKMKKIIG_LFGFONDPAEP_DOLKEEHABML_OFFSET))(this, JBNBMFNNELP);
	}
};
