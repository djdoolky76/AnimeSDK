#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIGJKOIHAAC;

#define FDNAOLMKNIE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA387F0)
#define FDNAOLMKNIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA38850)

inline static constexpr unsigned int FDNAOLMKNIE_TypeDefinitionIndex = 43342;

	class FDNAOLMKNIE : public ::System::Object
	{
	public:
		::GIGJKOIHAAC* CNLHCKELLBE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDNAOLMKNIE_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDNAOLMKNIE_CLEAR_OFFSET))(this);
		}

	};
