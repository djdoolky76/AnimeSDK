#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class GamifiedPropConfig; }
namespace System { class Action; }

#define CNLPHAKMBCB_AEHELNNAPLO_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x14978E80)
#define CNLPHAKMBCB_AEHELNNAPLO__CTOR_OFFSET UNITYSDK_OFFSET(0x14978E70)

inline static constexpr unsigned int CNLPHAKMBCB_AEHELNNAPLO_TypeDefinitionIndex = 47560;

class CNLPHAKMBCB_AEHELNNAPLO : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLPHAKMBCB_AEHELNNAPLO__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::GamifiedPropConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::GamifiedPropConfig*))((::PBYTE)hIl2Cpp + CNLPHAKMBCB_AEHELNNAPLO_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
