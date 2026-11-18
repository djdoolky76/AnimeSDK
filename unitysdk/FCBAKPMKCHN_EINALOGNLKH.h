#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UITutorialDialog; }
namespace System { class Action; }

#define FCBAKPMKCHN_EINALOGNLKH_BEAMAHAENLA_OFFSET UNITYSDK_OFFSET(0xBB37500)
#define FCBAKPMKCHN_EINALOGNLKH_CJEPNBDMGDD_OFFSET UNITYSDK_OFFSET(0xBB377B0)
#define FCBAKPMKCHN_EINALOGNLKH_LOMAPIJLIHL_OFFSET UNITYSDK_OFFSET(0xBB37510)
#define FCBAKPMKCHN_EINALOGNLKH__CTOR_OFFSET UNITYSDK_OFFSET(0xBB374F0)

inline static constexpr unsigned int FCBAKPMKCHN_EINALOGNLKH_TypeDefinitionIndex = 58382;

class FCBAKPMKCHN_EINALOGNLKH : public ::System::Object
{
public:
	::System::Action* DOPGGHMOFCK; // 0x10
	::MoleMole::UITutorialDialog* NPOEJOCMLAO; // 0x18
	::System::Int32 AMENMGOBNON; // 0x20
	::System::Int32 FLEEDKLJOHE; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBAKPMKCHN_EINALOGNLKH__CTOR_OFFSET))(this);
	}

	::System::Void BEAMAHAENLA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBAKPMKCHN_EINALOGNLKH_BEAMAHAENLA_OFFSET))(this);
	}

	::System::Void LOMAPIJLIHL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBAKPMKCHN_EINALOGNLKH_LOMAPIJLIHL_OFFSET))(this);
	}

	::System::Void CJEPNBDMGDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBAKPMKCHN_EINALOGNLKH_CJEPNBDMGDD_OFFSET))(this);
	}
};
