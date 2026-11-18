#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define EMDBMCPAIIN_JJIHLIDCLDP_OHNAIGFHBOG_OFFSET UNITYSDK_OFFSET(0x16160680)
#define EMDBMCPAIIN_JJIHLIDCLDP__CTOR_OFFSET UNITYSDK_OFFSET(0x16160670)

inline static constexpr unsigned int EMDBMCPAIIN_JJIHLIDCLDP_TypeDefinitionIndex = 88335;

class EMDBMCPAIIN_JJIHLIDCLDP : public ::System::Object
{
public:
	::System::Action* DMPEOJCCCLO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDBMCPAIIN_JJIHLIDCLDP__CTOR_OFFSET))(this);
	}

	::System::Void OHNAIGFHBOG(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EMDBMCPAIIN_JJIHLIDCLDP_OHNAIGFHBOG_OFFSET))(this, PIIPCLCCOIG);
	}
};
