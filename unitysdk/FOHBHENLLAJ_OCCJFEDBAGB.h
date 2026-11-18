#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define FOHBHENLLAJ_OCCJFEDBAGB_KOPABBNOGFG_OFFSET UNITYSDK_OFFSET(0xBB748F0)
#define FOHBHENLLAJ_OCCJFEDBAGB__CTOR_OFFSET UNITYSDK_OFFSET(0xBB748E0)

inline static constexpr unsigned int FOHBHENLLAJ_OCCJFEDBAGB_TypeDefinitionIndex = 59691;

class FOHBHENLLAJ_OCCJFEDBAGB : public ::System::Object
{
public:
	::System::Action* POCANNAFFOA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHBHENLLAJ_OCCJFEDBAGB__CTOR_OFFSET))(this);
	}

	::System::Void KOPABBNOGFG(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FOHBHENLLAJ_OCCJFEDBAGB_KOPABBNOGFG_OFFSET))(this, PIIPCLCCOIG);
	}
};
