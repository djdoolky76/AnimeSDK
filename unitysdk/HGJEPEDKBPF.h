#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define HGJEPEDKBPF_CTOR_OFFSET UNITYSDK_OFFSET(0x15C97050)

inline static constexpr unsigned int HGJEPEDKBPF_TypeDefinitionIndex = 61266;

	class HGJEPEDKBPF : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJEPEDKBPF_CTOR_OFFSET))(this);
		}

	};
