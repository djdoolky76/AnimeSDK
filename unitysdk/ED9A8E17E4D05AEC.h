#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/FE6D2BBF77BB167C.h"

class AB642D1382756991;
namespace System { class String; }

#define ED9A8E17E4D05AEC__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int ED9A8E17E4D05AEC_TypeDefinitionIndex = 10005;

class ED9A8E17E4D05AEC : public ::E379DE61A548837D
{
public:
	::System::Int32 E8A1A1345CE071C9; // 0x38
	::System::Byte _padding0[0x4];
	::AB642D1382756991* E63E0F25F251B753; // 0x40
	::System::String* B0E2E0BD7BF697D7; // 0x48
	::E68AA4EB51923C98::FE6D2BBF77BB167C E8BC248B0A0523F7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ED9A8E17E4D05AEC__CTOR_OFFSET))(this);
	}
};
