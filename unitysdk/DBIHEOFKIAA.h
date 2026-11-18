#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/SuiteInfo.h"
#include "unitysdk/System/Object.h"

#define DBIHEOFKIAA__CTOR_OFFSET UNITYSDK_OFFSET(0x12BA3920)

inline static constexpr unsigned int DBIHEOFKIAA_TypeDefinitionIndex = 85213;

class DBIHEOFKIAA : public ::System::Object
{
public:
	::System::Boolean MBJCEHLJKLH; // 0x10
	::System::Boolean IDHEPIFNLOB; // 0x11
	::System::Byte _padding0[0x2];
	::Foundation::ViewObject::SuiteInfo HAMCIKDLBAE; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIHEOFKIAA__CTOR_OFFSET))(this);
	}
};
