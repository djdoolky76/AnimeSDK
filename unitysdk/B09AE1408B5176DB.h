#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define B09AE1408B5176DB__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B09AE1408B5176DB_TypeDefinitionIndex = 432;

class B09AE1408B5176DB : public ::E379DE61A548837D
{
public:
	::System::Int32 FBAFA13454D09FDC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B09AE1408B5176DB__CTOR_OFFSET))(this);
	}
};
