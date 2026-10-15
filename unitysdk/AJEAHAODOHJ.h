#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AJEAHAODOHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x12CB4D80)

inline static constexpr unsigned int AJEAHAODOHJ_TypeDefinitionIndex = 62032;

	class AJEAHAODOHJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJEAHAODOHJ_CTOR_OFFSET))(this);
		}

	};
