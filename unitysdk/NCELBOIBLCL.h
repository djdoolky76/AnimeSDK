#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NCELBOIBLCL_CTOR_OFFSET UNITYSDK_OFFSET(0xBB0AF70)

inline static constexpr unsigned int NCELBOIBLCL_TypeDefinitionIndex = 69433;

	class NCELBOIBLCL : public ::System::Object
	{
	public:
		::System::Boolean MCGOLHLEGIC; // 0x10
		::System::Boolean HDMOHJJCGHF; // 0x11
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCELBOIBLCL_CTOR_OFFSET))(this);
		}

	};
