#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENKKLEFNAKG.h"
#include "unitysdk/System/Object.h"

class DJKHNKJFMJO;
class PMGMBGFOFKG;

#define PMGMBGFOFKG_EPAJDKHIDGN_PFCKGGCNDAK_OFFSET UNITYSDK_OFFSET(0x1C1DCAB0)
#define PMGMBGFOFKG_EPAJDKHIDGN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1DCAA0)

inline static constexpr unsigned int PMGMBGFOFKG_EPAJDKHIDGN_TypeDefinitionIndex = 65871;

class PMGMBGFOFKG_EPAJDKHIDGN : public ::System::Object
{
public:
	::PMGMBGFOFKG* KLHPEBKNIFB; // 0x10
	::System::UInt32 EHKHKPLPFGG; // 0x18
	::ENKKLEFNAKG OIKMICDBAPP; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMGMBGFOFKG_EPAJDKHIDGN__CTOR_OFFSET))(this);
	}

	::System::Void PFCKGGCNDAK(::DJKHNKJFMJO* LBDJHIALDLB)
	{
		return ((::System::Void(*)(::PVOID, ::DJKHNKJFMJO*))((::PBYTE)hIl2Cpp + PMGMBGFOFKG_EPAJDKHIDGN_PFCKGGCNDAK_OFFSET))(this, LBDJHIALDLB);
	}
};
