#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EGMJAPMDEIH;

#define EGMJAPMDEIH_OHOPEBKEMDN_EEDDOENAGON_OFFSET UNITYSDK_OFFSET(0xFE07960)
#define EGMJAPMDEIH_OHOPEBKEMDN__CTOR_OFFSET UNITYSDK_OFFSET(0xFDED870)

inline static constexpr unsigned int EGMJAPMDEIH_OHOPEBKEMDN_TypeDefinitionIndex = 49031;

class EGMJAPMDEIH_OHOPEBKEMDN : public ::System::Object
{
public:
	::EGMJAPMDEIH* KLHPEBKNIFB; // 0x10
	::System::Boolean PMKOFKBFLLN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMJAPMDEIH_OHOPEBKEMDN__CTOR_OFFSET))(this);
	}

	::System::Int32 EEDDOENAGON(::System::Int32 DPGFPHIMDEL, ::System::Int32 DLJPLHKELCO)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EGMJAPMDEIH_OHOPEBKEMDN_EEDDOENAGON_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
	}
};
