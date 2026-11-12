#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LBAHPOFBBAJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBE7C640)

inline static constexpr unsigned int LBAHPOFBBAJ_TypeDefinitionIndex = 74476;

	class LBAHPOFBBAJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAHPOFBBAJ_CTOR_OFFSET))(this);
		}

	};
