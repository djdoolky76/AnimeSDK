#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GFKECOIAHNE_LGDAOCLONFD;

#define GFKECOIAHNE_NHFJOAFCAOG_HFLPLOIDLDL_OFFSET UNITYSDK_OFFSET(0x16CC0AF0)
#define GFKECOIAHNE_NHFJOAFCAOG__CTOR_OFFSET UNITYSDK_OFFSET(0x16CC0AE0)

inline static constexpr unsigned int GFKECOIAHNE_NHFJOAFCAOG_TypeDefinitionIndex = 43240;

class GFKECOIAHNE_NHFJOAFCAOG : public ::System::Object
{
public:
	::GFKECOIAHNE_LGDAOCLONFD* EEMOEMFLABI; // 0x10
	::System::Int32 CKEDPOEIAMH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFKECOIAHNE_NHFJOAFCAOG__CTOR_OFFSET))(this);
	}

	::System::Void HFLPLOIDLDL(::System::Int32 PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GFKECOIAHNE_NHFJOAFCAOG_HFLPLOIDLDL_OFFSET))(this, PIIPCLCCOIG);
	}
};
