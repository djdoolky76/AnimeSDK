#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class AB642D1382756991;
class E3EBC54DD7CB1278;

#define ABB1095C986B3F89__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC1F20)

inline static constexpr unsigned int ABB1095C986B3F89_TypeDefinitionIndex = 9381;

class ABB1095C986B3F89 : public ::E379DE61A548837D
{
public:
	::System::Int32 E8A1A1345CE071C9; // 0x38
	::System::Byte _padding0[0x4];
	::AB642D1382756991* E99C1CEF85982973; // 0x40
	::AB642D1382756991* E63E0F25F251B753; // 0x48
	::E3EBC54DD7CB1278* E646D403F3BD6C96; // 0x50
	::System::Int32 FBB722B1B3122CE1; // 0x58
	::System::UInt32 E43E467F516F27D3; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABB1095C986B3F89__CTOR_OFFSET))(this);
	}
};
