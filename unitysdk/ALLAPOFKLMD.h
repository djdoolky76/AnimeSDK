#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ALLAPOFKLMD_CTOR_OFFSET UNITYSDK_OFFSET(0x1556F840)

inline static constexpr unsigned int ALLAPOFKLMD_TypeDefinitionIndex = 81280;

	class ALLAPOFKLMD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLAPOFKLMD_CTOR_OFFSET))(this);
		}

	};
