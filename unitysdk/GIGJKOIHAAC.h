#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GIGJKOIHAAC_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CAAB990)
#define GIGJKOIHAAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAABA70)
#define GIGJKOIHAAC_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CAAB9E0)
#define GIGJKOIHAAC_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CAABA20)

inline static constexpr unsigned int GIGJKOIHAAC_TypeDefinitionIndex = 43341;

	class GIGJKOIHAAC : public ::System::Object
	{
	public:
		::System::Int32 GKHAABOKFAD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIGJKOIHAAC_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIGJKOIHAAC_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIGJKOIHAAC_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIGJKOIHAAC_ONRECYCLE_OFFSET))(this);
		}

	};
