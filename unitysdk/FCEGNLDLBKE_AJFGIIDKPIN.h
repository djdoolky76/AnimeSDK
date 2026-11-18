#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LAAEPKNJKHA;
namespace System { class Action; }

#define FCEGNLDLBKE_AJFGIIDKPIN_MIKKHGJMLAM_OFFSET UNITYSDK_OFFSET(0x11ABE8A0)
#define FCEGNLDLBKE_AJFGIIDKPIN__CTOR_OFFSET UNITYSDK_OFFSET(0x11ABE890)

inline static constexpr unsigned int FCEGNLDLBKE_AJFGIIDKPIN_TypeDefinitionIndex = 43862;

class FCEGNLDLBKE_AJFGIIDKPIN : public ::System::Object
{
public:
	::LAAEPKNJKHA* EJPKBPLGOFH; // 0x10
	::System::Action* KCNAHGEIAPN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEGNLDLBKE_AJFGIIDKPIN__CTOR_OFFSET))(this);
	}

	::System::Void MIKKHGJMLAM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEGNLDLBKE_AJFGIIDKPIN_MIKKHGJMLAM_OFFSET))(this);
	}
};
