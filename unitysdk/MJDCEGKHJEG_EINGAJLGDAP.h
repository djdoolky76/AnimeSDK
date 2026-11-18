#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
class PHECEIPKGFA;
namespace System { class Action; }

#define MJDCEGKHJEG_EINGAJLGDAP_OLLLJAIGGHL_OFFSET UNITYSDK_OFFSET(0x16C8FBB0)
#define MJDCEGKHJEG_EINGAJLGDAP__CTOR_OFFSET UNITYSDK_OFFSET(0x16C8FBA0)

inline static constexpr unsigned int MJDCEGKHJEG_EINGAJLGDAP_TypeDefinitionIndex = 56423;

class MJDCEGKHJEG_EINGAJLGDAP : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::PHECEIPKGFA* NIHEFJBLPKH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_EINGAJLGDAP__CTOR_OFFSET))(this);
	}

	::System::Void OLLLJAIGGHL(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_EINGAJLGDAP_OLLLJAIGGHL_OFFSET))(this, PIIPCLCCOIG);
	}
};
