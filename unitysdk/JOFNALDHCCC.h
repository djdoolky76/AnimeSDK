#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JOFNALDHCCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE21FE0)

inline static constexpr unsigned int JOFNALDHCCC_TypeDefinitionIndex = 43222;

	class JOFNALDHCCC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFNALDHCCC_CTOR_OFFSET))(this);
		}

	};
