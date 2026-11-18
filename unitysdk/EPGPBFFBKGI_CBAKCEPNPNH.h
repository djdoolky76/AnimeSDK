#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EPGPBFFBKGI_IBHKHLBGHDA.h"

namespace MoleMole { class MonoCurveMoveObjectRopeHandler; }
namespace RootMotion::FinalIK { class FABRIK; }

#define EPGPBFFBKGI_CBAKCEPNPNH_KJOOJCNEJFL_OFFSET UNITYSDK_OFFSET(0x6BF300)
#define EPGPBFFBKGI_CBAKCEPNPNH_PNNJKJEOHAL_OFFSET UNITYSDK_OFFSET(0x6BF310)

inline static constexpr unsigned int EPGPBFFBKGI_CBAKCEPNPNH_TypeDefinitionIndex = 52546;

struct alignas(8) EPGPBFFBKGI_CBAKCEPNPNH
{
	::MoleMole::MonoCurveMoveObjectRopeHandler* LMOPFHJIBKH; // 0x10
	::RootMotion::FinalIK::FABRIK* GLGKIDCCBDF; // 0x18

	::System::Void KJOOJCNEJFL(::EPGPBFFBKGI_IBHKHLBGHDA& HODAIDNDKHD)
	{
		return ((::System::Void(*)(::PVOID, ::EPGPBFFBKGI_IBHKHLBGHDA&))((::PBYTE)hIl2Cpp + EPGPBFFBKGI_CBAKCEPNPNH_KJOOJCNEJFL_OFFSET))(this, HODAIDNDKHD);
	}

	::System::Boolean PNNJKJEOHAL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPGPBFFBKGI_CBAKCEPNPNH_PNNJKJEOHAL_OFFSET))(this);
	}
};
