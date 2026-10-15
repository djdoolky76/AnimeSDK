#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FBPGHCAMICJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA662E0)

inline static constexpr unsigned int FBPGHCAMICJ_TypeDefinitionIndex = 43257;

	class FBPGHCAMICJ : public ::System::Object
	{
	public:
		::System::Int32 AICHLMDJLGL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPGHCAMICJ_CTOR_OFFSET))(this);
		}

	};
