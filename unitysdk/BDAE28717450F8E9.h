#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class A6EF590088EA17E7;
class BD3A9F619D176EFE;

#define BDAE28717450F8E9__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BDAE28717450F8E9_TypeDefinitionIndex = 896;

class BDAE28717450F8E9 : public ::E379DE61A548837D
{
public:
	::System::Int32 B8809C143ED52022; // 0x38
	::System::Int32 E584E2C8287562DB; // 0x3C
	::A6EF590088EA17E7* E07B1358DCCEDA49; // 0x40
	::System::Boolean AD9E8459D920C04A; // 0x48
	::System::Byte _padding0[0x7];
	::BD3A9F619D176EFE* ABA3334EC72EAC4F; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDAE28717450F8E9__CTOR_OFFSET))(this);
	}
};
