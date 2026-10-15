#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ODFMHLICBNC_CTOR_OFFSET UNITYSDK_OFFSET(0xBD8B040)
#define ODFMHLICBNC_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xBD8AF70)

inline static constexpr unsigned int ODFMHLICBNC_TypeDefinitionIndex = 62447;

	class ODFMHLICBNC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODFMHLICBNC_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODFMHLICBNC_JJNFOPNOPBF_OFFSET))(this);
		}

	};
