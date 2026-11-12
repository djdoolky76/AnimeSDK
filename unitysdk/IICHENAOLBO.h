#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IAJLELNJPEA.h"

#define IICHENAOLBO_CTOR_OFFSET UNITYSDK_OFFSET(0x173EFFB0)
#define IICHENAOLBO_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x173EFFC0)

inline static constexpr unsigned int IICHENAOLBO_TypeDefinitionIndex = 77175;

	class IICHENAOLBO : public ::IAJLELNJPEA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IICHENAOLBO_CTOR_OFFSET))(this);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IICHENAOLBO_KFGJEKJHIMB_OFFSET))(this);
		}

	};
