#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define LHODFPJIIAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD418E0)

inline static constexpr unsigned int LHODFPJIIAB_TypeDefinitionIndex = 6311;

	class LHODFPJIIAB : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHODFPJIIAB_CTOR_OFFSET))(this);
		}

	};
