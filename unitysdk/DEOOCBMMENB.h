#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIFHJBBDKDC;
class FACKCCJFLKM;

#define DEOOCBMMENB_CTOR_OFFSET UNITYSDK_OFFSET(0xF181080)
#define DEOOCBMMENB_NABPOPAJGOP_OFFSET UNITYSDK_OFFSET(0xF181010)

inline static constexpr unsigned int DEOOCBMMENB_TypeDefinitionIndex = 63443;

	class DEOOCBMMENB : public ::System::Object
	{
	public:
		::FACKCCJFLKM* AMNKIBBODCM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEOOCBMMENB_CTOR_OFFSET))(this);
		}

		::System::Void NABPOPAJGOP(::AIFHJBBDKDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIFHJBBDKDC*))((::PBYTE)hIl2Cpp + DEOOCBMMENB_NABPOPAJGOP_OFFSET))(this, a1);
		}

	};
