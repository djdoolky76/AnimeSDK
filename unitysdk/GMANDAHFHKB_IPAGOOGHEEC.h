#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GMANDAHFHKB_IPAGOOGHEEC_OPHOHEPAHEJ_OFFSET UNITYSDK_OFFSET(0x15F2D8E0)
#define GMANDAHFHKB_IPAGOOGHEEC__CTOR_OFFSET UNITYSDK_OFFSET(0x15F2BA10)

inline static constexpr unsigned int GMANDAHFHKB_IPAGOOGHEEC_TypeDefinitionIndex = 48981;

class GMANDAHFHKB_IPAGOOGHEEC : public ::System::Object
{
public:
	::System::Int32 CJDFPHLJNBP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMANDAHFHKB_IPAGOOGHEEC__CTOR_OFFSET))(this);
	}

	::System::Void OPHOHEPAHEJ(::System::Boolean EBFCACIEKBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GMANDAHFHKB_IPAGOOGHEEC_OPHOHEPAHEJ_OFFSET))(this, EBFCACIEKBC);
	}
};
