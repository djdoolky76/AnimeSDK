#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class VNoiseSettings; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define PKOEPBCCMAB_COKPNGFDECP_NLEAOJHJEJP_OFFSET UNITYSDK_OFFSET(0x14BACEE0)
#define PKOEPBCCMAB_COKPNGFDECP__CTOR_OFFSET UNITYSDK_OFFSET(0x14BACED0)

inline static constexpr unsigned int PKOEPBCCMAB_COKPNGFDECP_TypeDefinitionIndex = 88356;

class PKOEPBCCMAB_COKPNGFDECP : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Cameras::VNoiseSettings*>* AMHGBGMOMLL; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOEPBCCMAB_COKPNGFDECP__CTOR_OFFSET))(this);
	}

	::System::Void NLEAOJHJEJP(::MoleMole::Cameras::VNoiseSettings* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::VNoiseSettings*))((::PBYTE)hIl2Cpp + PKOEPBCCMAB_COKPNGFDECP_NLEAOJHJEJP_OFFSET))(this, DFMKILICPFB);
	}
};
