#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"

#define PGIAGKHDMHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9E8F10)

inline static constexpr unsigned int PGIAGKHDMHB_TypeDefinitionIndex = 42246;

	class PGIAGKHDMHB : public ::System::Object
	{
	public:
		::System::ValueTuple LBMFPCIBMAC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIAGKHDMHB_CTOR_OFFSET))(this);
		}

	};
