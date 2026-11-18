#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PONLECJAJHK__CTOR_OFFSET UNITYSDK_OFFSET(0x822700)

inline static constexpr unsigned int PONLECJAJHK_TypeDefinitionIndex = 42994;

struct alignas(4) PONLECJAJHK
{
	::System::Boolean HDBDIIHEGNE; // 0x10
	::System::Boolean FECBICFALDN; // 0x11
	::System::Byte _padding0[0x2];
	::System::Single HAKCIMJKPPE; // 0x14
	::System::Single APKHKCCADKP; // 0x18
	::System::Single KAPJDDEABFM; // 0x1C
	::System::Single ELPOGOBCJAC; // 0x20
	::System::Single GLJNNGKPNEG; // 0x24
	::System::Single FIOGPDMNOMI; // 0x28
	::System::Single BKEIFFABBIK; // 0x2C
	::System::Single BMCJCJFKGEC; // 0x30
	::System::Single AMMGIKNMBDA; // 0x34
	::System::Single EPBELHPJIGA; // 0x38

	::System::Void _ctor(::System::Boolean HDBDIIHEGNE, ::System::Boolean FECBICFALDN, ::System::Single HAKCIMJKPPE, ::System::Single APKHKCCADKP, ::System::Single KAPJDDEABFM, ::System::Single ELPOGOBCJAC, ::System::Single GLJNNGKPNEG, ::System::Single FIOGPDMNOMI, ::System::Single BKEIFFABBIK, ::System::Single BMCJCJFKGEC, ::System::Single AMMGIKNMBDA, ::System::Single EPBELHPJIGA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PONLECJAJHK__CTOR_OFFSET))(this, HDBDIIHEGNE, FECBICFALDN, HAKCIMJKPPE, APKHKCCADKP, KAPJDDEABFM, ELPOGOBCJAC, GLJNNGKPNEG, FIOGPDMNOMI, BKEIFFABBIK, BMCJCJFKGEC, AMMGIKNMBDA, EPBELHPJIGA);
	}
};
