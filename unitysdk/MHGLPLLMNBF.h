#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MHGLPLLMNBF_CTOR_OFFSET UNITYSDK_OFFSET(0xB935520)
#define MHGLPLLMNBF_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xB935420)

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
