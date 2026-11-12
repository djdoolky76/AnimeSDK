#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PMMIGNNAIJB.h"
class AIMNKMEFBKE;
class GGDIMKDOIGA;

#define FCCNCMDECJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D793040)
#define FCCNCMDECJC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D793050)

inline static constexpr unsigned int FCCNCMDECJC_TypeDefinitionIndex = 37394;

	class FCCNCMDECJC : public ::PMMIGNNAIJB
	{
	public:
		::GGDIMKDOIGA* CCPHCIBGFJB; // 0x18
		::AIMNKMEFBKE* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::GGDIMKDOIGA* a1, ::AIMNKMEFBKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GGDIMKDOIGA*, ::AIMNKMEFBKE*))((::PBYTE)hIl2Cpp + FCCNCMDECJC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCCNCMDECJC_INITIALIZE_OFFSET))(this);
		}

	};
