#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLJAOGKDNFD.h"

#define IHNMBEJMDKM_CTOR_OFFSET UNITYSDK_OFFSET(0x173DDCA0)

inline static constexpr unsigned int IHNMBEJMDKM_TypeDefinitionIndex = 75676;

	class IHNMBEJMDKM : public ::LLJAOGKDNFD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHNMBEJMDKM_CTOR_OFFSET))(this);
		}

	};
