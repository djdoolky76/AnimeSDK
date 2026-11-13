#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LDCOJFNHIHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC77ED0)

inline static constexpr unsigned int LDCOJFNHIHL_TypeDefinitionIndex = 74958;

	class LDCOJFNHIHL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCOJFNHIHL_CTOR_OFFSET))(this);
		}

	};
