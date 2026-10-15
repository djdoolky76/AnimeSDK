#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IPLKLKNNKAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16525200)

inline static constexpr unsigned int IPLKLKNNKAJ_TypeDefinitionIndex = 55616;

	class IPLKLKNNKAJ : public ::System::Object
	{
	public:
		::System::Boolean GNDCCBNILML; // 0x10
		::System::Boolean EKGDOELGLFK; // 0x11
		::System::Byte _padding0[0x2];
		::System::Int32 OJMMBJHNOCA; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPLKLKNNKAJ_CTOR_OFFSET))(this);
		}

	};
