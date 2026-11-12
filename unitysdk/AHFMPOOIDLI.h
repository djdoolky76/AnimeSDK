#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define AHFMPOOIDLI_CTOR_OFFSET UNITYSDK_OFFSET(0xF13FCE0)

inline static constexpr unsigned int AHFMPOOIDLI_TypeDefinitionIndex = 62655;

	class AHFMPOOIDLI : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFMPOOIDLI_CTOR_OFFSET))(this);
		}

	};
