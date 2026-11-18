#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class HollowEntityLayerMaskConfig; }
namespace System { class Action; }

#define PAKKGEGKKHG_ODNAHGODFLG_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x1A7DF170)
#define PAKKGEGKKHG_ODNAHGODFLG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7DF160)

inline static constexpr unsigned int PAKKGEGKKHG_ODNAHGODFLG_TypeDefinitionIndex = 47135;

class PAKKGEGKKHG_ODNAHGODFLG : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAKKGEGKKHG_ODNAHGODFLG__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::HollowEntityLayerMaskConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowEntityLayerMaskConfig*))((::PBYTE)hIl2Cpp + PAKKGEGKKHG_ODNAHGODFLG_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
