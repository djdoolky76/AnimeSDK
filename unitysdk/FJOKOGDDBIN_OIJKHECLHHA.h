#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NNAMAFIPLGB;

#define FJOKOGDDBIN_OIJKHECLHHA_MHOKALAHFLK_OFFSET UNITYSDK_OFFSET(0x179AF340)
#define FJOKOGDDBIN_OIJKHECLHHA__CTOR_OFFSET UNITYSDK_OFFSET(0x179AF330)

inline static constexpr unsigned int FJOKOGDDBIN_OIJKHECLHHA_TypeDefinitionIndex = 85134;

class FJOKOGDDBIN_OIJKHECLHHA : public ::System::Object
{
public:
	::System::Int32 MDJFJPHNGCK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJOKOGDDBIN_OIJKHECLHHA__CTOR_OFFSET))(this);
	}

	::System::Boolean MHOKALAHFLK(::NNAMAFIPLGB* NFFNEFLKPDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::NNAMAFIPLGB*))((::PBYTE)hIl2Cpp + FJOKOGDDBIN_OIJKHECLHHA_MHOKALAHFLK_OFFSET))(this, NFFNEFLKPDG);
	}
};
