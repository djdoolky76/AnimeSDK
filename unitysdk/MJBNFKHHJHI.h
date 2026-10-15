#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MJBNFKHHJHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8FE4C0)

inline static constexpr unsigned int MJBNFKHHJHI_TypeDefinitionIndex = 42448;

	class MJBNFKHHJHI : public ::System::Object
	{
	public:
		::System::Boolean CAGCHKJHMPD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBNFKHHJHI_CTOR_OFFSET))(this);
		}

	};
