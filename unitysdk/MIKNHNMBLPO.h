#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIKNHNMBLPO__CTOR_OFFSET UNITYSDK_OFFSET(0x17D35810)

inline static constexpr unsigned int MIKNHNMBLPO_TypeDefinitionIndex = 52007;

class MIKNHNMBLPO : public ::System::Object
{
public:
	::System::Int32 FGBIINJNPDE; // 0x10
	::System::Int32 MHAOKJJNBFC; // 0x14
	::System::Int32 APKIKLPPHEA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKNHNMBLPO__CTOR_OFFSET))(this);
	}
};
