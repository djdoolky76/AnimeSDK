#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LMCPKMHMLFA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9109D0)

inline static constexpr unsigned int LMCPKMHMLFA_TypeDefinitionIndex = 42161;

	class LMCPKMHMLFA : public ::System::Object
	{
	public:
		::System::UInt16 ABJOBBCPKLD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCPKMHMLFA_CTOR_OFFSET))(this);
		}

	};
