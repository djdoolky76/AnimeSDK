#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MLFHPHBDOEE_CTOR_OFFSET UNITYSDK_OFFSET(0xB9A78E0)

inline static constexpr unsigned int MLFHPHBDOEE_TypeDefinitionIndex = 81264;

	class MLFHPHBDOEE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFHPHBDOEE_CTOR_OFFSET))(this);
		}

	};
