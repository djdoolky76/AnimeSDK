#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NAGAOPOFKDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1BAECC20)

inline static constexpr unsigned int NAGAOPOFKDI_TypeDefinitionIndex = 57056;

	class NAGAOPOFKDI : public ::System::Object
	{
	public:
		::System::Single PCNFJJGHKIC; // 0x10
		::System::Single NNNAGHMNFKB; // 0x14
		::System::Int32 IABHBDNPEDC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGAOPOFKDI_CTOR_OFFSET))(this);
		}

	};
