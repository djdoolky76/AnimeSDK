#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDIMIJBHBPB.h"
#include "unitysdk/System/Object.h"

#define EPPDPBEBKBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA62FF0)

inline static constexpr unsigned int EPPDPBEBKBO_TypeDefinitionIndex = 42292;

	class EPPDPBEBKBO : public ::System::Object
	{
	public:
		::LDIMIJBHBPB MNDFOPKBHKP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPPDPBEBKBO_CTOR_OFFSET))(this);
		}

	};
