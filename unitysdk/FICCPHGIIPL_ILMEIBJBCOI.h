#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DJKHNKJFMJO;

#define FICCPHGIIPL_ILMEIBJBCOI_LAKMLNHMIPO_OFFSET UNITYSDK_OFFSET(0x10F6D670)
#define FICCPHGIIPL_ILMEIBJBCOI__CTOR_OFFSET UNITYSDK_OFFSET(0x10F6D660)

inline static constexpr unsigned int FICCPHGIIPL_ILMEIBJBCOI_TypeDefinitionIndex = 48227;

class FICCPHGIIPL_ILMEIBJBCOI : public ::System::Object
{
public:
	::System::Int32 PEFOKJFBBJM; // 0x10
	::System::Int32 NCJOBPNGBLB; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FICCPHGIIPL_ILMEIBJBCOI__CTOR_OFFSET))(this);
	}

	::System::Void LAKMLNHMIPO(::DJKHNKJFMJO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::DJKHNKJFMJO*))((::PBYTE)hIl2Cpp + FICCPHGIIPL_ILMEIBJBCOI_LAKMLNHMIPO_OFFSET))(this, PIIPCLCCOIG);
	}
};
