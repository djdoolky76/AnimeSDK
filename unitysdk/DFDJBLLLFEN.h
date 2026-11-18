#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DFDJBLLLFEN_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x183358A0)
#define DFDJBLLLFEN_ILEEFLAOOOM_OFFSET UNITYSDK_OFFSET(0x183358F0)
#define DFDJBLLLFEN__CTOR_OFFSET UNITYSDK_OFFSET(0x18335960)

inline static constexpr unsigned int DFDJBLLLFEN_TypeDefinitionIndex = 42427;

class DFDJBLLLFEN : public ::System::Object
{
public:
	::System::Int32 JLPKNDGJJGK; // 0x10
	::System::Int32 HLBKHEFJAPH; // 0x14
	::System::UInt64 JMHDMKKMMIM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDJBLLLFEN__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDJBLLLFEN_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 ILEEFLAOOOM()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDJBLLLFEN_ILEEFLAOOOM_OFFSET))(this);
	}
};
