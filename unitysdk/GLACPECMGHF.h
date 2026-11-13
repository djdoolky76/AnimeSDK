#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define GLACPECMGHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA898C0)

inline static constexpr unsigned int GLACPECMGHF_TypeDefinitionIndex = 44724;

	class GLACPECMGHF : public ::System::Object
	{
	public:
		::System::UInt32 KHNINHBIKLE; // 0x10
		::System::Boolean KKNJMPMIDPD; // 0x14
		::System::Byte _padding0[0x3];
		::System::Int32 JFLMDBHNLOK; // 0x18
		::UnityEngine::Vector2 DCPCCPICEKC; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLACPECMGHF_CTOR_OFFSET))(this);
		}

	};
