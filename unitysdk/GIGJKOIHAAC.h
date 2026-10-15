#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GIGJKOIHAAC_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA7D530)
#define GIGJKOIHAAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA7D610)
#define GIGJKOIHAAC_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CA7D580)
#define GIGJKOIHAAC_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CA7D5C0)

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
