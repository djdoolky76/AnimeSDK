#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KOPLGEFDECB;

#define KOPLGEFDECB_IJFKCNEABBL_PCHNBOKODIF_OFFSET UNITYSDK_OFFSET(0x1522D520)
#define KOPLGEFDECB_IJFKCNEABBL__CTOR_OFFSET UNITYSDK_OFFSET(0x1522D510)

inline static constexpr unsigned int KOPLGEFDECB_IJFKCNEABBL_TypeDefinitionIndex = 80618;

class KOPLGEFDECB_IJFKCNEABBL : public ::System::Object
{
public:
	::KOPLGEFDECB* KLHPEBKNIFB; // 0x10
	::System::UInt32 FLBPNCMEANJ; // 0x18
	::System::UInt32 MMLCIDGBLEF; // 0x1C
	::System::Boolean DJCNCELJPOM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOPLGEFDECB_IJFKCNEABBL__CTOR_OFFSET))(this);
	}

	::System::Void PCHNBOKODIF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOPLGEFDECB_IJFKCNEABBL_PCHNBOKODIF_OFFSET))(this);
	}
};
