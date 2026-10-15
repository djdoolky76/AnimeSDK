#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define PGIAGKHDMHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9BA9A0)

inline static constexpr unsigned int PGIAGKHDMHB_TypeDefinitionIndex = 42246;

	class PGIAGKHDMHB : public ::System::Object
	{
	public:
		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> LBMFPCIBMAC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIAGKHDMHB_CTOR_OFFSET))(this);
		}

	};
