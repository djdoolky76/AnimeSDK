#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BOFJHGFAJBN.h"

#define CPADCLFMKLK_CTOR_OFFSET UNITYSDK_OFFSET(0x19178660)

inline static constexpr unsigned int CPADCLFMKLK_TypeDefinitionIndex = 50728;

	class CPADCLFMKLK : public ::BOFJHGFAJBN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPADCLFMKLK_CTOR_OFFSET))(this);
		}

	};
