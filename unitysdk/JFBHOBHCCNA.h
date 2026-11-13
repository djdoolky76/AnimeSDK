#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JFBHOBHCCNA_CTOR_OFFSET UNITYSDK_OFFSET(0x19328610)

inline static constexpr unsigned int JFBHOBHCCNA_TypeDefinitionIndex = 80167;

	class JFBHOBHCCNA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBHOBHCCNA_CTOR_OFFSET))(this);
		}

	};
