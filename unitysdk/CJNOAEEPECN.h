#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define CJNOAEEPECN_CTOR_OFFSET UNITYSDK_OFFSET(0xD750ED0)

inline static constexpr unsigned int CJNOAEEPECN_TypeDefinitionIndex = 61136;

	class CJNOAEEPECN : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNOAEEPECN_CTOR_OFFSET))(this);
		}

	};
