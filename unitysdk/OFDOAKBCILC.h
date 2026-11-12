#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define OFDOAKBCILC_CTOR_OFFSET UNITYSDK_OFFSET(0xC6F6610)

inline static constexpr unsigned int OFDOAKBCILC_TypeDefinitionIndex = 62522;

	class OFDOAKBCILC : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDOAKBCILC_CTOR_OFFSET))(this);
		}

	};
