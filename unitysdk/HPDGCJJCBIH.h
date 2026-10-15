#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDKNHKCLPIC;

#define HPDGCJJCBIH_CTOR_OFFSET UNITYSDK_OFFSET(0x15DB5A50)

inline static constexpr unsigned int HPDGCJJCBIH_TypeDefinitionIndex = 63924;

	class HPDGCJJCBIH : public ::System::Object
	{
	public:
		::BDKNHKCLPIC* EMNPNGMDDHP; // 0x10
		::BDKNHKCLPIC* KJEIFIDKANK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPDGCJJCBIH_CTOR_OFFSET))(this);
		}

	};
