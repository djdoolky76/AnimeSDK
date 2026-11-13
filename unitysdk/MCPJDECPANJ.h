#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPHINGPIEAJ;

#define MCPJDECPANJ_CTOR_OFFSET UNITYSDK_OFFSET(0x183C3A90)
#define MCPJDECPANJ_NACJFKDONCG_OFFSET UNITYSDK_OFFSET(0x183C3910)

inline static constexpr unsigned int MCPJDECPANJ_TypeDefinitionIndex = 79941;

	class MCPJDECPANJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCPJDECPANJ_CTOR_OFFSET))(this);
		}

		::System::Boolean NACJFKDONCG(::LPHINGPIEAJ* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*, ::System::Int32))((::PBYTE)hIl2Cpp + MCPJDECPANJ_NACJFKDONCG_OFFSET))(this, a1, a2);
		}

	};
