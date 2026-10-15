#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GEJDLMKEEJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA89440)

inline static constexpr unsigned int GEJDLMKEEJJ_TypeDefinitionIndex = 42356;

	class GEJDLMKEEJJ : public ::System::Object
	{
	public:
		::System::Single IGMFPKIBNGL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJDLMKEEJJ_CTOR_OFFSET))(this);
		}

	};
