#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MMIBFBCCCAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C264960)

inline static constexpr unsigned int MMIBFBCCCAD_TypeDefinitionIndex = 44765;

	class MMIBFBCCCAD : public ::System::Object
	{
	public:
		::System::Int32 ICJBEEBJMPN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIBFBCCCAD_CTOR_OFFSET))(this);
		}

	};
