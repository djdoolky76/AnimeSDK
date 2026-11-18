#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBubbleTips; }
namespace System { class EventArgs; }

#define IFOKBBHAHIE_NPCIOMJFDLI_ILLGOHOPGMM_OFFSET UNITYSDK_OFFSET(0x13A985D0)
#define IFOKBBHAHIE_NPCIOMJFDLI__CTOR_OFFSET UNITYSDK_OFFSET(0x13A985C0)

inline static constexpr unsigned int IFOKBBHAHIE_NPCIOMJFDLI_TypeDefinitionIndex = 67434;

class IFOKBBHAHIE_NPCIOMJFDLI : public ::System::Object
{
public:
	::MoleMole::UIBubbleTips* HMDKKCKDOFP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_NPCIOMJFDLI__CTOR_OFFSET))(this);
	}

	::System::Void ILLGOHOPGMM(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_NPCIOMJFDLI_ILLGOHOPGMM_OFFSET))(this, KOIBHLHLMFC);
	}
};
