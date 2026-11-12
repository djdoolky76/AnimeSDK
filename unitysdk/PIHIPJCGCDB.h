#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PIHIPJCGCDB_CTOR_OFFSET UNITYSDK_OFFSET(0xCB8A450)

inline static constexpr unsigned int PIHIPJCGCDB_TypeDefinitionIndex = 75490;

	class PIHIPJCGCDB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHIPJCGCDB_CTOR_OFFSET))(this);
		}

	};
