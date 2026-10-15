#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IPLKLKNNKAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x165170F0)

inline static constexpr unsigned int IPLKLKNNKAJ_TypeDefinitionIndex = 55616;

	class IPLKLKNNKAJ : public ::System::Object
	{
	public:
		::System::Int32 OJMMBJHNOCA; // 0x10
		::System::Boolean GNDCCBNILML; // 0x14
		::System::Boolean EKGDOELGLFK; // 0x15
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPLKLKNNKAJ_CTOR_OFFSET))(this);
		}

	};
