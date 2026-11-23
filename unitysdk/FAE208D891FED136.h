#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define FAE208D891FED136__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FAE208D891FED136_TypeDefinitionIndex = 10220;

class FAE208D891FED136 : public ::E379DE61A548837D
{
public:
	::System::Boolean FE638921F086BCAB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAE208D891FED136__CTOR_OFFSET))(this);
	}
};
