#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define AED75ADFB2EB0D9B__CTOR_OFFSET UNITYSDK_OFFSET(0x17F8E60)

inline static constexpr unsigned int AED75ADFB2EB0D9B_TypeDefinitionIndex = 1049;

class AED75ADFB2EB0D9B : public ::E379DE61A548837D
{
public:
	::System::Single B1DA062BF9FC8A7E; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AED75ADFB2EB0D9B__CTOR_OFFSET))(this);
	}
};
