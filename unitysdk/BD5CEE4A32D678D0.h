#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E12F55A5FCCCF1EC.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/B5A4EFD52AC286F6.h"

#define BD5CEE4A32D678D0__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BD5CEE4A32D678D0_TypeDefinitionIndex = 9749;

class BD5CEE4A32D678D0 : public ::E379DE61A548837D
{
public:
	::System::Int32 E8A1A1345CE071C9; // 0x38
	::System::Byte _padding0[0x4];
	::System::UInt64 E97A804AAC41654A; // 0x40
	::System::UInt64 F1795B35773A25E1; // 0x48
	::E68AA4EB51923C98::B5A4EFD52AC286F6 B68177EAA248C9A2; // 0x50
	::System::Byte _padding1[0x4];
	::E12F55A5FCCCF1EC AA265DB7AD27CAEF; // 0x58
	::E12F55A5FCCCF1EC F622BFED695BFD03; // 0x60
	::E12F55A5FCCCF1EC A44FAEEE56507C0A; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BD5CEE4A32D678D0__CTOR_OFFSET))(this);
	}
};
