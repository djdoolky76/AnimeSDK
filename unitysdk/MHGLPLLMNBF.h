#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MHGLPLLMNBF_CTOR_OFFSET UNITYSDK_OFFSET(0xC1E9650)
#define MHGLPLLMNBF_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xC1E9540)

inline static constexpr unsigned int MHGLPLLMNBF_TypeDefinitionIndex = 63863;

	class MHGLPLLMNBF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGLPLLMNBF_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGLPLLMNBF_JJNFOPNOPBF_OFFSET))(this);
		}

	};
