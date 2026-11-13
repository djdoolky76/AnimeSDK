#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class LPHINGPIEAJ;

#define EDOCHKOMNBP_CTOR_OFFSET UNITYSDK_OFFSET(0x186D1FA0)
#define EDOCHKOMNBP_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x186D1FB0)

inline static constexpr unsigned int EDOCHKOMNBP_TypeDefinitionIndex = 79780;

	class EDOCHKOMNBP : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::System::Void _ctor(::HLJNBBHKKMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + EDOCHKOMNBP_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean HKKFFCBJOKM(::LPHINGPIEAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + EDOCHKOMNBP_HKKFFCBJOKM_OFFSET))(this, a1);
		}

	};
