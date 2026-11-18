#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOLNCCBKMJD.h"

class IIKNLDKMGGB;

#define FJFKHNMLGGE_NAIFLDEIPIN_OFFSET UNITYSDK_OFFSET(0x13221090)
#define FJFKHNMLGGE_OABMBBANMCM_OFFSET UNITYSDK_OFFSET(0x13220FD0)
#define FJFKHNMLGGE__CTOR_OFFSET UNITYSDK_OFFSET(0x13220FC0)

inline static constexpr unsigned int FJFKHNMLGGE_TypeDefinitionIndex = 75000;

class FJFKHNMLGGE : public ::NOLNCCBKMJD
{
public:
	::System::Void _ctor(::System::Int32 AICAJMMLFPH, ::IIKNLDKMGGB* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::IIKNLDKMGGB*))((::PBYTE)hIl2Cpp + FJFKHNMLGGE__CTOR_OFFSET))(this, AICAJMMLFPH, AMNIHACKELI);
	}

	::System::Void OABMBBANMCM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFKHNMLGGE_OABMBBANMCM_OFFSET))(this);
	}

	::System::Void NAIFLDEIPIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFKHNMLGGE_NAIFLDEIPIN_OFFSET))(this);
	}
};
