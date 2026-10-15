#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGFLBFIKKJG.h"
class HGFLBFIKKJG;

#define NJNOACFPKFG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBC20E60)
#define NJNOACFPKFG_CTOR_OFFSET UNITYSDK_OFFSET(0xBC20EC0)

inline static constexpr unsigned int NJNOACFPKFG_TypeDefinitionIndex = 73515;

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
