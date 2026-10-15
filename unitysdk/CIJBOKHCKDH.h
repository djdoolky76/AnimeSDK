#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CIJBOKHCKDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8B66F0)

inline static constexpr unsigned int CIJBOKHCKDH_TypeDefinitionIndex = 42953;

	class CIJBOKHCKDH : public ::System::Object
	{
	public:
		::System::Int32 FAIMIKCMFJM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIJBOKHCKDH_CTOR_OFFSET))(this);
		}

	};
