#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/F4287FC6BFB0DD31.h"

#define FFCC9399584D63F9__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FFCC9399584D63F9_TypeDefinitionIndex = 8020;

class FFCC9399584D63F9 : public ::E379DE61A548837D
{
public:
	::F4287FC6BFB0DD31 F3D49608DC72BB45; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFCC9399584D63F9__CTOR_OFFSET))(this);
	}
};
