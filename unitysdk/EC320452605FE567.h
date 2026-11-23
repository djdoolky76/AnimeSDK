#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define EC320452605FE567__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int EC320452605FE567_TypeDefinitionIndex = 7598;

class EC320452605FE567 : public ::E379DE61A548837D
{
public:
	::System::UInt32 BC0F496AC88979AD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EC320452605FE567__CTOR_OFFSET))(this);
	}
};
