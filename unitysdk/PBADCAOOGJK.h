#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PBADCAOOGJK_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1A7E2770)
#define PBADCAOOGJK_EPLEBNIPCLE_OFFSET UNITYSDK_OFFSET(0x1A7E27D0)
#define PBADCAOOGJK_JPMEPFPHFLG_OFFSET UNITYSDK_OFFSET(0x1A7E27E0)
#define PBADCAOOGJK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7E2760)

inline static constexpr unsigned int PBADCAOOGJK_TypeDefinitionIndex = 80940;

class PBADCAOOGJK : public ::System::Object
{
public:
	::System::Int32 KLEAODJIKDH; // 0x10
	::System::Boolean GFPEFHHMOAF; // 0x14
	::System::Byte _padding0[0x3];
	::System::Int32 BHJGHNPHALM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBADCAOOGJK__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::Int32 FAKHCNLCBCE, ::System::Int32 DLBFEAOALML)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PBADCAOOGJK_BBOMJDBNHIC_OFFSET))(this, FAKHCNLCBCE, DLBFEAOALML);
	}

	::System::Boolean EPLEBNIPCLE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBADCAOOGJK_EPLEBNIPCLE_OFFSET))(this);
	}

	::System::Void JPMEPFPHFLG(::System::Int32 BEFANBMKPFE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PBADCAOOGJK_JPMEPFPHFLG_OFFSET))(this, BEFANBMKPFE);
	}
};
