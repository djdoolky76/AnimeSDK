#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NAGAOPOFKDI_CTOR_OFFSET UNITYSDK_OFFSET(0xBA99A00)

inline static constexpr unsigned int NAGAOPOFKDI_TypeDefinitionIndex = 55853;

	class NAGAOPOFKDI : public ::System::Object
	{
	public:
		::System::Single NNNAGHMNFKB; // 0x10
		::System::Single PCNFJJGHKIC; // 0x14
		::System::Int32 IABHBDNPEDC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGAOPOFKDI_CTOR_OFFSET))(this);
		}

	};
