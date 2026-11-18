#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class EffectPatternInfoBatchLoad; }
namespace System { class Action; }

#define AANOMDNBAHD_LLDAEBPHBED_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x1349EE90)
#define AANOMDNBAHD_LLDAEBPHBED__CTOR_OFFSET UNITYSDK_OFFSET(0x1349E060)

inline static constexpr unsigned int AANOMDNBAHD_LLDAEBPHBED_TypeDefinitionIndex = 67889;

class AANOMDNBAHD_LLDAEBPHBED : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Boolean EBAJLMBGMFE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANOMDNBAHD_LLDAEBPHBED__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::EffectPatternInfoBatchLoad* MEGKEHLBLJH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EffectPatternInfoBatchLoad*))((::PBYTE)hIl2Cpp + AANOMDNBAHD_LLDAEBPHBED_OKKMJKOAIKG_OFFSET))(this, MEGKEHLBLJH);
	}
};
