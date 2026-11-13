#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHODJENKHNE.h"

#define EDJODCPPMHN_CTOR_OFFSET UNITYSDK_OFFSET(0x186C94D0)

inline static constexpr unsigned int EDJODCPPMHN_TypeDefinitionIndex = 75241;

	class EDJODCPPMHN : public ::GHODJENKHNE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJODCPPMHN_CTOR_OFFSET))(this);
		}

	};
