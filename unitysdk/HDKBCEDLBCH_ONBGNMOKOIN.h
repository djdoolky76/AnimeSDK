#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DitherConfigSeparate; }
namespace System { class Action; }

#define HDKBCEDLBCH_ONBGNMOKOIN_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x17AEC6F0)
#define HDKBCEDLBCH_ONBGNMOKOIN__CTOR_OFFSET UNITYSDK_OFFSET(0x17AEC6E0)

inline static constexpr unsigned int HDKBCEDLBCH_ONBGNMOKOIN_TypeDefinitionIndex = 77224;

class HDKBCEDLBCH_ONBGNMOKOIN : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKBCEDLBCH_ONBGNMOKOIN__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::DitherConfigSeparate* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::DitherConfigSeparate*))((::PBYTE)hIl2Cpp + HDKBCEDLBCH_ONBGNMOKOIN_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
