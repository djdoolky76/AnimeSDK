#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LBAHPOFBBAJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB5EAD80)

inline static constexpr unsigned int LBAHPOFBBAJ_TypeDefinitionIndex = 72397;

	class LBAHPOFBBAJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAHPOFBBAJ_CTOR_OFFSET))(this);
		}

	};
