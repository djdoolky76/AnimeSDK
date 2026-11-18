#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABLJDBEJNNI.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class ColliderEventDispatcher; }

#define KPACKGEBECC_PCOPMKKBHBB_KJDKILFBKAF_CGHNMFMFNPP_OFFSET UNITYSDK_OFFSET(0x1A2E00D0)
#define KPACKGEBECC_PCOPMKKBHBB_KJDKILFBKAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2E00C0)

inline static constexpr unsigned int KPACKGEBECC_PCOPMKKBHBB_KJDKILFBKAF_TypeDefinitionIndex = 51124;

class KPACKGEBECC_PCOPMKKBHBB_KJDKILFBKAF : public ::System::Object
{
public:
	::ABLJDBEJNNI CCPCOIEDNEE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_PCOPMKKBHBB_KJDKILFBKAF__CTOR_OFFSET))(this);
	}

	::System::Void CGHNMFMFNPP(::MoleMole::Battle::ColliderEventDispatcher* ICILGJFKNDB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ColliderEventDispatcher*))((::PBYTE)hIl2Cpp + KPACKGEBECC_PCOPMKKBHBB_KJDKILFBKAF_CGHNMFMFNPP_OFFSET))(this, ICILGJFKNDB);
	}
};
