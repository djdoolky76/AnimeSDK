#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAJMENFKJEA.h"
#include "unitysdk/KDDOGILFJEI.h"

#define KJBHIMDDCPG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1CC100)

inline static constexpr unsigned int KJBHIMDDCPG_TypeDefinitionIndex = 94206;

class KJBHIMDDCPG : public ::KDDOGILFJEI
{
public:
	::Il2CppArray<::KAJMENFKJEA>* NFCBKACLFII; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJBHIMDDCPG__CTOR_OFFSET))(this);
	}
};
