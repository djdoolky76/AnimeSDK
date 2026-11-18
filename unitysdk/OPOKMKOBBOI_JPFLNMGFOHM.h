#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KPJADOIPOGJ_GIBIJCGKMNB.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define OPOKMKOBBOI_JPFLNMGFOHM_CHCGMACMJLD_OFFSET UNITYSDK_OFFSET(0x11B4CD50)
#define OPOKMKOBBOI_JPFLNMGFOHM__CTOR_OFFSET UNITYSDK_OFFSET(0x11B4CD40)

inline static constexpr unsigned int OPOKMKOBBOI_JPFLNMGFOHM_TypeDefinitionIndex = 41862;

class OPOKMKOBBOI_JPFLNMGFOHM : public ::KPJADOIPOGJ_GIBIJCGKMNB
{
public:
	::MoleMole::EntityHandle FKNBFFACJPM; // 0x58
	::System::Collections::Generic::List_1<::System::Int32>* ICDHFHCEIDA; // 0x68
	::System::Collections::Generic::List_1<::System::Int32>* IBJMIHFKGND; // 0x70
	::System::Single LLBEKEFONPC; // 0x78
	::System::Int32 JCPJFMEAMIH; // 0x7C
	::System::Boolean OGMDABLBLJC; // 0x80
	::System::Boolean MCJCCJOEKGN; // 0x81
	::System::Byte _padding0[0x2];
	::System::Int32 OMHKJDKFLDF; // 0x84
	::System::Single CCDNKBONPLB; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPOKMKOBBOI_JPFLNMGFOHM__CTOR_OFFSET))(this);
	}

	::System::Void CHCGMACMJLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPOKMKOBBOI_JPFLNMGFOHM_CHCGMACMJLD_OFFSET))(this);
	}
};
