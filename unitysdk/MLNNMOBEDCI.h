#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define MLNNMOBEDCI__CTOR_OFFSET UNITYSDK_OFFSET(0x14DF2080)

inline static constexpr unsigned int MLNNMOBEDCI_TypeDefinitionIndex = 91193;

class MLNNMOBEDCI : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNNMOBEDCI__CTOR_OFFSET))(this);
	}
};
