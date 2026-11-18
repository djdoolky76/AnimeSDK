#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KIOGMGJAENG__CTOR_OFFSET UNITYSDK_OFFSET(0x16809B10)

inline static constexpr unsigned int KIOGMGJAENG_TypeDefinitionIndex = 57170;

class KIOGMGJAENG : public ::System::Object
{
public:
	::System::Boolean NCHODCGOJLP; // 0x10
	::System::Byte _padding0[0x3];
	::System::Int32 APKIKLPPHEA; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIOGMGJAENG__CTOR_OFFSET))(this);
	}
};
