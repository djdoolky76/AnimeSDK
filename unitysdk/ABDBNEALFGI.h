#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AHDJACCHDCE.h"

#define ABDBNEALFGI_IOJMJBCAADB_OFFSET UNITYSDK_OFFSET(0x18C9F9A0)

inline static constexpr unsigned int ABDBNEALFGI_TypeDefinitionIndex = 55938;

	class ABDBNEALFGI : public ::System::Object
	{
	public:
		static ::System::Boolean IOJMJBCAADB(::AHDJACCHDCE a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::AHDJACCHDCE, ::System::Boolean))((::PBYTE)hIl2Cpp + ABDBNEALFGI_IOJMJBCAADB_OFFSET))(a1, a2);
		}

	};
