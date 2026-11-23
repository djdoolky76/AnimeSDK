#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class AB1D147132C4D43A;
class AB642D1382756991;

#define A4786DFEDE57A83A__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A4786DFEDE57A83A_TypeDefinitionIndex = 9875;

class A4786DFEDE57A83A : public ::E379DE61A548837D
{
public:
	::System::Int32 E8A1A1345CE071C9; // 0x38
	::System::Byte _padding0[0x4];
	::AB642D1382756991* E99C1CEF85982973; // 0x40
	::AB642D1382756991* E63E0F25F251B753; // 0x48
	::AB1D147132C4D43A* B9EC2F72CEDA6EF9; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A4786DFEDE57A83A__CTOR_OFFSET))(this);
	}
};
