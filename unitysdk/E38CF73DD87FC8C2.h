#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/EB107F12A6DD6B70.h"

class AB642D1382756991;
class E945252ECE50FE4E;

#define E38CF73DD87FC8C2__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E38CF73DD87FC8C2_TypeDefinitionIndex = 9526;

class E38CF73DD87FC8C2 : public ::E379DE61A548837D
{
public:
	::System::Int32 E8A1A1345CE071C9; // 0x38
	::System::Byte _padding0[0x4];
	::AB642D1382756991* E63E0F25F251B753; // 0x40
	::System::UInt32 EF0122FCE8B57425; // 0x48
	::System::Byte _padding1[0x4];
	::E945252ECE50FE4E* A46FF0CFE99DDD18; // 0x50
	::E68AA4EB51923C98::EB107F12A6DD6B70 E8BC248B0A0523F7; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E38CF73DD87FC8C2__CTOR_OFFSET))(this);
	}
};
