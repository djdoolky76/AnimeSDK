#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPMIMKCKGME;

#define LOHOPLFNNDA_CTOR_OFFSET UNITYSDK_OFFSET(0xC064A00)
#define LOHOPLFNNDA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC0649B0)

inline static constexpr unsigned int LOHOPLFNNDA_TypeDefinitionIndex = 73751;

	class LOHOPLFNNDA : public ::System::Object
	{
	public:
		::PPMIMKCKGME* HHJHPOOIJIP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHOPLFNNDA_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHOPLFNNDA_DISPOSE_OFFSET))(this);
		}

	};
