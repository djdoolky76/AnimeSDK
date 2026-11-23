#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/F3A7E850877D3BCF/B647C0399A3AF931.h"

#define EDE0140A11CA453F__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int EDE0140A11CA453F_TypeDefinitionIndex = 7472;

class EDE0140A11CA453F : public ::E379DE61A548837D
{
public:
	::F3A7E850877D3BCF::B647C0399A3AF931 FDC95E2703EA87B5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDE0140A11CA453F__CTOR_OFFSET))(this);
	}
};
