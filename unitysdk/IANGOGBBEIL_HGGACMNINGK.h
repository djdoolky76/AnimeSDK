#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FFEOMOMFAKP;
class IANGOGBBEIL_LJCPMOOMOFF;

#define IANGOGBBEIL_HGGACMNINGK_EGFCNBAPOMI_OFFSET UNITYSDK_OFFSET(0x153982A0)
#define IANGOGBBEIL_HGGACMNINGK_LAGJIADIDMC_OFFSET UNITYSDK_OFFSET(0x153983D0)
#define IANGOGBBEIL_HGGACMNINGK__CTOR_OFFSET UNITYSDK_OFFSET(0x15398290)

inline static constexpr unsigned int IANGOGBBEIL_HGGACMNINGK_TypeDefinitionIndex = 57492;

class IANGOGBBEIL_HGGACMNINGK : public ::System::Object
{
public:
	::IANGOGBBEIL_LJCPMOOMOFF* FGBNBFHOKAA; // 0x10
	::FFEOMOMFAKP* BMNCHNFJFGE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IANGOGBBEIL_HGGACMNINGK__CTOR_OFFSET))(this);
	}

	::System::Void EGFCNBAPOMI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IANGOGBBEIL_HGGACMNINGK_EGFCNBAPOMI_OFFSET))(this);
	}

	::System::Void LAGJIADIDMC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IANGOGBBEIL_HGGACMNINGK_LAGJIADIDMC_OFFSET))(this);
	}
};
