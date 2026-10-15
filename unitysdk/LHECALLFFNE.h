#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LHECALLFFNE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8E0910)

inline static constexpr unsigned int LHECALLFFNE_TypeDefinitionIndex = 42261;

	class LHECALLFFNE : public ::System::Object
	{
	public:
		::System::UInt32 MEAGHOHJBHM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHECALLFFNE_CTOR_OFFSET))(this);
		}

	};
