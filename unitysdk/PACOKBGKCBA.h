#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define PACOKBGKCBA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2BE490)

inline static constexpr unsigned int PACOKBGKCBA_TypeDefinitionIndex = 24990;

	class PACOKBGKCBA : public ::System::Attribute
	{
	public:
		::System::Boolean KOINDGMMIAP; // 0x10
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PACOKBGKCBA_CTOR_OFFSET))(this, a1);
		}

	};
