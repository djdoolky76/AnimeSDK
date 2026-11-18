#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDJDLIJPGDP.h"

namespace System { class Action; }

#define AJNEAMAGNAN__CTOR_OFFSET UNITYSDK_OFFSET(0x17DDC4C0)

inline static constexpr unsigned int AJNEAMAGNAN_TypeDefinitionIndex = 69057;

class AJNEAMAGNAN : public ::FDJDLIJPGDP
{
public:
	::System::Action* GNNACDIOOGL; // 0x18
	::System::Int32 EAPMKDDNPDD; // 0x20
	::System::Int32 DNMGCCOKJCI; // 0x24
	::System::Int32 BKPGFCNOEJM; // 0x28
	::System::Int32 FDOGGANACAP; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNEAMAGNAN__CTOR_OFFSET))(this);
	}
};
