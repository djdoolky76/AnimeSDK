#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTimelineCamera; }
namespace System { class Action; }

#define ENONMPMFMBP_APKOMOBDPMB_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0xBB26DB0)
#define ENONMPMFMBP_APKOMOBDPMB__CTOR_OFFSET UNITYSDK_OFFSET(0xBB26DA0)

inline static constexpr unsigned int ENONMPMFMBP_APKOMOBDPMB_TypeDefinitionIndex = 67672;

class ENONMPMFMBP_APKOMOBDPMB : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENONMPMFMBP_APKOMOBDPMB__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::ConfigTimelineCamera* GKJIDKDGIAO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigTimelineCamera*))((::PBYTE)hIl2Cpp + ENONMPMFMBP_APKOMOBDPMB_OKKMJKOAIKG_OFFSET))(this, GKJIDKDGIAO);
	}
};
