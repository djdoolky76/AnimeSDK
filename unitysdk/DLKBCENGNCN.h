#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DLKBCENGNCN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA00400)

inline static constexpr unsigned int DLKBCENGNCN_TypeDefinitionIndex = 42152;

	class DLKBCENGNCN : public ::System::Object
	{
	public:
		::System::UInt32 PHFMCACHFIJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLKBCENGNCN_CTOR_OFFSET))(this);
		}

	};
