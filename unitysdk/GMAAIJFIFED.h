#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GMAAIJFIFED_CTOR_OFFSET UNITYSDK_OFFSET(0x16A44BF0)

inline static constexpr unsigned int GMAAIJFIFED_TypeDefinitionIndex = 66513;

	class GMAAIJFIFED : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMAAIJFIFED_CTOR_OFFSET))(this);
		}

	};
