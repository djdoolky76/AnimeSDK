#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define BF1920A4F357BC50__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BF1920A4F357BC50_TypeDefinitionIndex = 7029;

class BF1920A4F357BC50 : public ::E379DE61A548837D
{
public:
	::System::UInt32 A48C5118DAE636D5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF1920A4F357BC50__CTOR_OFFSET))(this);
	}
};
