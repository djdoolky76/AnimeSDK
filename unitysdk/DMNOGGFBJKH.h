#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define DMNOGGFBJKH_CTOR_OFFSET UNITYSDK_OFFSET(0xFEC1AB0)

inline static constexpr unsigned int DMNOGGFBJKH_TypeDefinitionIndex = 61271;

	class DMNOGGFBJKH : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMNOGGFBJKH_CTOR_OFFSET))(this);
		}

	};
