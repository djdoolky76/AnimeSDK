#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PHOKAOMINMC_CTOR_OFFSET UNITYSDK_OFFSET(0xCB7E9B0)

inline static constexpr unsigned int PHOKAOMINMC_TypeDefinitionIndex = 61252;

	class PHOKAOMINMC : public ::System::Object
	{
	public:
		// static const ::System::Object JECLGPFLAAO; // 0x0
		// static const ::System::Object LKGOIJKEKDG; // 0x0
		// static const ::System::Object IIACHONPOIL; // 0x0
		// static const ::System::Object DPOCPMIBHEM; // 0x0
		// static const ::System::Object BHBNLOJMAMK; // 0x0
		// static const ::System::Object DOGIINBOJEM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHOKAOMINMC_CTOR_OFFSET))(this);
		}

	};
