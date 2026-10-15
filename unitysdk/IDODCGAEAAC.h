#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIKOGDBPCLO.h"
class IDPIIKPHFJP;

#define IDODCGAEAAC_CAGIAMEFOLL_OFFSET UNITYSDK_OFFSET(0x15EDFEF0)
#define IDODCGAEAAC_CTOR_OFFSET UNITYSDK_OFFSET(0x15EE0260)
#define IDODCGAEAAC_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x15EDFD40)

inline static constexpr unsigned int IDODCGAEAAC_TypeDefinitionIndex = 77772;

	class IDODCGAEAAC : public ::GIKOGDBPCLO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDODCGAEAAC_CTOR_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::IDPIIKPHFJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDPIIKPHFJP*))((::PBYTE)hIl2Cpp + IDODCGAEAAC_FFKBFPKEPEN_OFFSET))(this, a1);
		}

		::System::Void CAGIAMEFOLL(::IDPIIKPHFJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDPIIKPHFJP*))((::PBYTE)hIl2Cpp + IDODCGAEAAC_CAGIAMEFOLL_OFFSET))(this, a1);
		}

	};
