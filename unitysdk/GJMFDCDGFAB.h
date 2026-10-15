#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GJMFDCDGFAB_CTOR_OFFSET UNITYSDK_OFFSET(0x15A64240)
#define GJMFDCDGFAB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15A641B0)

inline static constexpr unsigned int GJMFDCDGFAB_TypeDefinitionIndex = 70495;

	class GJMFDCDGFAB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJMFDCDGFAB_CTOR_OFFSET))(this);
		}

		::System::Void Execute(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GJMFDCDGFAB_EXECUTE_OFFSET))(this, a1);
		}

	};
