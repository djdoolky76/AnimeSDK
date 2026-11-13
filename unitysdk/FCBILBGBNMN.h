#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FCBILBGBNMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C202620)

inline static constexpr unsigned int FCBILBGBNMN_TypeDefinitionIndex = 43969;

	class FCBILBGBNMN : public ::System::Object
	{
	public:
		::System::Single MMNELBFMJOF; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBILBGBNMN_CTOR_OFFSET))(this);
		}

	};
