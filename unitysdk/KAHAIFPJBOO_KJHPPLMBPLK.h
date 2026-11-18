#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class NewConfigUICommon; }
namespace System { class Action; }

#define KAHAIFPJBOO_KJHPPLMBPLK_GAMIGLHFJPP_OFFSET UNITYSDK_OFFSET(0x12971220)
#define KAHAIFPJBOO_KJHPPLMBPLK_NKPKHHIBHPA_OFFSET UNITYSDK_OFFSET(0x12970E10)
#define KAHAIFPJBOO_KJHPPLMBPLK__CTOR_OFFSET UNITYSDK_OFFSET(0x12970E00)

inline static constexpr unsigned int KAHAIFPJBOO_KJHPPLMBPLK_TypeDefinitionIndex = 54426;

class KAHAIFPJBOO_KJHPPLMBPLK : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Boolean EBAJLMBGMFE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_KJHPPLMBPLK__CTOR_OFFSET))(this);
	}

	::System::Void NKPKHHIBHPA(::System::Action* DNOGCGJNAGO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_KJHPPLMBPLK_NKPKHHIBHPA_OFFSET))(this, DNOGCGJNAGO);
	}

	::System::Void GAMIGLHFJPP(::MoleMole::NewConfigUICommon* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NewConfigUICommon*))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_KJHPPLMBPLK_GAMIGLHFJPP_OFFSET))(this, DFMKILICPFB);
	}
};
