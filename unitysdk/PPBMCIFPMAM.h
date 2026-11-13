#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PPBMCIFPMAM_CTOR_OFFSET UNITYSDK_OFFSET(0x20703570)

inline static constexpr unsigned int PPBMCIFPMAM_TypeDefinitionIndex = 44712;

	class PPBMCIFPMAM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPBMCIFPMAM_CTOR_OFFSET))(this);
		}

	};
