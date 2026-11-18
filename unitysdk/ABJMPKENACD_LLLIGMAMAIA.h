#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ABJMPKENACD;
namespace System::Threading { class CancellationTokenSource; }

#define ABJMPKENACD_LLLIGMAMAIA_CFNKCPHBNKE_OFFSET UNITYSDK_OFFSET(0x134A1820)
#define ABJMPKENACD_LLLIGMAMAIA__CTOR_OFFSET UNITYSDK_OFFSET(0x134A1810)

inline static constexpr unsigned int ABJMPKENACD_LLLIGMAMAIA_TypeDefinitionIndex = 88607;

class ABJMPKENACD_LLLIGMAMAIA : public ::System::Object
{
public:
	::System::Threading::CancellationTokenSource* MPPGOFIIMEM; // 0x10
	::ABJMPKENACD* KLHPEBKNIFB; // 0x18
	::System::Boolean NELCEOFGEFI; // 0x20
	::System::Byte _padding0[0x3];
	::System::Int32 NPAKMAGBOCH; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_LLLIGMAMAIA__CTOR_OFFSET))(this);
	}

	::System::Void CFNKCPHBNKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_LLLIGMAMAIA_CFNKCPHBNKE_OFFSET))(this);
	}
};
