#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ELNPPPDBHKC_DHJACDGIAAD;

#define ELNPPPDBHKC_GLOECDPKKGC_DCPCHIKNCAD_OFFSET UNITYSDK_OFFSET(0xFE203B0)
#define ELNPPPDBHKC_GLOECDPKKGC__CTOR_OFFSET UNITYSDK_OFFSET(0xFE203A0)

inline static constexpr unsigned int ELNPPPDBHKC_GLOECDPKKGC_TypeDefinitionIndex = 48237;

class ELNPPPDBHKC_GLOECDPKKGC : public ::System::Object
{
public:
	::ELNPPPDBHKC_DHJACDGIAAD* FGBNBFHOKAA; // 0x10
	::System::Int32 ABHBKFJKINO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_GLOECDPKKGC__CTOR_OFFSET))(this);
	}

	::System::Void DCPCHIKNCAD(::System::Single HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_GLOECDPKKGC_DCPCHIKNCAD_OFFSET))(this, HFMHOELKCAJ);
	}
};
