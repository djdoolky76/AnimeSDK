#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPHINGPIEAJ;

#define IMMEOMELDNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD3EEE0)

inline static constexpr unsigned int IMMEOMELDNC_TypeDefinitionIndex = 44775;

	class IMMEOMELDNC : public ::System::Object
	{
	public:
		::LPHINGPIEAJ* DMJEOECEBKE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMEOMELDNC_CTOR_OFFSET))(this);
		}

	};
