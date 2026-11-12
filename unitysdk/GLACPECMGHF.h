#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define GLACPECMGHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC755C0)

inline static constexpr unsigned int GLACPECMGHF_TypeDefinitionIndex = 44724;

	class GLACPECMGHF : public ::System::Object
	{
	public:
		::System::Int32 JFLMDBHNLOK; // 0x10
		::UnityEngine::Vector2 DCPCCPICEKC; // 0x14
		::System::UInt32 KHNINHBIKLE; // 0x1C
		::System::Boolean KKNJMPMIDPD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLACPECMGHF_CTOR_OFFSET))(this);
		}

	};
