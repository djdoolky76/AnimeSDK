#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define OKKFLCJJIJE_CTOR_OFFSET UNITYSDK_OFFSET(0xC7E2990)

inline static constexpr unsigned int OKKFLCJJIJE_TypeDefinitionIndex = 62654;

	class OKKFLCJJIJE : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFLCJJIJE_CTOR_OFFSET))(this);
		}

	};
