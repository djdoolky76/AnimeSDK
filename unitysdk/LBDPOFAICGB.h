#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LBDPOFAICGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D638370)

inline static constexpr unsigned int LBDPOFAICGB_TypeDefinitionIndex = 43121;

	class LBDPOFAICGB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDPOFAICGB_CTOR_OFFSET))(this);
		}

	};
