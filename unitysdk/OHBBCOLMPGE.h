#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OHBBCOLMPGE_CTOR_OFFSET UNITYSDK_OFFSET(0xBE5ED50)

inline static constexpr unsigned int OHBBCOLMPGE_TypeDefinitionIndex = 59673;

	class OHBBCOLMPGE : public ::System::Object
	{
	public:
		// static const ::System::String* EIGMKOJOEEI; // 0x0
		// static const ::System::String* KCHHDIHOEMC; // 0x0
		// static const ::System::String* EHEKLLLOPDG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHBBCOLMPGE_CTOR_OFFSET))(this);
		}

	};
