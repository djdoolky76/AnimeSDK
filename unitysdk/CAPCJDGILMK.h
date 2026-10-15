#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CAPCJDGILMK_CTOR_OFFSET UNITYSDK_OFFSET(0xC49A070)
#define CAPCJDGILMK_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xC499FD0)

inline static constexpr unsigned int CAPCJDGILMK_TypeDefinitionIndex = 62458;

	class CAPCJDGILMK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPCJDGILMK_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPCJDGILMK_JJNFOPNOPBF_OFFSET))(this);
		}

	};
