#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLGFEGOCFLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB16C90)

inline static constexpr unsigned int CLGFEGOCFLJ_TypeDefinitionIndex = 44704;

	class CLGFEGOCFLJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLGFEGOCFLJ_CTOR_OFFSET))(this);
		}

	};
