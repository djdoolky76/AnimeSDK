#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGFLBFIKKJG.h"
class HGFLBFIKKJG;

#define NJNOACFPKFG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC50AB90)
#define NJNOACFPKFG_CTOR_OFFSET UNITYSDK_OFFSET(0xC50ABF0)

inline static constexpr unsigned int NJNOACFPKFG_TypeDefinitionIndex = 75639;

	class NJNOACFPKFG : public ::HGFLBFIKKJG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNOACFPKFG_CTOR_OFFSET))(this);
		}

		static ::HGFLBFIKKJG* BPLPBPMEODA(::System::Single a1)
		{
			return ((::HGFLBFIKKJG*(*)(::System::Single))((::PBYTE)hIl2Cpp + NJNOACFPKFG_BPLPBPMEODA_OFFSET))(a1);
		}

	};
