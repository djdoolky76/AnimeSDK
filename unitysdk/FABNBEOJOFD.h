#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FABNBEOJOFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA63000)

inline static constexpr unsigned int FABNBEOJOFD_TypeDefinitionIndex = 43387;

	class FABNBEOJOFD : public ::System::Object
	{
	public:
		::System::Int32 LDFEJAAOLKB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FABNBEOJOFD_CTOR_OFFSET))(this);
		}

	};
