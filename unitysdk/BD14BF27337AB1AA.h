#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define BD14BF27337AB1AA__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BD14BF27337AB1AA_TypeDefinitionIndex = 7047;

class BD14BF27337AB1AA : public ::E379DE61A548837D
{
public:
	::System::UInt32 F5FD986BE1BEFE7C; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BD14BF27337AB1AA__CTOR_OFFSET))(this);
	}
};
