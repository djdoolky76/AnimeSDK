#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BGLEHLDOFPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2B6920)

inline static constexpr unsigned int BGLEHLDOFPP_TypeDefinitionIndex = 43518;

	class BGLEHLDOFPP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLEHLDOFPP_CTOR_OFFSET))(this);
		}

	};
