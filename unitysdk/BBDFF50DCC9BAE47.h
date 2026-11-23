#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class E6350CA2988BAC74;
class E937733544524006;

#define BBDFF50DCC9BAE47__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BBDFF50DCC9BAE47_TypeDefinitionIndex = 8112;

class BBDFF50DCC9BAE47 : public ::E379DE61A548837D
{
public:
	::System::Boolean BE0AD348113B78C5; // 0x38
	::System::Byte _padding0[0x7];
	::E6350CA2988BAC74* AB987431D8E7DB64; // 0x40
	::E937733544524006* E15C284FA47E14CD; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDFF50DCC9BAE47__CTOR_OFFSET))(this);
	}
};
