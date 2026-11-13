#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLAGENLANML;

#define HLFHMKMJNPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFB2D80)

inline static constexpr unsigned int HLFHMKMJNPK_TypeDefinitionIndex = 43134;

	class HLFHMKMJNPK : public ::System::Object
	{
	public:
		::PLAGENLANML* MBKIEFPKECG; // 0x10
		::System::Void _ctor(::PLAGENLANML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLAGENLANML*))((::PBYTE)hIl2Cpp + HLFHMKMJNPK_CTOR_OFFSET))(this, a1);
		}

	};
