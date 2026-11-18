#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JOCEKMFJJFM__CTOR_OFFSET UNITYSDK_OFFSET(0x152B3980)

inline static constexpr unsigned int JOCEKMFJJFM_TypeDefinitionIndex = 60475;

class JOCEKMFJJFM : public ::System::Object
{
public:
	::System::UInt32 FAAPBNGLJEJ; // 0x10
	::System::UInt32 JKBLDFBGBPK; // 0x14
	::System::Boolean DBBIDCBDBDB; // 0x18
	::System::Byte _padding0[0x3];
	::System::UInt32 KCNOHOOPNAH; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCEKMFJJFM__CTOR_OFFSET))(this);
	}
};
