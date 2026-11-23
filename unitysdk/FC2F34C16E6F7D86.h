#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AD61077CFCBEFAEA.h"
#include "unitysdk/E379DE61A548837D.h"

class A729EBC08763270C;
class E4B39AD1C6472F9F;

#define FC2F34C16E6F7D86__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FC2F34C16E6F7D86_TypeDefinitionIndex = 7539;

class FC2F34C16E6F7D86 : public ::E379DE61A548837D
{
public:
	::System::Int32 AC2808402BD5DDC0; // 0x38
	::System::Byte _padding0[0x4];
	::E4B39AD1C6472F9F* B269BE7620183FF9; // 0x40
	::A729EBC08763270C* EB34B6439BCD1F2E; // 0x48
	::AD61077CFCBEFAEA EA9084D633DAC270; // 0x50
	::System::Boolean B3D18F715EB52F45; // 0x58
	::System::Boolean F9AEB6145FD7A29A; // 0x59
	::System::Boolean A0162E693AB497EF; // 0x5A
	::System::Boolean FB7A83B4BD1B8E1B; // 0x5B
	::System::Single B3E0616A1ADCA907; // 0x5C
	::System::Single FC0A59C741BE5ABC; // 0x60
	::System::Boolean E92EA597378590BF; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FC2F34C16E6F7D86__CTOR_OFFSET))(this);
	}
};
