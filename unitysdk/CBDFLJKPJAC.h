#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CBDFLJKPJAC_CTOR_OFFSET UNITYSDK_OFFSET(0xC4985A0)

inline static constexpr unsigned int CBDFLJKPJAC_TypeDefinitionIndex = 80197;

	class CBDFLJKPJAC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDFLJKPJAC_CTOR_OFFSET))(this);
		}

	};
