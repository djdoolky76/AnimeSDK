#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FCLGKGNNJOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C028A30)

inline static constexpr unsigned int FCLGKGNNJOA_TypeDefinitionIndex = 76170;

	class FCLGKGNNJOA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLGKGNNJOA_CTOR_OFFSET))(this);
		}

	};
