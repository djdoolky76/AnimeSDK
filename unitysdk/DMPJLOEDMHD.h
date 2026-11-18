#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCDACLHLGHB.h"

class PIPINFDCBHJ;
namespace System { class String; }

#define DMPJLOEDMHD_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x12BD2360)
#define DMPJLOEDMHD__CTOR_OFFSET UNITYSDK_OFFSET(0x12BD2350)

inline static constexpr unsigned int DMPJLOEDMHD_TypeDefinitionIndex = 62291;

class DMPJLOEDMHD : public ::HCDACLHLGHB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPJLOEDMHD__CTOR_OFFSET))(this);
	}

	::PIPINFDCBHJ* CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::System::Int32 ABHBKFJKINO, ::System::String* MCOHLHMKLIP, ::System::Int32 DBHFIJGFPOK, ::System::Int32 HLBKHEFJAPH)
	{
		return ((::PIPINFDCBHJ*(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DMPJLOEDMHD_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, ABHBKFJKINO, MCOHLHMKLIP, DBHFIJGFPOK, HLBKHEFJAPH);
	}
};
