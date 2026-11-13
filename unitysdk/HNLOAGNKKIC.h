#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HNLOAGNKKIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1A377470)

inline static constexpr unsigned int HNLOAGNKKIC_TypeDefinitionIndex = 84045;

	class HNLOAGNKKIC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLOAGNKKIC_CTOR_OFFSET))(this);
		}

	};
