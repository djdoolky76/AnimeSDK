#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define BMBKJMIJLMM_CTOR_OFFSET UNITYSDK_OFFSET(0x18B658B0)

inline static constexpr unsigned int BMBKJMIJLMM_TypeDefinitionIndex = 79831;

	class BMBKJMIJLMM : public ::System::Object
	{
	public:
		::System::String* DBANGJLAGFP; // 0x10
		::System::UInt32 MIOBMOCCOHF; // 0x18
		::System::UInt32 BGJMONEGGGO; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBKJMIJLMM_CTOR_OFFSET))(this);
		}

	};
