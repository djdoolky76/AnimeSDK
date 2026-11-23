#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define A6CFD3FF142C0906__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A6CFD3FF142C0906_TypeDefinitionIndex = 1668;

class A6CFD3FF142C0906 : public ::E379DE61A548837D
{
public:
	::System::Boolean FFA3A26F9BE03A17; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A6CFD3FF142C0906__CTOR_OFFSET))(this);
	}
};
