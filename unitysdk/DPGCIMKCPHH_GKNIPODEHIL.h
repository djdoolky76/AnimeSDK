#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIMainPageShow; }
namespace System { class Action; }

#define DPGCIMKCPHH_GKNIPODEHIL_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x1545EE50)
#define DPGCIMKCPHH_GKNIPODEHIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1545EE40)

inline static constexpr unsigned int DPGCIMKCPHH_GKNIPODEHIL_TypeDefinitionIndex = 69654;

class DPGCIMKCPHH_GKNIPODEHIL : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGCIMKCPHH_GKNIPODEHIL__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::ConfigUIMainPageShow* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIMainPageShow*))((::PBYTE)hIl2Cpp + DPGCIMKCPHH_GKNIPODEHIL_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
