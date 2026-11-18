#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class EffectLODDataConfig; }
namespace System { class Action; }

#define ILINBLAKDNL_HBJMEBKOCCP_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x13AAAB30)
#define ILINBLAKDNL_HBJMEBKOCCP__CTOR_OFFSET UNITYSDK_OFFSET(0x13AAAB20)

inline static constexpr unsigned int ILINBLAKDNL_HBJMEBKOCCP_TypeDefinitionIndex = 60291;

class ILINBLAKDNL_HBJMEBKOCCP : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILINBLAKDNL_HBJMEBKOCCP__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::EffectLODDataConfig* NGLKIKLLLFL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EffectLODDataConfig*))((::PBYTE)hIl2Cpp + ILINBLAKDNL_HBJMEBKOCCP_OKKMJKOAIKG_OFFSET))(this, NGLKIKLLLFL);
	}
};
