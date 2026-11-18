#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAPINBBMLDJ.h"
#include "unitysdk/System/Object.h"

class AMODCFDGAKB;
class HGAJKHIMKJP;

#define DEDDPKGLKHI_AFGHKFCHJDC_IOKOCCILIDG_OFFSET UNITYSDK_OFFSET(0x12068570)
#define DEDDPKGLKHI_AFGHKFCHJDC__CTOR_OFFSET UNITYSDK_OFFSET(0x12068560)

inline static constexpr unsigned int DEDDPKGLKHI_AFGHKFCHJDC_TypeDefinitionIndex = 78350;

class DEDDPKGLKHI_AFGHKFCHJDC : public ::System::Object
{
public:
	::KAPINBBMLDJ AJCAINELJLK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDDPKGLKHI_AFGHKFCHJDC__CTOR_OFFSET))(this);
	}

	::HGAJKHIMKJP* IOKOCCILIDG(::AMODCFDGAKB* IPMMCGDMODG)
	{
		return ((::HGAJKHIMKJP*(*)(::PVOID, ::AMODCFDGAKB*))((::PBYTE)hIl2Cpp + DEDDPKGLKHI_AFGHKFCHJDC_IOKOCCILIDG_OFFSET))(this, IPMMCGDMODG);
	}
};
