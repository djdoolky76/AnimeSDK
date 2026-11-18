#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAKLNFCNOAD.h"
#include "unitysdk/System/ValueType.h"

namespace FluffyUnderware::Curvy { class CurvySplineSegment; }
namespace MoleMole { class MonoAirBusSegment; }

#define OBJDFMNFDLL_MEFIGFDMALA_OFFSET UNITYSDK_OFFSET(0x6EA520)
#define OBJDFMNFDLL_MJIMNNFEKNB_OFFSET UNITYSDK_OFFSET(0x6EA510)

inline static constexpr unsigned int OBJDFMNFDLL_TypeDefinitionIndex = 79787;

struct alignas(8) OBJDFMNFDLL
{
	::FluffyUnderware::Curvy::CurvySplineSegment* LAHLCLEHNMM; // 0x10
	::MoleMole::MonoAirBusSegment* MDDCHCLFIDG; // 0x18
	::System::Int32 BELNJJKMMJP; // 0x20
	::System::Int32 HPNBGBJPEFC; // 0x24
	::System::Int32 LMICGNMOLKL; // 0x28

	::System::Boolean MJIMNNFEKNB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJDFMNFDLL_MJIMNNFEKNB_OFFSET))(this);
	}

	::FAKLNFCNOAD MEFIGFDMALA()
	{
		return ((::FAKLNFCNOAD(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJDFMNFDLL_MEFIGFDMALA_OFFSET))(this);
	}
};
