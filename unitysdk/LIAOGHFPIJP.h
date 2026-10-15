#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJIGMBHENE.h"

#define LIAOGHFPIJP_BALFMCIKMMP_OFFSET UNITYSDK_OFFSET(0xB6C2010)
#define LIAOGHFPIJP_CTOR_OFFSET UNITYSDK_OFFSET(0xB6C1FB0)
#define LIAOGHFPIJP_LLGBOKAFNNL_OFFSET UNITYSDK_OFFSET(0xB6C1FD0)

inline static constexpr unsigned int LIAOGHFPIJP_TypeDefinitionIndex = 61194;

	class LIAOGHFPIJP : public ::HDJIGMBHENE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIAOGHFPIJP_CTOR_OFFSET))(this);
		}

		::System::Boolean LLGBOKAFNNL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIAOGHFPIJP_LLGBOKAFNNL_OFFSET))(this);
		}

		::System::Boolean BALFMCIKMMP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIAOGHFPIJP_BALFMCIKMMP_OFFSET))(this);
		}

	};
